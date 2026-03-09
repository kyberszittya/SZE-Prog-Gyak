//
// Created by keret on 2026. 03. 09..
//

#include <iostream>
#include "common.h"





int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    int* din_adat = new int[n];
    fill_array_random(din_adat, n);
    std::cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        std::cout << din_adat[i] << " ";
    }
    std::cout << std::endl;
    delete[] din_adat;
    din_adat = nullptr;
}