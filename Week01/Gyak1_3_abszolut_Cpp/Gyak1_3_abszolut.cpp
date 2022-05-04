// Gyak1_3_abszolut.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Szám eltárolása
    int x;
    // Szám beolvasása
    std::cout << "Kérek egy számot: ";
    std::cin >> x;
    // Abszolútérték számítása
    int abs = x;
    if (abs < 0)
    {
        abs *= -1;
    }
    std::cout << "Abszolútérték: " << abs << '\n';
    // Ha a szám páros, írjuk ki a felét
    if (abs % 2 == 0)
    {
        std::cout << "A szám páros, a szám fele: " << x / 2 << '\n';
    }
    else
    {
        // Azért nézzük meg mi történik, ha páratlan és így osztunk 2-vel
        std::cout << "A szám páratlan, a szám fele egészértékû osztással: " << x / 2 << '\n';
    }
}
