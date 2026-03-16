//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#include "common.h"

#define ROWS 5
#define COLS 5



int main(int argc, char** argv) {
    int arr[ROWS][COLS];
    fill_random(&arr[0][0], ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
