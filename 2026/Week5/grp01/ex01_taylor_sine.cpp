//
// Created by keret on 2026. 03. 02..
//

#include <iostream>
#include <cmath>

#define TERMS 15

#include "common.h"

double taylorSine(double x, unsigned int terms) {
    double result = 0;
    for (unsigned int n = 0; n < terms; n++) {
        result += (std::pow(-1, n)  / factorial((2 * n) + 1))
            * std::pow(x, (2 * n) + 1);
    }
    return result;
}


int main() {
    std::cout << "Kérem a számítandó értéket (x): ";
    double x;
    std::cin >> x;
    std::cout << "Kérem a tagok számát: ";
    int terms;
    std::cin >> terms;
    double result = taylorSine(x, terms);
    std::cout << "Eredmény: " << result << '\n';
    std::cout << "Összehasonlítás különböző tagokkal sin(x)-el: \n";
    for (int i = 0; i < TERMS; i++) {
        std::cout << i << ". tag:" << taylorSine(x, i) << '\n';
    }
    std::cout << "Összehasonlítás a cmath sin(x)-el: " << std::sin(x) << '\n';
    return 0;

}