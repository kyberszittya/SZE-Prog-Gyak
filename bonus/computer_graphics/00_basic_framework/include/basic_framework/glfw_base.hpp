#pragma once

struct GLFWwindow;

namespace basic_framework {

bool init_glfw();
GLFWwindow* create_window(int width, int height, const char* title);
bool should_close(GLFWwindow* window);
void poll_events();
void swap_buffers(GLFWwindow* window);
void shutdown_glfw();

} // namespace basic_framework

