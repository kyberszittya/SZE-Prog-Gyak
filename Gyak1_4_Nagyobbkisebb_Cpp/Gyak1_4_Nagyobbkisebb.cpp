// Gyak1_4_Nagyobbkisebb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Két szám tárolása
    int x, y;
    // Elsõ szám bekérése
    std::cout << "Elsõ szám: ";
    std::cin >> x;
    // Második szám bekérése
    std::cout << "Második szám: ";
    std::cin >> y;
    // Számok ellenõrzése
    if (x > y)
    {
        // Ha az elsõ nagyobb, írjuk ki a két szám különbségét
        std::cout << "Két szám különbsége: " << x - y << '\n';
    }
    // Ha mindkét szám kisebb mint 10, akkor írjuk ki a sozrzatukat is
    if (x < 10 && y < 10)
    {        
        std::cout << "Két szám szorzata: " << x * y << '\n';
    }

    return 0;
}
