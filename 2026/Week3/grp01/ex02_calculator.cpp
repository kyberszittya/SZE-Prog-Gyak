//
// Created by keret on 2026. 02. 16..
//

#include <iostream>
#include <limits>

double calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            }
            else {
                return std::numeric_limits<double>::infinity();
            }
    }
}

int main(int argc, char *argv[]) {
    double a, b;
    char op;
    std::cout << "Add meg az első számot (a): ";
    std::cin >> a;
    std::cout << "Add meg a másodikat (b): ";
    std::cin >> b;
    std::cout << "Add meg az műveletet (+, -, *, /): ";
    std::cin >> op;
    double result = calculate(a, b, op);
    std::cout << "Az eredmény: " << result << "\n";
}
