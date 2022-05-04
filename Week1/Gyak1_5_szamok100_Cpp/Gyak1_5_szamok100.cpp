// Gyak1_5_szamok100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 100

int main()
{
    // Elõször írjuk ki a számokat 1-100
    // Unsigned: egészértékû pozitív számok (0-2^64)
    for (unsigned int i = 1; i <= N; i++)
    {
        std::cout << i << ' ';
    }
    // Ezután kérjük be N értékét
    unsigned int n;
    std::cout << "\nMeddig kell kiírni a számokat? :\n";
    std::cin >> n;
    // Ellenõrizzük, hogy a szám nagyobb-e mint 1
    if (n <= 1)
    {
        // Kilépünk, nem teljesül a feltételünk
        return -1;
    }
    // A számok összegét is ki kell írni! Tároljunk el ehhez egy változót 0 kezdõértékkel
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++)
    {
        std::cout << i << ' ';
        sum += i;
    }
    // Írjuk ki csak a páros számokat
    std::cout << "\n Csak páros számok kiírása: \n";
    for (unsigned int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << ' ';
        }
    }

    // Opcionális feladat: 
    // két szám bekérése, ezek között kiírni az összes számot (lehet negatív is!)
    int n0, n1;
    std::cout << "\n Számok kiírása egy rögzített intervallumon\n\n";
    // Elsõ szám bekérése
    std::cout << "Elsõ szám: ";
    std::cin >> n0;
    // Második szám bekérése
    std::cout << "Második szám: ";
    std::cin >> n1;
    // FIGYELEM: Ha az elsõ szám nagyobb, akkor csökkenõ sorrendben kell kiírni a számokat
    // Meg lehet oldani ciklusok ismétlése nélkül is
    int dx = 1; // Ezzel fogjuk változtatni a számláló értékét
    if (n0 > n1)
    {
        dx *= -1;
    }
    // Ciklus
    for (int i = n0; i != (n1 + dx); i += dx)
    {
        std::cout << i << ' ';
    }

    return 0;
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
