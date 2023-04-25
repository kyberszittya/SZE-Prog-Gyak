// Lec09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Memoriaszivargas ellenorzese (Visual Studio)
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


#include <iostream>

int main()
{
	// Memóriaszivargas ellenorzése
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//
	std::cout << "Kerek egy sor szamot: ";
	int n;
	std::cin >> n;
	int** pascal = new int*[n];
	// Lefoglaljuk a Pascal haromszoget
	for (int i = 0; i < n; i++) {
		pascal[i] = new int[i + 1];
	}
	// Feltoltjuk a Pascal haromszoget
	pascal[0][0] = 1; // Legteteje a haromszognek
	for (int i = 1; i < n; i++) {
		pascal[i][0] = 1; // Bal szelet 1-esezzuk ki
		pascal[i][i] = 1; // Jobb szelet 1-esezzuk ki
		for (int j = 1; j < i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}
	// Kiiras
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) { // Végig megyünk az intervallumon
			std::cout << pascal[i][j] << " ";
		}
		std::cout << '\n';
	}
	// Felszabaditjuk a Pascal haromszoget
	for (int i = 0; i < n; i++) {
		delete[] pascal[i];
	}
	delete[] pascal;
}
