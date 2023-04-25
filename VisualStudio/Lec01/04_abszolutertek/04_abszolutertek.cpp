// 04_abszolutertek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x;
	std::cout << "Kerek egy szamot: ";
	std::cin >> x;
	std::cout << "Abszolutertek: " << std::abs(x) << "\n";
	// Páros a szám
	if (x % 2 == 0) {
		std::cout << "A szam fele: " << x / 2 << '\n';
	}
	else {
		std::cout << "Paratlan a szam: " << x / 2 << '\n';
	}
}
