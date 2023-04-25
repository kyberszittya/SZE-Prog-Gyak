// 03_Feladat_Vektorszamitas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#define DIM 3

constexpr int DIM = 3;

#include <iostream>

int main()
{
    // Els� vektor
    double x[DIM];
    // M�sodik vektor
    double y[DIM];
    // Eredm�nyvektor
    double z_1[DIM];
    double z_2[DIM];
    // Els� vektor
    std::cout << "Elso vektor: \n";
    for (int i = 0; i < DIM; i++) {
        std::cout << i << ". :";
        std::cin >> x[i];
    }
    // M�sodik vektor
    std::cout << "Masodik vektor: \n";
    for (int i = 0; i < DIM; i++) {
        std::cout << i << ". :";
        std::cin >> y[i];
    }
    // �sszeadas �s kivon�s
    for (int i = 0; i < DIM; i++) {
        // �sszead�s
        z_1[i] = x[i] + y[i];
        // Kivon�s
        z_2[i] = x[i] - y[i];
    }
    // Kiir�s (k�t eredm�nyvektor)
    std::cout << "Eredm�ny (�sszeg, k�l�nbs�g)\n";
    for (int i = 0; i < DIM; i++) {
        std::cout << z_1[i] << '\t' << z_2[i] << '\n';
    }
}
