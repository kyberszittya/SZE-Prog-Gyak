//
// Created by keret on 2026. 02. 22..
//

#include <iostream>
#include <cmath>

double sigmoid(double x) {
    return 1 / (1 + exp(-x));
}

int main(int argc, char *argv[]) {
    double x;
    std::cout << "Kérem a bemeneti értéket: ";
    std::cin >> x;
    double result = sigmoid(x);
    std::cout << "Sigmoid függvény értéke: " << result << std::endl;
    return 0;
}