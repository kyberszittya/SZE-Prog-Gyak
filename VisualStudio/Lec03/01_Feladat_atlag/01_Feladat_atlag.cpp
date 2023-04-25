// 01_Feladat_atlag.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define BEKER_SZAM 5
#include <iostream>


int main()
{
    double szum = 0.0;
    std::cout << "Atlagszamitas!\n";
    for (int i = 0; i < BEKER_SZAM; i++) {
        int x;
        std::cout << "Kerek egy szamot: ";
        std::cin >> x;
        szum += x;
    }
    std::cout << "Atlag: " << szum/BEKER_SZAM << '\n';
}
