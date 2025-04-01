// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
Mutat�k, strukt�r�k �s f�ggv�nyek

K�sz�tsen egy koordin�ta strukt�r�t!
K�sz�tsen egy h�romsz�g strukt�r�t, amely h�rom koordin�t�t t�rol!
�rjon f�ggv�nyt, amely egy h�romsz�g strukt�ra c�m�t kapja meg �s felt�lti azt billenty�zetr�l olvasott �rt�kekkel!
�rjon f�ggv�nyt, amely egy h�romsz�g strukt�ra c�m�t kapja �s megjelen�ti azt a k�perny�n!
Olvasson be egy k�t elem� t�mbbe h�romsz�geket az el�bb meg�rt f�ggv�ny seg�ts�g�vel!
�rassa ki a t�mb elemeit!
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
