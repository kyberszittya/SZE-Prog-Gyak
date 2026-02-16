//
// Created by keret on 2026. 02. 16..
//

#include <iostream>
#include <cmath>
#include <random>

#define N 10

void fill_random_numbers(int tomb[], unsigned int n) {
    // Véletlenszám-generátor inicializálása
    std::random_device rd;  // Hardveres entrópia a seedeléshez
    std::mt19937 gen(rd()); // Mersenne Twister motor
    std::uniform_int_distribution<> dist(1, 100); // Egyenletes eloszlás 1-100 között

    // Feltöltés
    for (unsigned int i = 0; i < n; ++i) {
        tomb[i] = dist(gen);
    }
}

int main() {
    int tomb[N];

    fill_random_numbers(tomb, N);

    int minimum = std::numeric_limits<int>::max();
    int maximum = std::numeric_limits<int>::min();

    for (int elem : tomb) {
        if (elem < minimum) {
            minimum = elem;
        }
        if (elem > maximum) {
            maximum = elem;
        }
    }

    // Kiíratás (range-based for loop)
    for (const int elem : tomb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;


    return 0;
}