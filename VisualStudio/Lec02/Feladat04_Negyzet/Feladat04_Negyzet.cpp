// Feladat04_Negyzet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// - K�rj�nk egy sz�mot, rajzoljunk ennyi karakter 
//   sz�les n�gyzetet a k�perny�re
// - Rajzoljuk be a k�t �tl�t is
//

int main()
{
    int x;
    std::cout << "Kerem a negyzet szelesseget: ";
    std::cin >> x;
    // Negyzet kirajzol�sa
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            // �tl�k
            if (i == j || i + j == x - 1) {
                std::cout << 'X';
            }
            else
            {
                // Teli n�gyzet
                std::cout << 'O';
            }
        }
        std::cout << '\n';
    }
}
