// Fel03_CoordMutato.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 4

typedef struct Coord {
    double x, y, z;
};

int main()
{
    Coord tomb[N];
    // Feltoltes
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". koordinata bekeres: ";
        std::cout << "x: ";
        std::cin >> (*(tomb + i)).x;
        std::cout << "y: ";
        std::cin >> tomb[i].y;
        std::cout << "z: ";
        std::cin >> (tomb + i)->z;
    }
    // Kiiras
    for (int i = 0; i < N; i++) {
        std::cout << i << ".elem: ";
        std::cout << (tomb + i)->x << ',' << (tomb + i)->y << ',' << (tomb + i)->z << '\n';
    }
}
