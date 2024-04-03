//
// Created by keret on 2024. 03. 27..
//
/*
 * Bevezetés: Változók dinamikus foglalása

Hozzon létre egy egész számot címző mutatót!
Foglalja le az egész számnak szükséges helyet!
Olvasson be egy számot a memóriaterületre!
Írassa ki a képernyőre a beolvasott számot!
Szabadítsa fel a használt memóriaterületet!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás
 *
 */

#include <iostream>

int main() {
    int* a;
    a = new(int);
    std::cout << a << '\n';
    std::cout << "Kerek egy szamot: ";
    std::cin >> *a;
    std::cout << "A szam: " << a << ", " << *a << '\n';
    // Felszabaditas
    delete a;
    return 0;
}