// Feladat02_elsocikllus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// K�rj�nk be sz�mokat, am�g p�ratlan sz�mot nem kapunk, 
// �s a p�rosoknak mindig �rjuk ki a fel�t
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
		// Ciklusfelt�tel
	} while ((x % 2 == 0));

}
