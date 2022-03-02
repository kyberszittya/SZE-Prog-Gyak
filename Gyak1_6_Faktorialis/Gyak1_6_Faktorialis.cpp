// Gyak1_6_Faktorialis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Faktori�lis
    // FIGYELEM: nagyon kis �rt�kekre fog m�k�dni a program, nagoyn gyorsan n�vekszik a faktori�lis f�ggv�ny �rt�ke
    unsigned int n;
    std::cout << "n! (faktori�lis), k�rem az n sz�mot: ";
    std::cin >> n;
    // Faktori�lis t�rol�sa (0! = 1)
    long long fx = 1;
    for (int i = 1; i <= n; i++)
    {
        fx *= i;
    }
    std::cout << "Fakotrialis: " << fx << '\n';

    return 0;
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
