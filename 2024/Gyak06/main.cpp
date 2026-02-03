#include <iostream>

/*
 * Struktúrák, struktúratömb

Készítsen programot, amely személyek születési évét,
 hónapját, napját képes tárolni,
 valamint a személy lakhelyének fővárostól való távolságát km-ben (float)!
Olvassa be 5 személy adatait a standard bemenetről!
Rendezze a tömböt a fővárostól való távolságok szerinti csökkenő sorrendbe, majd jelenítse meg az elemeit!
Rendezze a tömböt a személyek kora szerinti növekvő sorrendbe,
 majd jelenítse meg az elemeit!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás

 */
#define N 5

#define JELEN_EV 2024

struct Szemely {
    int ev;
    int honap;
    int nap;
    float tavolsag_fovaros;
};

void kiir(Szemely szemelyek[]) {
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". szemely: "
                  << szemelyek[i].ev << '.'
                  << szemelyek[i].honap << "."
                  << szemelyek[i].nap <<
                  ", tavolsag: "
                  << szemelyek[i].tavolsag_fovaros << '\n';
    }
}

// Ordo n^2
void rendezTavolsagSzerint(Szemely szemelyek[]) {
    for (int i = 0; i < N - 1; i++){
        for (int ii = i + 1; ii < N; ii++) {
            if (szemelyek[i].tavolsag_fovaros < szemelyek[ii].tavolsag_fovaros) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[ii];
                szemelyek[ii] = tmp;
            }
        }
    }
}

void rendezEletkorSzerint(Szemely szemelyek[]) {
    for (int i = 0; i < N - 1; i++){
        for (int ii = i + 1; ii < N; ii++) {
            if (szemelyek[i].ev > szemelyek[ii].ev ||
                    (szemelyek[i].ev == szemelyek[ii].ev &&
                        szemelyek[i].honap > szemelyek[ii].honap)||
                    (szemelyek[i].ev == szemelyek[ii].ev &&
                     szemelyek[i].honap == szemelyek[ii].honap &&
                     szemelyek[i].nap > szemelyek[ii].nap)
            ) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[ii];
                szemelyek[ii] = tmp;
            }
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Szemely szemelyek[N];
    for (int i = 0; i < N; i++){
        std::cout << i + 1 << ". szemely: \n";
        std::cout << "Szul. Ev: ";  std::cin >> szemelyek[i].ev;
        std::cout << "Honap: "; std::cin >> szemelyek[i].honap;
        std::cout << "Nap: "; std::cin >> szemelyek[i].nap;
        std::cout << "Tavolsag a fovarostol (km): ";
            std::cin >> szemelyek[i].tavolsag_fovaros;
    }
    kiir(szemelyek);
    std::cout << '\n';
    rendezTavolsagSzerint(szemelyek);
    kiir(szemelyek);
    rendezEletkorSzerint(szemelyek);
    std::cout << '\n';
    kiir(szemelyek);
    return 0;
}
