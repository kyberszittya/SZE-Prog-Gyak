// 03_Feladat_Vektorszamitas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#define DIM 3

constexpr int DIM = 3;

#include <iostream>

int main()
{
    // Elsõ vektor
    double x[DIM];
    // Második vektor
    double y[DIM];
    // Eredményvektor
    double z_1[DIM];
    double z_2[DIM];
    // Elsõ vektor
    std::cout << "Elso vektor: \n";
    for (int i = 0; i < DIM; i++) {
        std::cout << i << ". :";
        std::cin >> x[i];
    }
    // Második vektor
    std::cout << "Masodik vektor: \n";
    for (int i = 0; i < DIM; i++) {
        std::cout << i << ". :";
        std::cin >> y[i];
    }
    // Összeadas és kivonás
    for (int i = 0; i < DIM; i++) {
        // Összeadás
        z_1[i] = x[i] + y[i];
        // Kivonás
        z_2[i] = x[i] - y[i];
    }
    // Kiirás (két eredményvektor)
    std::cout << "Eredmény (összeg, különbség)\n";
    for (int i = 0; i < DIM; i++) {
        std::cout << z_1[i] << '\t' << z_2[i] << '\n';
    }
}
