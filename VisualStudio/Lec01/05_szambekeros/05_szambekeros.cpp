// 05_szambekeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int a, b;
	std::cout << "Elso szam: ";
	std::cin >> a;
	std::cout << "Masodik szam: ";
	std::cin >> b;
	// Ha az elso szám kisebb mint a második akkor írjuk ki a különbséget
	if (a < b) {
		std::cout << "Kulonbseg: " << a - b << "\n";
	}
	// Ha mindkét szám kisebb mint 10 (vö: (a < 10 ÉS b < 10)) akkor írjuk ki a szorzatot
	if (a < 10 && b < 10) {
		std::cout << "Szorzat: " << a * b << "\n";
	}
}
