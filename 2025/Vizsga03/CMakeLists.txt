cmake_minimum_required(VERSION 3.28)
project(Vizsga03)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

add_executable(Vizsga03 main.cpp)
add_executable(Vizsga03_02 vizsga_triibonacci.cpp)
add_executable(Vizsga03_03 vizsga_list_length.cpp)
add_executable(Vizsga03_04 vizsga_diadic.cpp
        vizsga_haromszog.cpp)
