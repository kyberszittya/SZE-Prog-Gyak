//
// Created by keret on 2026. 02. 16..
//
#include <iostream>

int fibonacci(unsigned int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main (int argc, char *argv[]) {
    unsigned int n;
    std::cout << "Adj meg egy számot (Fibonacci számítás): ";
    std::cin >> n;
    std::cout << "Fibonacci szám:" << fibonacci(n) << std::endl;
    return 0;
}