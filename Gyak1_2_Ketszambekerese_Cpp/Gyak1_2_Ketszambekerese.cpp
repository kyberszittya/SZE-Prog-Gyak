// Gyak1_2_Ketszambekerese.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Két szám bekérése\n";
    int x, y;
    std::cout << "Elsõ szám: ";
    std::cin >> x;
    std::cout << "Második szám: ";
    std::cin >> y;
    // Összeg kiírása
    std::cout << "Két szám összege: " << x + y << '\n';
    // Szorzat kiírása
    std::cout << "Két szám szorzata: " << x * y << '\n';
    // Szorzat és összeg különbsége
    std::cout << "Két szám szorzatának és összegének különbsége: " << (x * y) - (x + y) << '\n';
    return 0;
}
