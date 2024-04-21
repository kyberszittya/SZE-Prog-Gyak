cmake_minimum_required(VERSION 3.22)
project(Gyak10)

set(CMAKE_CXX_STANDARD 17)

add_executable(Gyak10 main.cpp
        telephely.h
        ceg.h
        ceg.cpp
        telephely.cpp
        datum.h
        datum.cpp)
