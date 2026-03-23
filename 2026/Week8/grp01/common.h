//
// Created by keret on 2026. 03. 22..
//

#ifndef HW_2026_COMMON_H
#define HW_2026_COMMON_H

#include <iostream>
#include <cstdlib>
#include <random>

void print_matrix(const float* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i * cols + j] << " ";
        }
        std::cout << std::endl;
    }
}

void generate_random_matrix(float* matrix, int rows, int cols) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);
    for (int i = 0; i < rows * cols; ++i) {
        matrix[i] = static_cast<float>(dis(gen));
    }
}

#endif //HW_2026_COMMON_H