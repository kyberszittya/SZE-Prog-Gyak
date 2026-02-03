#include <iostream>

/*
 * Írjon egy C/C++ programot, amely 2 db felhasználói függvényt használ, amelyeket meg is kell írnia.
Az egyik az int bekerTarol(int beTb[], int *lastBad),
amely 6 db kétjegyű, négyzetszámot kér be úgy, hogy azokat egy tömbbe tárolja le.
A négyzetszám olyan pozitív egész szám, amelynek a négyzetgyöke is egész.
A tömb hosszát szimbolikus állandóval állítsa be.
A tárolás természetesen csak akkor jöjjön létre, ha a fent leírt feltételek teljesülnek.
Ha az adott érték nem teljesíti a feltételeket, akkor helyette új számot kell bekérni!
A bekérési folyamatnak addig kell folytatódnia, amíg a tömb teljes feltöltése meg nem történik.
Szöveges bekérési információk és hibaüzenetek nem kellenek!!!
A feltételek teljesülése esetén a bekerTarol függvény határozza meg és tárolja el az
utolsó helytelen adatot. Ezen adat a függvény 2. paramétere. Ha minden adat korrekt volt,
akkor a lastBad értéke nulla (0) legyen!
A függvény 1. paraméter a tároló tömb.
A függvény visszatérési értéke az első és az utolsó helyes értékek szorzata legyen.
A másik függvény a void kiir(int multiply, int lastBad),
pedig írja ki a bekerTarol függvény visszatérési értékét illetve a 2. paraméter
tartalmát a példában látott szövegezéssel.
 */

#include<iostream>
#include <cmath>

#define MAX 6

using namespace std;

int bekerTarol(int beTb[], int *lastBad) {
    int i=0, e=0;
    double gyok=0;
    do {
        cin >> beTb[i];
        gyok = sqrt(beTb[i]);
        e = int(gyok);
        if (beTb[i] >= 10 && beTb[i] <= 99 && gyok - e == 0) {
            i++;
        }
        //if (beTb[i] >= 10 and beTb[i] <= 99 and gyok - e == 0) i++;
        else {
            (*lastBad) = beTb[i];
        }
    } while (i<MAX);
    return beTb[0]*beTb[i-1];
}

void kiir(int multiply, int lastBad) {

    cout << "A szorzat eredmenye: " << multiply
         << "\nAz utolso rossz adat: " << lastBad << endl;
}

int main() {
    int tb[MAX]={0},lastBad=0;
    int multiply=bekerTarol(tb,&lastBad);
    kiir(multiply,lastBad);
    return 0;
}