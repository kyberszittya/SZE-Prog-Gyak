// Feladat04_Negyzet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// - Kérjünk egy számot, rajzoljunk ennyi karakter 
//   széles négyzetet a képernyõre
// - Rajzoljuk be a két átlót is
//

int main()
{
    int x;
    std::cout << "Kerem a negyzet szelesseget: ";
    std::cin >> x;
    // Negyzet kirajzolása
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            // Átlók
            if (i == j || i + j == x - 1) {
                std::cout << 'X';
            }
            else
            {
                // Teli négyzet
                std::cout << 'O';
            }
        }
        std::cout << '\n';
    }
}
