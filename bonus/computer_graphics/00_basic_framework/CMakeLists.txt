cmake_minimum_required(VERSION 3.14)

project(BasicFramework)

include(FetchContent)

FetchContent_Declare(
        glfw
        URL https://github.com/glfw/glfw/archive/refs/tags/3.3.8.zip
)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(glfw)

add_library(basic_framework STATIC
    src/glfw_base.cpp
)

target_include_directories(basic_framework
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/../common/glad/
)

target_link_libraries(basic_framework PUBLIC glfw glad)

if (WIN32)
    target_link_libraries(basic_framework PUBLIC opengl32)
endif()

add_executable(basic_framework_app
    src/main.cpp
)

target_link_libraries(basic_framework_app PRIVATE basic_framework)
