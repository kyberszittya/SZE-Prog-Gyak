// 02_NeptunHallgatok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define ERDEMJEGYEK 4

using namespace std;

struct Hallgato
{
    string vezeteknev;
    string keresztnev;
    string neptunkod;
    string targynev;
    int erdemjegyek[4];
    string anyjanev;
};

Hallgato hallgatobekeres()
{
    Hallgato h;
    cout << "Hallgato adatainak bekerese\n";
    cout << "Vezeteknev: ";
    cin >> h.vezeteknev;
    cout << "Keresztnev: ";
    cin >> h.keresztnev;
    cout << "Neptun kód: ";
    cin >> h.neptunkod;
    cout << "Targynev: ";
    cin >> h.targynev;
    for (int i = 0; i < ERDEMJEGYEK; i++)
    {
        cout << i + 1 << " erdemjegy: ";
        cin >> h.erdemjegyek[i];
    }
    return h;
}

double tanatlag(Hallgato h)
{
    double szum = 0;
    for (int i = 0; i < ERDEMJEGYEK; i++)
    {
        szum += h.erdemjegyek[i];
    }
    return szum / ERDEMJEGYEK;
}

int main()
{
    Hallgato hallgato;
    hallgato = hallgatobekeres();
    cout << "Hallgato atlaga: " << tanatlag(hallgato) << '\n';
}
