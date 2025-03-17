// Ex_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Önálló feladat

Kérjünk be két számot (int) és írjuk ki az összegüket
Írjuk ki a szorzatukat is
Írjuk ki a szorzat és az összeg különbségét
*/

int main()
{
    std::cout << "Elso szam:\n";
    int number1, number2;
    // Number1 beolvasása
    std::cin >> number1;
    std::cout << "Masodik szam:\n";
    // Number2 beolvasása
    std::cin >> number2;
    // Az összeg kiszámítása
    int sum = number1 + number2;
    std::cout << "A ket szam osszege: " << sum << std::endl;
    // A szorzat kiszámítása
    int product = number1 * number2;
    std::cout << "A ket szam szorzata: " << product << std::endl;
    // Különbség kiszámítása (szorzat - összeg)
    int difference = product - sum;
    std::cout << "A szorzat es az osszeg kulonbsege: " << difference << std::endl;

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
