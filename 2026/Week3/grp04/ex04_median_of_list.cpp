//
// Created by keret on 2026. 02. 23..
//

#include <iostream>
#include <random>

#define N 10

void fill_random_numbers(double tomb[], unsigned int n) {
    // Véletlenszám-generátor inicializálása
    std::random_device rd;  // Hardveres entrópia a seedeléshez
    std::mt19937 gen(rd()); // Mersenne Twister motor
    std::uniform_int_distribution<> dist(1, 100); // Egyenletes eloszlás 1-100 között

    // Feltöltés
    for (unsigned int i = 0; i < n; ++i) {
        tomb[i] = dist(gen);
    }
}

void insertion_sort(double array[], unsigned int n) {
    for (unsigned int i = 1; i < n; ++i) {
        double key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

double find_median(double tomb[], unsigned int n) {
    // Másoljuk át egy int tömbbe a rendezéshez
    double sorted_array[N];
    for (unsigned int i = 0; i < n; ++i) {
        sorted_array[i] = static_cast<int>(tomb[i]);
    }
    insertion_sort(sorted_array, n);

    if (n % 2 == 0) {
        return (sorted_array[n / 2 - 1] + sorted_array[n / 2]) / 2.0;
    } else {
        return sorted_array[n / 2];
    }

}

void print_array(double array[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    double tomb[N];
    fill_random_numbers(tomb, N);
    std::cout << "Eredeti tömb: ";
    print_array(tomb, N);
    double median = find_median(tomb, N);
    std::cout << "A tömb mediánja: " << median << std::endl;
    return 0;
}