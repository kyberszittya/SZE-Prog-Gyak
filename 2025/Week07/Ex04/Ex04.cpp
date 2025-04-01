// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
Mutatók, struktúrák és függvények

Készítsen egy koordináta struktúrát!
Készítsen egy háromszög struktúrát, amely három koordinátát tárol!
Írjon függvényt, amely egy háromszög struktúra címét kapja meg és feltölti azt billentyûzetrõl olvasott értékekkel!
Írjon függvényt, amely egy háromszög struktúra címét kapja és megjeleníti azt a képernyõn!
Olvasson be egy két elemû tömbbe háromszögeket az elõbb megírt függvény segítségével!
Írassa ki a tömb elemeit!
*/

struct Coord {
	double x, y, z;
};

struct Triangle {
	Coord coords[3];
};

void beolvas(Triangle* triangle) {
	for (int i = 0; i < 3; i++) {
		std::cout << "Kerem a(z) " << i + 1 << ". koordinatat: ";
		std::cin >> triangle->coords[i].x >> triangle->coords[i].y >> triangle->coords[i].z;
	}
}

void kiir(Triangle* triangle) {
	for (int i = 0; i < 3; i++) {
		std::cout << "A koordinata: " << triangle->coords[i].x << " " << triangle->coords[i].y << " " << triangle->coords[i].z << std::endl;
	}
}

#define N 2

int main() {
	Triangle triangles[N];
	for (int i = 0; i < N; i++) {
		std::cout << "Kerem a(z) " << i + 1 << ". haromszog koordinatait: " << std::endl;
		beolvas(&triangles[i]);
	}
	for (int i = 0; i < N; i++) {
		std::cout << "A(z) " << i + 1 << ". haromszog koordinatai: " << std::endl;
		kiir(&triangles[i]);
	}
}
