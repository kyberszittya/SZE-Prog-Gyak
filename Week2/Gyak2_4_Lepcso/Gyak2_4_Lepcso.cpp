// Gyak2_4_Lepcso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Magasság eltárolása
    int magassag;
    std::cout << "Lépcsõ magassága: ";
    std::cin >> magassag;
    // Lépcsõ kirajzolása
    for (int i = 0; i <= magassag; i++) 
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    // Jobbra igazítás
    std::cout << "\n Jobbra igazított lépcsõ: \n";
    for (int i = 0; i <= magassag; i++)
    {
        for (int j = 0; j <= magassag; j++)
        {
            if (j < magassag - i)
            {
                std::cout << ' ';
            }
            else
            {
                std::cout << '*';
            }
        }
        
        std::cout << '\n';
    }
}

