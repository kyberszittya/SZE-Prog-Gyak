//
// Created by keret on 2026. 04. 20..
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <random>
#include <chrono>

using namespace std::chrono;

//#define N 10000000
#define N 100000

void fill_array(int* arr, int length) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, N);
    // Feltöltjük a tömböt véletlenszerű számokkal
    for (int i = 0; i < length; i++) {
        arr[i] = dis(gen);
    }
}

void print_array_first_n(int * arr, int n, int length) {
    for (int i = 0; i < length && i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

void bubble_sort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    int *a = new int;
    *a = 242;
    std::cout << a << " " << *a << std::endl;
    delete a;
    // Heapnek ahol tényleg van értelme
    int *b = new int[N];
    fill_array(b, N);
    print_array_first_n(b, 10, N);
    // Stopwatch
    auto start = high_resolution_clock::now();
    bubble_sort(b, N);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    std::cout << "\nRendezés időtartama: " << duration.count() << " ms" << std::endl;
    std::cout << "\nRendezett tömb első 10 eleme: ";
    print_array_first_n(b, 10, N);

    delete b;
}