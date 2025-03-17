// Ex03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// Olvassuk be két 3-dimenziós, origóból kiinduló vektor koordinátáit
// Írjuk ki a vektorok összegét, különbségét
// A dimenzió legyen #define - nal megadva

#define N 3

int main()
{
    double a[N], b[N];
    // Beolvasas
    std::cout << "1. vektor\n";
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". koordinata: "; std::cin >> a[i];
    }
    std::cout << "2. vektor\n";
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". koordinata: "; std::cin >> b[i];
    }
    // Összeg és különbség
    double add[N], sub[N];
    for (int i = 0; i < N; i++) {
        add[i] = a[i] + b[i];
        sub[i] = a[i] - b[i];
    }
    // Kiiras
    std::cout << "Osszeg: ";
    for (int i = 0; i < N; i++) {
		std::cout << add[i] << " ";
	}
    std::cout << "\nKulonbseg: ";
    for (int i = 0; i < N; i++) {
        std::cout << sub[i] << " ";
    }
    std::cout << std::endl;
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
