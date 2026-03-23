//
// Created by keret on 2026. 03. 23..
//

#include <iostream>

int main() {
    int a = 242;
    std::cout << "Érték: " << a << std::endl;
    int* ptr;
    ptr = &a;
    std::cout << "Cím: " << ptr << std::endl;
    std::cout << "Cím (hex): " << &a << std::endl;
    // Dereferencia (érték a cím alapján)
    std::cout << "Dereferencia: " << *ptr << std::endl;
    //
    int* ptr2 = &a;
    std::cout << ptr2 << std::endl;
    std::cout << (ptr == ptr2) << std::endl;
    std::cout << "ptr2 érték: " << *ptr2 << std::endl;
    // A érték megváltoztatása
    a = 500;
    std::cout << "A új érték: " << a << std::endl;
    // Két pointer által dereferált érték
    std::cout << "" << *ptr << " " << *ptr2 << std::endl;

}