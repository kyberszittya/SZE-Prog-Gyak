// Ex_06_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    int N;
    int N0;
    do {
        std::cout << "Kerem adja meg N0 erteket: ";
        std::cin >> N0;
    } while (N0 <= 1);
    do {
        std::cout << "Kerem adja meg N erteket: ";
        std::cin >> N;
    } while (N <= 1);
    int sum = 0;
    if (N > N0) {
        // Iteráció 1-tõl N-ig
        for (int i = N0; i <= N; i++)
        {
            // Páros számok kiírása
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
            // Összegzés
            sum += i;
        }
    }
    else 
    {
        // Iteráció 1-tõl N-ig
        for (int i = N0; i >= N; i--)
        {
            // Páros számok kiírása
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
            // Összegzés
            sum += i;
        }
    }
    // Új sor
    std::cout << std::endl;
    // Összeg kiírása
    std::cout << "Osszeg: " << sum << std::endl;
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
