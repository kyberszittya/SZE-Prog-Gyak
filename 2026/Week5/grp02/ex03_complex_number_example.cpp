//
// Created by keret on 2026. 03. 02..
//

#include <iostream>
#include <cmath>

struct ComplexNumber {
    double real;
    double imag;
};

ComplexNumber add(ComplexNumber a, ComplexNumber b) {
    ComplexNumber result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

void printComplex(ComplexNumber c) {
    std::cout << c.real << " + " << c.imag << "i" << '\n';
}

int main() {
    ComplexNumber c1, c2;
    std::cout << "Komplex számok kezelése példa program\n";
    std::cout << "Add meg az első komplex számot (c1): \n";
    std::cout << "c1.real :";
    std::cin >> c1.real;
    std::cout << "c1.imag :";
    std::cin >> c1.imag;
    std::cout << "Add meg az második komplex számot (c2): \n";
    std::cout << "c2.real :";
    std::cin >> c2.real;
    std::cout << "c2.imag :";
    std::cin >> c2.imag;
    ComplexNumber sum = add(c1, c2);
    std::cout << "A két komplex szám összege: ";
    printComplex(sum);
    return 0;
}

