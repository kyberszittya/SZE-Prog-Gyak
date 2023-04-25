// 04_Rendszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::string rendszam;
	do {
		std::cout << "Kerek egy magyar rendsz�mot! ";
		std::cin >> rendszam;
		bool rendszam_ok = true;
		if (rendszam.size() == 7) {
			// Megfelel� hossz�s�g� rendsz�m
			// Bet�k �llnak-e az els� 3 helyen
			for (int i = 0; i < 3; i++) {
				if (!(rendszam[i] >= 'A' && rendszam[i] <= 'Z'))
					rendszam_ok = false;
			}
			// K�t�jel ellen�rz�se
			if (rendszam[3] != '-') rendszam_ok = false;
			// A v�g�n sz�mok �llnak-e
			for (int i = 4; i < 7; i++) {
				if (!(rendszam[i] >= '0' && rendszam[i] <= '9'))
					rendszam_ok = false;
			}
		}
		else rendszam_ok = false;
		if (rendszam_ok) std::cout << "OK\n";
		else std::cout << "NEM OK\n";
	} while (rendszam.compare("k") != 0);
}
