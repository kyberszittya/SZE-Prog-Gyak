// 02_Szinuszgorbe_90.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define PI 3.14

#define WIDTH 40
#define HEIGHT 20
constexpr double RANGE = 2 * PI;

int main()
{
    int offset = HEIGHT / 2;
    double d = RANGE / WIDTH;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            double r = sin(j * d) * offset + offset;
            if (std::round(r) == i) {
                std::cout << 'x';
            }
            else std::cout << ' ';
        }
        std::cout << '\n';
    }
}
