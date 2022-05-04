// CoordMutato.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 10

struct Coord {
    double x, y, z;
};

using namespace std;

int main()
{
    Coord koordinatak[N];
    // Inicializálás a random számoknak
    srand(0);
    // Értékeket adunk a tömbnek
    Coord* mutato;
    Coord* pkord = koordinatak; 
    int i;
    for (i = 0, mutato=&koordinatak[i]; i < N; i++, mutato++) {
        mutato->x = (rand() % 10);
        mutato->y = (rand() % 20);
        mutato->z = (rand() % 30);
    }
    cout << "Coordinates: \n";
    for (i = 0; i < N; i++) {
        cout << (pkord + i)->x << '\t' << 
            (pkord + i)->y << '\t' << (pkord + i)->z << '\n';
    }
}
