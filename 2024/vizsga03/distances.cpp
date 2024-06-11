//
// Created by keret on 2024. 05. 29..
//
/*
Adott 3D koordinátáknak a tömbje.
Feladat, hogy minden egyes koordinátához kiszámolja az origotól vett távolságot.
 A távolságok egy tömbben egymás után következzenek. A tömb mérete előre ismert.

A feladathoz írjon egy C++ függvényt! Segítségképpen, megadtuk a függvény fejlécét.
 Használja a leimplementált koordináta struktúrát!

TIPP: emlékeztetőleg az Euklideszi távolság ()
TIPP2: visszatérésként egy dinamikus tömböt kell lefoglalni.

 */

#include <iostream>
#include <cmath>

struct Coord {
    double x;
    double y;
    double z;
};

double* calcEuclid(Coord* coords, unsigned int n);

double* calcEuclid(Coord* coords, unsigned int n){
    double* result = new double[n];
    for (unsigned int i = 0; i < n; i++) {
        double dist = (coords[i].x * coords[i].x) +
                (coords[i].y * coords[i].y) +
                (coords[i].z * coords[i].z);
        result[i] = std::sqrt(dist);
    }
    return result;

}

void test1() {
    Coord coords[2];
    coords[0].x = 0.0;
    coords[0].y = 0.0;
    coords[0].z = 0.0;

    coords[1].x = 10.0;
    coords[1].y = 5.0;
    coords[1].z = 0.0;

    double* res = calcEuclid(coords, 2);
    for (int i = 0; i < 2; i++) {
        std::cout << res[i] << '\n';
    }
    delete[] res;

}


void test2() {
    Coord coords[1];
    coords[0].x = 0.0;
    coords[0].y = 0.0;
    coords[0].z = 0.0;

    double* res = calcEuclid(coords, 1);
    std::cout << res[0] << '\n';
    delete[] res;

}

void test3() {
    Coord coords[5];
    coords[0].x = 20.0;
    coords[0].y = 6.0;
    coords[0].z = 2.3;

    coords[1].x = 2.0;
    coords[1].y = 4.0;
    coords[1].z = 2.3;

    coords[2].x = 2.5;
    coords[2].y = 7.8;
    coords[2].z = 2.13;

    coords[3].x = -2.5;
    coords[3].y = -7.8;
    coords[3].z = -5.1;

    coords[4].x = -2.5;
    coords[4].y = 27.8;
    coords[4].z = 15.1;

    double* res = calcEuclid(coords, 5);
    for (int i = 0; i < 5; i++) {
        std::cout << res[i] << '\n';
    }
    delete[] res;

}

int main() {
    //test1();
    //test2();
    test3();
}