// Gyak4_sin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// Ezt be kell rakni, amennyiben nem található az M_PI értéke
#define _USE_MATH_DEFINES
#include <math.h>


#define STEPS 20   // Lépésköz
#define MAGN 10    // Nagyítás

int main()
{
    double dt = 2 * M_PI / STEPS; // Inkrementum számítása
    double t = 0;                 // Kezdõérték
    for (int i = 0; i < STEPS; i++)
    {
        double val = round(MAGN*sinf(t)) + MAGN;
        for (unsigned int j = 0; j <= val; j++)
        {
            if (val == j) std::cout << '*';
            else std::cout << ' ';
        }
        std::cout << '\n';
        t += dt;
    }
    return 0;
}
