// Gyak2_3_Negyzetkirajzolos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;
    std::cout << "MIlyen sz�les legyen a n�gyzet? :";
    std::cin >> n;
    for (unsigned i = 0; i <= n; i++)
    {
        for (unsigned j = 0; j <= n; j++)
        {
            // Oldalak kezel�se
            if (i == 0 || j == 0 || i == n || j == n)
            {
                std::cout << '*';
            }
            // �tl�k kezel�se
            else if (i == j || j == n - i) 
            {
                std::cout << '*';
            } else
            {
                // Egy�bk�nt t�lts�k ki a n�gyzetet
                std::cout << 'O';
            }
        }
        std::cout << '\n';
    }
    
}

