//
// Created by keret on 2026. 03. 22..
//

#include "common.h"

#define DIM_1 2
#define DIM_2 3

int min_dim = (DIM_1 < DIM_2) ? DIM_1 : DIM_2;

void matrix_multiply(const float* A, const float* B, float* C, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i * colsB + j] = 0.0f;
            for (int k = 0; k < colsA; ++k) {
                C[i * colsB + j] += A[i * colsA + k] * B[k * colsB + j];
            }
        }
    }
}

int main() {
    float matrixA[DIM_1 * DIM_2];
    float matrixB[DIM_2 * DIM_1];
    float* result = new float[min_dim * min_dim];

    generate_random_matrix(matrixA, DIM_1, DIM_2);
    generate_random_matrix(matrixB, DIM_2, DIM_1);

    std::cout << "Matrix A:" << std::endl;
    print_matrix(matrixA, DIM_1, DIM_2);
    std::cout << "Matrix B:" << std::endl;
    print_matrix(matrixB, DIM_2, DIM_1);

    matrix_multiply(matrixA, matrixB, result, DIM_1, DIM_2, DIM_1);

    std::cout << "Result of A * B:" << std::endl;
    print_matrix(result, min_dim, min_dim);

    delete [] result;

    return 0;
}