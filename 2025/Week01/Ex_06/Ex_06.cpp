// Ex_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Közös feladat

Írjuk ki a számokat 1-tõl 100-ig
Kérjük be N értékét, majd írjuk ki a számokat 1-tõl N-ig
Ellenõrizzük, hogy N>1
A végén írjuk ki a számok összegét
Csak a páros számokat írjuk ki
Opcionális feladat: kérjünk be két számot, 
majd soroljuk fel a köztük lévõ számokat, 
ha az elsõ szám nagyobb, akkor csökkenõ sorrendben
Videó
*/

int main()
{
    int N;
    do {
        std::cout << "Kerem adja meg N erteket: ";
        std::cin >> N;        
    } while (N <= 1);
    int sum = 0;
    // Iteráció 1-tõl N-ig
    for (int i = 1; i <= N; i++)
    {
        // Páros számok kiírása
        if (i % 2 == 0){
            std::cout << i << " ";
        }        
        // Összegzés
        sum += i;
    }
    // Új sor
    std::cout << std::endl;
    // Összeg kiírása
    std::cout << "Osszeg: " << sum << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
