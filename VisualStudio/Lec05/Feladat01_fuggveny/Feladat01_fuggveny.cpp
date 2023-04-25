// Feladat01_fuggveny.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Elso fuggvenyunk:
int osszegszamitas(int a, int b) {
	return a + b;
}

int main()
{
	int a, b; int szum;
	std::cout << "A szamokat addig kerjuk be, ameddig nem oszthato 7-el\n";
	do {
		std::cout << "Kerek ket szamot!\n";
		std::cout << "A: ";	std::cin >> a;
		std::cout << "B: "; std::cin >> b;
		szum = osszegszamitas(a, b);
		std::cout << "Osszeg: " << szum << "\n";
	} while (szum % 7 != 0);
	std::cout << "Az osszeg oszthato 7-el, viszlat!\n";
}
