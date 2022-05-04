// 2_VektorosFeladat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define DIM 3

using namespace std;

int main()
{
    double v0[DIM];
    double v1[DIM];
    double v_res_add[DIM];
    double v_res_sub[DIM];

    for (int i = 0; i < DIM; i++)
    {
        std::cout << "Elso vektor " << i << ". eleme: ";
        cin >> v0[i];
        std::cout << "Masodik vektor " << i << ". eleme: ";
        cin >> v1[i];
        // Vektor add
        v_res_add[i] = v0[i] + v1[i];
        // Vektor kulonbseg
        v_res_sub[i] = v0[i] - v1[i];
    }
    std::cout << "Vektor osszege:\n";
    for (int i = 0; i < DIM; i++)
    {
        std::cout << v_res_add[i] << " ";
    }
    std::cout << '\n';
    std::cout << "Vektor kulonbsege:\n";
    for (int i = 0; i < DIM; i++)
    {
        std::cout << v_res_sub[i] << " ";
    }
    std::cout << '\n';
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
