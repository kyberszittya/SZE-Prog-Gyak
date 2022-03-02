// Gyak2_3_Negyzetkirajzolos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;
    std::cout << "MIlyen széles legyen a négyzet? :";
    std::cin >> n;
    for (unsigned i = 0; i <= n; i++)
    {
        for (unsigned j = 0; j <= n; j++)
        {
            // Oldalak kezelése
            if (i == 0 || j == 0 || i == n || j == n)
            {
                std::cout << '*';
            }
            // Átlók kezelése
            else if (i == j || j == n - i) 
            {
                std::cout << '*';
            } else
            {
                // Egyébként töltsük ki a négyzetet
                std::cout << 'O';
            }
        }
        std::cout << '\n';
    }
    
}

