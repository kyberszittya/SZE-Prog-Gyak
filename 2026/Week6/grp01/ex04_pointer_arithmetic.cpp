//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int* ptr = &array[0]; // Point to the first element of the array
    // Print the elements of the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *ptr << ", mem: " << ptr <<  std::endl;
        ptr++; // Move the pointer to the next element
    }
}