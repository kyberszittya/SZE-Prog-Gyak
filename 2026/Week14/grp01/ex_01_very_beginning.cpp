//
// Created by keret on 2026. 05. 04..
//

#include <iostream>

#define N 100

int main() {
    for (int i = 1; i < N + 1; i++) {

        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}