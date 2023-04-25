// 02_TombDinamikus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int darab; // Tomb merete
	std::cout << "Kerem a tomb meretet: ";
	std::cin >> darab;
	// Tomb lefoglalasa
	int* tomb = new int[darab];
	if (tomb == nullptr) {
		std::cout << "Sikertelen memoriafoglalas!\n";
		return -1;
	}
	// Szamok bekerese ciklusban
	std::cout << "Kerek " << darab << " szamot!\n";
	for (int i = 0; i < darab; i++) {
		std::cout << i+1 << ". szam:";
		std::cin >> *(tomb + i);
	}
	// Kiirjuk a beolvasott szamokat
	std::cout << "Beolvasott szamok: \n";
	for (int i = 0; i < darab; i++) {
		std::cout << tomb[i] << '\n';
	}
	// T�mb felszabad�t�sa
	delete[] tomb; // Figyelem! A delete ut�n kell a t�mb felszabad�t�s�ra utal�s!
	return 0;
}
