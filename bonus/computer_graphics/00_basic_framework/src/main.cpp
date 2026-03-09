#include <cmath>
#include <iostream>

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "basic_framework/glfw_base.hpp"

namespace {

constexpr float PI = 3.14159265358979323846f;

struct Mat4 {
    float v[16]{};
};

Mat4 identity() {
    Mat4 m{};
    m.v[0] = 1.0f;
    m.v[5] = 1.0f;
    m.v[10] = 1.0f;
    m.v[15] = 1.0f;
    return m;
}

Mat4 multiply(const Mat4& a, const Mat4& b) {
    Mat4 out{};
    for (int c = 0; c < 4; ++c) {
        for (int r = 0; r < 4; ++r) {
            out.v[c * 4 + r] =
                a.v[0 * 4 + r] * b.v[c * 4 + 0] +
                a.v[1 * 4 + r] * b.v[c * 4 + 1] +
                a.v[2 * 4 + r] * b.v[c * 4 + 2] +
                a.v[3 * 4 + r] * b.v[c * 4 + 3];
        }
    }
    return out;
}

Mat4 translation(float x, float y, float z) {
    Mat4 m = identity();
    m.v[12] = x;
    m.v[13] = y;
    m.v[14] = z;
    return m;
}

Mat4 rotation_y(float angle) {
    Mat4 m = identity();
    const float c = std::cos(angle);
    const float s = std::sin(angle);
    m.v[0] = c;
    m.v[2] = -s;
    m.v[8] = s;
    m.v[10] = c;
    return m;
}

Mat4 rotation_x(float angle) {
    Mat4 m = identity();
    const float c = std::cos(angle);
    const float s = std::sin(angle);
    m.v[5] = c;
    m.v[6] = s;
    m.v[9] = -s;
    m.v[10] = c;
    return m;
}

Mat4 perspective(float fov_deg, float aspect, float near_z, float far_z) {
    const float f = 1.0f / std::tan((fov_deg * PI / 180.0f) * 0.5f);
    Mat4 m{};
    m.v[0] = f / aspect;
    m.v[5] = f;
    m.v[10] = (far_z + near_z) / (near_z - far_z);
    m.v[11] = -1.0f;
    m.v[14] = (2.0f * far_z * near_z) / (near_z - far_z);
    return m;
}

GLuint compile_shader(GLenum type, const char* source) {
    const GLuint shader = glCreateShader(type);
    glShaderSource(shader, 1, &source, nullptr);
    glCompileShader(shader);

    GLint ok = 0;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (ok != GL_TRUE) {
        GLint len = 0;
        glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);
        std::string log(static_cast<size_t>(len), '\0');
        glGetShaderInfoLog(shader, len, nullptr, log.data());
        std::cerr << "Shader compile error: " << log << std::endl;
        glDeleteShader(shader);
        return 0;
    }

    return shader;
}

GLuint create_program(const char* vs_src, const char* fs_src) {
    const GLuint vs = compile_shader(GL_VERTEX_SHADER, vs_src);
    if (vs == 0) {
        return 0;
    }

    const GLuint fs = compile_shader(GL_FRAGMENT_SHADER, fs_src);
    if (fs == 0) {
        glDeleteShader(vs);
        return 0;
    }

    const GLuint program = glCreateProgram();
    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);

    glDeleteShader(vs);
    glDeleteShader(fs);

    GLint ok = 0;
    glGetProgramiv(program, GL_LINK_STATUS, &ok);
    if (ok != GL_TRUE) {
        GLint len = 0;
        glGetProgramiv(program, GL_INFO_LOG_LENGTH, &len);
        std::string log(static_cast<size_t>(len), '\0');
        glGetProgramInfoLog(program, len, nullptr, log.data());
        std::cerr << "Program link error: " << log << std::endl;
        glDeleteProgram(program);
        return 0;
    }

    return program;
}

} // namespace

int main() {
    if (!basic_framework::init_glfw()) {
        std::cerr << "Failed to initialize GLFW." << std::endl;
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = basic_framework::create_window(800, 600, "Rotating Octahedron");
    if (window == nullptr) {
        std::cerr << "Failed to create GLFW window." << std::endl;
        basic_framework::shutdown_glfw();
        return 1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL(reinterpret_cast<GLADloadfunc>(glfwGetProcAddress))) {
        std::cerr << "Failed to initialize GLAD." << std::endl;
        basic_framework::shutdown_glfw();
        return 1;
    }

    glEnable(GL_DEPTH_TEST);

    const char* vs_src = R"(
        #version 330 core
        layout (location = 0) in vec3 aPos;
        layout (location = 1) in vec3 aColor;

        uniform mat4 uMVP;

        out vec3 vColor;

        void main() {
            gl_Position = uMVP * vec4(aPos, 1.0);
            vColor = aColor;
        }
    )";

    const char* fs_src = R"(
        #version 330 core
        in vec3 vColor;
        out vec4 FragColor;

        void main() {
            FragColor = vec4(vColor, 1.0);
        }
    )";

    const GLuint program = create_program(vs_src, fs_src);
    if (program == 0) {
        basic_framework::shutdown_glfw();
        return 1;
    }

    const float vertices[] = {
         0.0f,  1.0f,  0.0f,  1.0f, 0.2f, 0.2f,
         1.0f,  0.0f,  0.0f,  0.2f, 1.0f, 0.2f,
         0.0f,  0.0f,  1.0f,  0.2f, 0.2f, 1.0f,
        -1.0f,  0.0f,  0.0f,  1.0f, 1.0f, 0.2f,
         0.0f,  0.0f, -1.0f,  1.0f, 0.2f, 1.0f,
         0.0f, -1.0f,  0.0f,  0.2f, 1.0f, 1.0f
    };

    const unsigned int indices[] = {
        0, 1, 2,
        0, 2, 3,
        0, 3, 4,
        0, 4, 1,
        5, 2, 1,
        5, 3, 2,
        5, 4, 3,
        5, 1, 4
    };

    GLuint vao = 0;
    GLuint vbo = 0;
    GLuint ebo = 0;
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glGenBuffers(1, &ebo);

    glBindVertexArray(vao);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), reinterpret_cast<void*>(0));
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), reinterpret_cast<void*>(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(0);

    const GLint mvp_loc = glGetUniformLocation(program, "uMVP");

    while (!basic_framework::should_close(window)) {
        const float t = static_cast<float>(glfwGetTime());
        int w = 1;
        int h = 1;
        glfwGetFramebufferSize(window, &w, &h);
        glViewport(0, 0, w, h);

        glClearColor(0.08f, 0.1f, 0.14f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        const float aspect = static_cast<float>(w) / static_cast<float>(h == 0 ? 1 : h);
        const Mat4 proj = perspective(60.0f, aspect, 0.1f, 100.0f);
        const Mat4 view = translation(0.0f, 0.0f, -4.0f);
        const Mat4 model = multiply(rotation_y(t), rotation_x(t * 0.7f));
        const Mat4 mvp = multiply(proj, multiply(view, model));

        glUseProgram(program);
        glUniformMatrix4fv(mvp_loc, 1, GL_FALSE, mvp.v);
        glBindVertexArray(vao);
        glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(sizeof(indices) / sizeof(indices[0])), GL_UNSIGNED_INT, nullptr);

        basic_framework::poll_events();
        basic_framework::swap_buffers(window);
    }

    glDeleteBuffers(1, &ebo);
    glDeleteBuffers(1, &vbo);
    glDeleteVertexArrays(1, &vao);
    glDeleteProgram(program);

    basic_framework::shutdown_glfw();
    return 0;
}

