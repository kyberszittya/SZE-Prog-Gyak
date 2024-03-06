//
// Created by keret on 2024. 03. 06..
//

/*
 * Nagyobb szám függvénnyel

Írjon függvényt, amely két számot vár paraméterül és eredményül
 `1`-et ad vissza, ha az első szám nagyobb a másodiknál,
 `-1`-et, ha a második nagyobb az elsőnél,
 `0`-át, ha egyenlők!
Olvasson be egy hételemű tömböt!
Írassa ki a képernyőre azon szomszédos elemeket,
 amelyekre igaz, hogy az első nagyobb a másodiknál!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
 */
#include <iostream>
#define N 7

int nagyobb_kisebb(int a, int b){
    //return a < b ? (a < b ? 1: -1): 0;
    if (a > b) return 1;
    else if (a < b) return -1;
    else return 0;
}

void beker(int tomb[]) {
    for (int i = 0; i < N; i++){
        std::cout << i + 1 << ". szam: ";  std::cin >> tomb[i];
    }
}

void kiir(int tomb[]) {
    for (int i = 0; i < N; i++){
        std::cout << i + 1 << ". szam: " <<  tomb[i] << '\n';
    }
}

void osszehasonlitas(int tomb[]) {
    for (int i = 0; i < N - 1; i++) {
        int x0 = tomb[i]; int x1 = tomb[i + 1];
        if (nagyobb_kisebb(x0, x1) == 1) {
            std::cout << "Elso szam nagyobb mint a kovetkezo: "
                      << x0 << ", " << x1 << '\n';
        }
    }
}

int main() {
    int tomb[N];
    beker(tomb);
    kiir(tomb);
    /// Vegigmegyunk a tombon es ellenorizzuk
    osszehasonlitas(tomb);
}