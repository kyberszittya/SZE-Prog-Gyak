// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// A fenti feladatot oldjuk meg közösen 
// else, else if használatával, különbözõ módokon
// Kérjünk be számokat, amíg páratlan számot nem kapunk, 
// és a párosoknak mindig írjuk ki a felét


int main()
{
    int x;
    do {
        std::cout << "Kerek egy szamot: "; std::cin >> x;
        if (x % 2 == 0) {
            std::cout << "A szam paros, a fele:\t" << x/2 << '\n';
        }
    } while (x % 2 == 0);
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
