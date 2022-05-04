// 03_StrukturaMemoriaFoglalas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Coord {
    int x, y;
};

using namespace std;

int main()
{
    Coord* coord;
    coord = new Coord();
    cout << "Ket koordinatat kerek: ";
    cin >> (*coord).x >> coord->y;
    cout << "Koordinatak: (" << coord->x << ", " << (*coord).y << ")";
    delete coord;
    return 0;
}
