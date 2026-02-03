//
// Created by keret on 2025. 05. 30..
//

// Matrix transpose

#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 3

int** transpose(int** matrix, int n) {
    // Create a new matrix to hold the transposed values
    int** transposed = new int*[n];
    for (int i = 0; i < n; i++) {
        transposed[i] = new int[n];
    }
    // Fill the transposed matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

int main(int argc, char* argv[])
{
    // Setup random
    srand(time(0));
    // Set seed for random number generation
    srand(88); // Uncomment this line to use a fixed seed for reproducibility
    // Randomly initialize a matrix
    int** matrix = new int*[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
        for (int j = 0; j < N; j++) {
            // Random number
            matrix[i][j] = rand() % 100; // Random number between 0 and 99
        }
    }

    // Print the original matrix
    std::cout << "Original Matrix:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // Print the transposed matrix
    std::cout << "Transposed Matrix:" << std::endl;
    // Transpose the matrix
    int** transposed = transpose(matrix, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // Clean up memory
    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
        delete[] transposed[i];
    }
    delete[] matrix;
    delete[] transposed;
}
