//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

void swap_values(int* a, int* b) {
    int temp = *a; // Store the value at address a in temp
    *a = *b;       // Assign the value at address b to address a
    *b = temp;     // Assign the value stored in temp to address b
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swap_values(&x, &y); // Pass the addresses of x and y to the function

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}