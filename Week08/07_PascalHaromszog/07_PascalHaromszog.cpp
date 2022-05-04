// 07_PascalHaromszog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Sorok szama: ";
    cin >> n;
    int** tabla = new int* [n];
    for (int i = 0; i < n; i++)
    {
        tabla[i] = new int[i+1];
    }
    tabla[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        tabla[i][0] = 1;
        tabla[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            tabla[i][j] = tabla[i - 1][j] + tabla[i - 1][j - 1];
        }
    }
    // Haromszög kiiratása
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << tabla[i][j] << ' ';
        }
        cout << '\n';
    }
    // Felszabaditas
    for (int i = 1; i < n; i++)
    {
        delete[] tabla[i];
    }
    delete[] tabla;
    // Vege a programnak
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
