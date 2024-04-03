//
// Created by keret on 2024. 04. 03..
//
/*
 * Dinamikus struktúra helyfoglalás

Készítsen egy koordinátát tároló struktúrát!
Írjon függvényt, amely koordinátát olvas be billentyűzetről!
Foglaljon dinamikus memóriát és jelenítse meg a tárolt koordinátákat!
Szabadítsa fel a lefoglalt memóriaterületet!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás

 */
#include <iostream>

struct Koordinata {
    double x;
    double y;
    double z;
};

void beolvas(Koordinata* koordinata) {
    std::cout << "X: ";
    std::cin >> koordinata->x;
    std::cout << "Y: ";
    std::cin >> koordinata->y;
    std::cout << "Z: ";
    std::cin >> koordinata->z;
}

void kiir(Koordinata* koordinata) {
    std::cout << "Koordinatak: " <<
        koordinata->x << ", " <<
        koordinata->y << ", " <<
        koordinata->z << '\n';
}

int main(){
    Koordinata* koordinata = new Koordinata;
    beolvas(koordinata);
    kiir(koordinata);
    delete koordinata;
    return 0;
}