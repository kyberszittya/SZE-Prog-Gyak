//
// Created by keret on 2026. 03. 16..
//
#include <iostream>
#include <random>

#define ROWS 5
#define COLS 5

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
