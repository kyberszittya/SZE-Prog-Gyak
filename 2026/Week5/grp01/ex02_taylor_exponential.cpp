//
// Created by keret on 2026. 03. 02..
//

#include <iostream>
#include <cmath>

#include "common.h"

#define TERMS 15


double taylorExponential(double x, unsigned terms) {
    double result = 0;
    for (int n = 0; n < terms; n++) {
        result += std::pow(x, n) / factorial(n);
    }
    return result;
}

int main() {
    std::cout << "Kérem a számítandó értéket (exp(x), e^x ): ";
    double x;
    std::cin >> x;
    std::cout << "Kérem a tagok számát: ";
    int terms;
    std::cin >> terms;
    double result = taylorExponential(x, terms);
    std::cout << "Eredmény: " << result << '\n';
    std::cout << "Összehasonlítás különböző tagokkal exp(x)-el: \n";
    for (int i = 0; i < TERMS; i++) {
        std::cout << i << ". tag:" << taylorExponential(x, i) << '\n';
    }
    std::cout << "Összehasonlítás a cmath exp(x)-el: " << std::exp(x) << '\n';
    return 0;

}
