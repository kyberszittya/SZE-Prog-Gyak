// 03_HaromszogStruktura.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Coord {
    double x, y;
};

struct Haromszog {
    Coord pont[3];
};

using namespace std;

void haromszogbekeres(Haromszog* haromszog) 
{
    for (int i = 0; i < 3; i++) {
        cout << "P" << i + 1 << ".x :";
        cin >> (*haromszog).pont[i].x;
        cout << "P" << i + 1 << ".y :";
        cin >> haromszog->pont[i].y;
    }

}

void haromszogkiir(Haromszog* haromszog) {
    for (int i = 0; i < 3; i++) {
        cout << "P" << i + 1 << ".x :" << haromszog->pont[i].x;
        cout << ", P" << i + 1 << ".y :" << haromszog->pont[i].y;
        cout << '\n';
    }
}

int main()
{
    Haromszog haromszog;
    haromszogbekeres(&haromszog);
    haromszogkiir(&haromszog);
}
