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
	// Ha az elso sz�m kisebb mint a m�sodik akkor �rjuk ki a k�l�nbs�get
	if (a < b) {
		std::cout << "Kulonbseg: " << a - b << "\n";
	}
	// Ha mindk�t sz�m kisebb mint 10 (v�: (a < 10 �S b < 10)) akkor �rjuk ki a szorzatot
	if (a < 10 && b < 10) {
		std::cout << "Szorzat: " << a * b << "\n";
	}
}
