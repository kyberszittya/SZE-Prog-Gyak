//
// Created by keret on 2026. 03. 09..
//
#include <iostream>

void findMinMax(int arr[], int size, int** min, int** max) {
    if (size <= 0) {
        *min = nullptr;
        *max = nullptr;
        return;
    }

    *min = &arr[0];
    *max = &arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < **min) {
            *min = &arr[i];
        }
        if (arr[i] > **max) {
            *max = &arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* min = nullptr;
    int* max = nullptr;

    findMinMax(arr, size, &min, &max);

    if (min && max) {
        std::cout << "Minimum: " << *min << '\n';
        std::cout << "Maximum: " << *max << '\n';
    } else {
        std::cout << "Array is empty.\n";
    }

    return 0;
}