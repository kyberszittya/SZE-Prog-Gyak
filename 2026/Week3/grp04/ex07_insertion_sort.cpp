//
// Created by keret on 2026. 02. 23..
//

#include <iostream>
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

void insertion_sort(int array[], unsigned int n) {
    for (unsigned int i = 1; i < n; ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    int tomb[N];
    fill_random_numbers(tomb, N);
    std::cout << "Eredeti tömb: ";
    print_array(tomb, N);
    insertion_sort(tomb, N);
    std::cout << "Rendezett tömb: ";
    print_array(tomb, N);
    return 0;
}