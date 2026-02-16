//
// Created by keret on 2026. 02. 16..
//
#include <iostream>
#include <random> // Modern random library

int main() {
    int tomb[10];

    // Véletlenszám-generátor inicializálása
    std::random_device rd;  // Hardveres entrópia a seedeléshez
    std::mt19937 gen(rd()); // Mersenne Twister motor
    std::uniform_int_distribution<> dist(1, 100); // Egyenletes eloszlás 1-100 között

    // Feltöltés
    for (int& elem : tomb) {
        elem = dist(gen);
    }

    // Kiíratás (range-based for loop)
    for (const int elem : tomb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}