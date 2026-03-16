//
// Created by keret on 2026. 03. 16..
//

#ifndef HW_2026_COMMON_H
#define HW_2026_COMMON_H

#include <random>

void fill_random(int* arr, int rows, int cols) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i * cols + j] = dis(gen);
        }
    }
}

#endif //HW_2026_COMMON_H