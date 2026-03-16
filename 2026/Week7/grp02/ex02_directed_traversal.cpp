//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#include "common.h"

#define ROWS 5
#define COLS 7

int main(int argc, char** argv) {
    int arr[ROWS][COLS];
    fill_random(&arr[0][0], ROWS, COLS);
    // Fix row 4 and iterate
    std::cout << "Fix row 4:\n";
    for (int j = 0; j < COLS; ++j) {
        std::cout << arr[4][j] << "\t";
    }
    std::cout << std::endl;
    // Fix column 2 and iterate
    std::cout << "Fix column 2:\n";
    for (int j = 0; j < ROWS; ++j) {
        std::cout << arr[j][2] << "\n";
    }
}