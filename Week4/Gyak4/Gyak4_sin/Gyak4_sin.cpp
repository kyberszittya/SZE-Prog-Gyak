// Gyak4_sin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// Ezt be kell rakni, amennyiben nem tal�lhat� az M_PI �rt�ke
#define _USE_MATH_DEFINES
#include <math.h>


#define STEPS 20   // L�p�sk�z
#define MAGN 10    // Nagy�t�s

int main()
{
    double dt = 2 * M_PI / STEPS; // Inkrementum sz�m�t�sa
    double t = 0;                 // Kezd��rt�k
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
