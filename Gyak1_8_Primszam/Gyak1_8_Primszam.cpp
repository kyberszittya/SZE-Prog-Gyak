// Gyak1_8_Primszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Szám bekérése
    int n;
    std::cout << "Melyik számot ellenõrízzem, hogy prím?: ";
    std::cin >> n;
    // Egy szám önmagával és 1-el mindig osztható
    unsigned cnt_osztok = 2;
    // Használjuk fel, hogy egy tetszõleges szám oszthatóságát a gyökéig kell ellenõrizni    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt_osztok++;
        }
    }
    // Ellenõrzés (ha osztók száma nagyobb mint 2, akkor nem prímszám)
    if (cnt_osztok > 2)
    {
        std::cout << "A szám nem prím\n";
    }
    else
    {
        std::cout << "A szám prím\n";
    }

    return 0;
}

