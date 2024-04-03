//
// Created by keret on 2024. 03. 27..
//

/*
 * Mutatók, struktúrák

- Készítsen egy struktúrát, amely koordinátákat tárol (x, y, z)!
- Hozzon létre egy három elemű tömböt, amely koordinátákat tárol!
- Egy mutató segítségével töltse fel a tömböt értékekkel!
- A mutatón keresztül jelenítse meg a tömb elemeit!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás

 */
#include <iostream>
#define N 3

struct Koordinata {
    double x;
    double y;
    double z;
};

void feltoltes(Koordinata* koord) {
    std::cout << "x koordinata: ";
    std::cin >> koord->x;
    std::cout << "y koordinata: ";
    std::cin >> (*koord).y;
    std::cout << "z koordinata: ";
    std::cin >> koord->z;
}

void feltoltes_osszes(Koordinata* koordok) {
    for (int i = 0; i < N; i++){
        std::cout << i << ". koordinata\n";
        feltoltes(&koordok[i]);
    }
}

void megjelenit(Koordinata* koord){
    std::cout << koord->x << ' ';
    std::cout << (*koord).y << ' ';
    std::cout << (*koord).z << ' ';
}

void megjelenit_osszes(Koordinata koordok[]) {
    for (int i = 0; i < N; i++) {
        std::cout << (i + 1) << ". koordinata: ";
        megjelenit(&koordok[i]);
        std::cout << '\n';
    }
}

int main() {
    Koordinata tomb[N];
    feltoltes_osszes(tomb);
    megjelenit_osszes(tomb);
    return 0;
}