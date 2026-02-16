//
// Created by keret on 2026. 02. 16..
//

#include <iostream>

#define N 5

int main(int argc, char *argv[]) {
    double tomb[N];
    for (int i = 0; i < N; ++i) {
        std::cout << "Kérem az " << i + 1 << ". számot: ";
        std::cin >> tomb[i];
    }
    double average = 0.0;
    for (int i = 0; i < N; ++i) {
        average += tomb[i];
    }
    average /= N;
    std::cout << "Az átlag: " << average << std::endl;
    return 0;

}