//
// Created by keret on 2024. 03. 06..
//

/*
 * Legnagyobb szám függvénnyel

Írjon függvényt, amely két számot vár paraméterül
 és eredményül visszaadja a két szám maximumát!
Olvasson be egy számot, amelyet eltárol jelenlegi maximális értékként!
Olvasson be számokat addig,
 míg nem adunk meg háromszor is nagyobb számot az előzőeknél!
 A nagyobb számot mindig tárolja el jelenlegi maximumként!
A feladat megoldásához használja fel az előzőleg megírt függvényt!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
 */
#include <iostream>

double max(double a, double b) {
    return a > b ? a: b;
    /*
     if (a > b) return a;
     else return b;
     */
}

int main(){
    double akt_max;
    std::cout << "Aktuális maximum: ";
    std::cin >> akt_max;
    int cnt_max = 0;
    do {
        double uj_szam;
        std::cout << "Uj szam: ";
        std::cin >> uj_szam;
        if (uj_szam > akt_max) {
            std::cout << "Uj maximum ertek\n";
            akt_max = max(akt_max, uj_szam);
            cnt_max++;
        }
    }while(cnt_max < 3);
    std::cout << "3x is nagyobb max szamot kaptam, BYE\n";
    return 0;
}