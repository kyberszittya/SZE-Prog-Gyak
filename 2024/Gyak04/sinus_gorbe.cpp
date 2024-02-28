//
// Created by keret on 2024. 02. 28..
//

#include <iostream>
#include <cmath>

/// Konzolablak (rajzolasi felulet szelessege)
constexpr int WIDTH = 40;
/// Szinuszgorbe hossza
constexpr int LENGTH = 30;
/// Sajat PI
constexpr double PI = 3.14;

int main() {
    int offset = WIDTH / 2;
    int scale = WIDTH / 2;
    double step = (2 * PI) / LENGTH;
    for (int i = 0; i < LENGTH; i++){
        double x = std::sin(i * step);
        int val = (int)(x * scale) + offset;
        for (int ii = 0; ii < val; ii++){
            std::cout << ' ';
        }
        std::cout << "*\n";
    }
    return 0;
}