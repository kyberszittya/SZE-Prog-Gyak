//
// Created by keret on 2026. 03. 09..
//
#include <iostream>

#include "common.h"

#define N 1000000

int main() {
    // Memory leak: we allocate memory but never free it
    // In a real application, this would lead to increased memory usage over time
    // DEMONSTRATION: add while loop to show the leak in action
    int* n = new int[N];
    fill_array_random(n, N);
    std::cout << "First element: " << n[0] << std::endl
                << "Last element: " << n[N - 1] << std::endl;

}