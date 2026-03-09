add_library(glad STATIC
    glad/src/gl.c
)

target_include_directories(glad
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/glad/include
)

