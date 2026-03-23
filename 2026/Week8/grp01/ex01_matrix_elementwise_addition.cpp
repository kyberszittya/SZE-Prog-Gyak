//
// Created by keret on 2026. 03. 22..
//

#include "common.h"

void elementwise_add(const float* A, const float* B, float* C,
    int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    float A[rows * cols];
    float B[rows * cols];
    float C[rows * cols];

    generate_random_matrix(A, rows, cols);
    generate_random_matrix(B, rows, cols);

    std::cout << "Matrix A:" << std::endl;
    print_matrix(A, rows, cols);

    std::cout << "Matrix B:" << std::endl;
    print_matrix(B, rows, cols);

    elementwise_add(A, B, C, rows, cols);

    std::cout << "Result of A + B:" << std::endl;
    print_matrix(C, rows, cols);

    return 0;
}