#include "basic_framework/glfw_base.hpp"

#include <GLFW/glfw3.h>

namespace basic_framework {

bool init_glfw() {
    return glfwInit() == GLFW_TRUE;
}

GLFWwindow* create_window(int width, int height, const char* title) {
    return glfwCreateWindow(width, height, title, nullptr, nullptr);
}

bool should_close(GLFWwindow* window) {
    return glfwWindowShouldClose(window) == GLFW_TRUE;
}

void poll_events() {
    glfwPollEvents();
}

void swap_buffers(GLFWwindow* window) {
    glfwSwapBuffers(window);
}

void shutdown_glfw() {
    glfwTerminate();
}

} // namespace basic_framework

