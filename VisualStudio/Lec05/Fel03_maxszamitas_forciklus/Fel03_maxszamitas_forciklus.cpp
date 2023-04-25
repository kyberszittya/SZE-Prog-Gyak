// Fel03_maxszamitas_forciklus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int maxszamitas(int a, int b) {
	if (a > b) { return a; }
	else { return b; }
}

int main()
{
	int akt_max;
	std::cout << "Kerek egy szamot: "; std::cin >> akt_max;
	for (int cnt_feluliras = 0; cnt_feluliras < 3;) {
		int x;
		std::cout << "Kerek egy szamot: "; std::cin >> x;
		int elozo_max = akt_max;
		akt_max = maxszamitas(akt_max, x);
		if (akt_max != elozo_max) { cnt_feluliras++; }
	}
	std::cout << "Haromszor nagyobb szamot kaptunk, kilepunk!\n";
}