//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#define ROWS 4
#define COLS 6

int main() {
    // 4 rows and 6 columns
    int arr[ROWS][COLS];
    // Fill the array with values
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = i + j; // Fill with values from 1 to 24
        }
    }
    // Print the array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}