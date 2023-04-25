// Lec01_Szinuszgorbe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

#define WIDTH 40
#define PI 3.14
#define X_MAX 40
constexpr double RANGE = 2 * PI;

int main(){
    // Lépésköz
    double d = RANGE / X_MAX;
    for (int i = 0; i < X_MAX; i++) {
        double y = std::sin(i * d);
        double offset = WIDTH / 2;
        double to = (offset * y) + offset;
        for (int j = 0; j < to; j++) {
            std::cout << ' ';
        }
        std::cout << 'x' << '\n';
    }
    return 0;
}
