// Ex03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
* Mutat�k, strukt�r�k

K�sz�tsen egy strukt�r�t, amely koordin�t�kat t�rol (x, y, z)!
Hozzon l�tre egy t�zelem� t�mb�t, amely koordin�t�kat t�rol!
Egy mutat� seg�ts�g�vel t�ltse fel a t�mb�t �rt�kekkel!
A mutat�n kereszt�l jelen�tse meg a t�mb elemeit!
*/

struct Coord {
    double x, y, z;
};

#define N 2

int main()
{
    Coord coords[N];
    Coord* p_coords = coords;
    for (int i = 0; i < N; i++) {
		std::cout << "Kerem a(z) " << i + 1 << ". koordinatat: ";
		std::cin >> p_coords[i].x >> p_coords[i].y >> p_coords[i].z;
	}
	for (Coord* p_coords = coords; p_coords < coords + N; p_coords++) {
		std::cout << "A koordinata: " << p_coords->x << " " << p_coords->y << " " << p_coords->z << std::endl;
	}
	return 0;
}