// Gyak2_4_Lepcso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Magass�g elt�rol�sa
    int magassag;
    std::cout << "L�pcs� magass�ga: ";
    std::cin >> magassag;
    // L�pcs� kirajzol�sa
    for (int i = 0; i <= magassag; i++) 
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    // Jobbra igaz�t�s
    std::cout << "\n Jobbra igaz�tott l�pcs�: \n";
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

