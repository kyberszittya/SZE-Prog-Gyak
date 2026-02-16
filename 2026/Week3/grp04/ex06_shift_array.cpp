//
// Created by keret on 2026. 02. 16..
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

void shift_left(int array[], int n) {
    int temp = array[0];
    for (int i = 0; i < n - 1; ++i) {
        array[i] = array[i + 1];
    }
    array[n - 1] = temp;
}

void shift_left_by_k(int array[], int n, int k) {
    for (int i = 0; i < k; ++i) {
        shift_left(array, n);
    }
}

void shift_right(int array[], int n) {
    int temp = array[n - 1];
    for (int i = n - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}

void shift_right_by_k(int array[], int n, int k) {
    for (int i = 0; i < k; ++i) {
        shift_right(array, n);
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
    std::cout << "Original array: ";
    print_array(tomb, N);

    // Shift left
    shift_left(tomb, N);
    std::cout << "Shifted left: ";
    print_array(tomb, N);

    // Shift right
    shift_right(tomb, N);
    std::cout << "Shifted right: ";
    print_array(tomb, N);

    // Shift left by k
    shift_left_by_k(tomb, N, 3);
    std::cout << "Shifted left by 3: ";
    print_array(tomb, N);

    // Shift right by k
    shift_right_by_k(tomb, N, 5);
    std::cout << "Shifted right by 5: ";
    print_array(tomb, N);

    return 0;


}