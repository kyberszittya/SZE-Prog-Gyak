//
// Created by keret on 2026. 03. 09..
//

#ifndef HW_2026_COMMON_H
#define HW_2026_COMMON_H


#include <random>

void fill_array_random(int* arr, int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 100.0);
    for (int i = 0; i < size; ++i) {
        arr[i] = dis(gen);
    }
}

#endif //HW_2026_COMMON_H