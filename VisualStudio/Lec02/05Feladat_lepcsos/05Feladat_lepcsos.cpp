// 05Feladat_lepcsos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x;
    std::cout << "Kerem a lepcso szelesseget: ";
    std::cin >> x;
    // Negyzet kirajzolása
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            // Teli négyzet
            std::cout << 'O';            
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    // Forditott lepcso
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            // Ures lepcso
            std::cout << ' ';
        }
        for (int j = i; j < x; j++) {
            // Teli négyzet
            std::cout << 'O';
        }
        std::cout << '\n';
    }
}