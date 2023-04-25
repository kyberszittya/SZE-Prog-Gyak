#include "Datum.h"

void Datum::datumbeolvas() {
    std::cout << "Datum beolvasasa (YYYY MM NN): ";
    std::cin >> ev;
    std::cin >> honap;
    std::cin >> nap;
}

void Datum::kiiras() {
    std::cout << "Datum: ";
    std::cout << ev << ".";
    std::cout << honap << ".";
    std::cout << nap << '\n';
}

int Datum::compare(Datum* masik) {
    if (ev > masik->ev) { return 1; }
    else if (ev == masik->ev) {
        if (honap > masik->honap) { return 1; }
        else if (honap == masik->honap) {
            if (nap > masik->nap) return 1;
            else return -1;
        }
        else { return -1; }
    }
    else { return -1; }
}