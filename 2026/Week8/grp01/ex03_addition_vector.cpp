//
// Created by keret on 2026. 03. 23..
//

#include <iostream>

// Konstans hossz
#define N 10

void print_vector(int* vec, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << vec[i] << '\n';
    }
}

int* fill_vector(int tomb[], int length) {
    for (int i = 0; i < length; i++) {
        tomb[i] = i + 1;
    }
    return tomb;
}

int main(int argc, char* argv[]) {
    int B[N];
    std::cout << B << std::endl;
    fill_vector(B, N);
    print_vector(B, N);
}