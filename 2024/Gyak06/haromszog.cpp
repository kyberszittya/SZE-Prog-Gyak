//
// Created by keret on 2024. 03. 27..
//

/*
 * Mutatók, struktúrák és függvények

Készítsen egy koordináta struktúrát!
Készítsen egy háromszög struktúrát, amely három koordinátát tárol!
Írjon függvényt, amely egy háromszög struktúra címét kapja meg és
 feltölti azt billentyűzetről olvasott értékekkel!
Írjon függvényt, amely egy háromszög struktúra címét kapja és
 megjeleníti azt a képernyőn!
Olvasson be egy két elemű tömbbe háromszögeket az
 előbb megírt függvény segítségével!
Írassa ki a tömb elemeit!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás
 */

#include <iostream>
#include <stdlib.h>

struct Koordinata {
    double x;
    double y;
    double z;
};

struct Haromszog {
    Koordinata koord[3];
};

void feltolt_koord(Koordinata* koord){
    koord->x = ((double)(rand() % 100))/100;
    koord->y = ((double)(rand() % 100))/100;
    koord->z = ((double)(rand() % 100))/100;
}

void feltolt(Haromszog* haromszog){
    //
    for (int i = 0; i < 3; i++) {
        feltolt_koord(&haromszog->koord[i]);
        /*
        haromszog->koord[i].x = ((double)(rand() % 100))/100;
        haromszog->koord[i].y = ((double)(rand() % 100))/100;
        haromszog->koord[i].z = ((double)(rand() % 100))/100;
         */
    }
}

void megjelenit(Haromszog* haromszog) {
    std::cout << "Haromszog koordinatak: ";
    for (int i = 0; i < 3; i++) {
        std::cout << (i + 1) << ". koord \n";
        std::cout << haromszog->koord[i].x << ' ';
        std::cout << haromszog->koord[i].y << ' ';
        std::cout << haromszog->koord[i].z << ' ';
        std::cout << '\n';
    }
}

#define N 10

int main() {
    // Random szam
    srand(time(NULL));
    /// Egy haromszog
    Haromszog haromszog;
    feltolt(&haromszog);
    megjelenit(&haromszog);
    /// Tobb haromszog
    Haromszog haromszogek[N];
    for (int i = 0; i < N; i++){
        feltolt(&haromszogek[i]);
    }
    // Megjelenites
    for (int i = 0; i < N; i++) {
        std::cout << (i + 1) << ". haromszog: ";
        megjelenit(&haromszogek[i]);
        std::cout << '\n';
    }

    return 0;
}