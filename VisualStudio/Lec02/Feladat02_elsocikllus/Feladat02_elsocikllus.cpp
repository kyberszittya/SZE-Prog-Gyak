// Feladat02_elsocikllus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// Kérjünk be számokat, amíg páratlan számot nem kapunk, 
// és a párosoknak mindig írjuk ki a felét
int main()
{
	int x;
	do {
		// Ciklusmag
		std::cout << "Kerek egy szamot: ";
		std::cin >> x;
		if (x % 2 == 0) {
			std::cout << x / 2 << ", paros szam\n";
		}
		// Ciklusfeltétel
	} while ((x % 2 == 0));

}
