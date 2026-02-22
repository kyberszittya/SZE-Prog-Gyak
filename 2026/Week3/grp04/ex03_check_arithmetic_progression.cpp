//
// Created by keret on 2026. 02. 23..
//

#include <iostream>

constexpr int N = 5;

bool isArithmeticProgression(int array[], int n) {
    if (n < 2) {
        return true; // Egy vagy nulla elem mindig számtani sorozat
    }
    int d = array[1] - array[0]; // Különbség kiszámítása
    for (int i = 2; i < n; ++i) {
        if (array[i] - array[i - 1] != d) {
            return false; // Nem egyezik a különbség, nem számtani sorozat
        }
    }
    return true; // Minden különbség megegyezik, számtani sorozat
}

int main() {
    int array[N];
    // Feltöltés
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }
    if (isArithmeticProgression(array, N)) {
        std::cout << "A sorozat számtani sorozat." << std::endl;
    } else {
        std::cout << "A sorozat nem számtani sorozat." << std::endl;
    }
    return 0;
}