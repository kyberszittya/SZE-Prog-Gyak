// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Kérjünk egy számot, 
//  rajzoljunk ennyi karakter széles négyzetet a képernyõre
// Rajzoljuk be a két átlót is

int main()
{
    int n;
    std::cout << "Kerek egy szamot (negyzet szelesseg): "; std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {            
            if (i == j) { std::cout << 'X'; }
            else if (i + j == n - 1) { std::cout << 'X'; }
            else { std::cout << '0'; }
        }
        std::cout << '\n';
    }
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
