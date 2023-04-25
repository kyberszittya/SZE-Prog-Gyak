// Fel02_Rendezes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define N 5

struct Hallgato {
    int ev, honap, nap;
    double tavolsag;
};

bool oregebb(Hallgato h1, Hallgato h2) {
    return (h1.ev < h2.ev) || 
        (h1.ev == h2.ev && h1.honap < h2.honap) ||
        (h1.ev == h2.ev && h1.honap == h2.honap && 
            h1.nap < h2.nap);
}

void kiiras(Hallgato* hallgatok, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << hallgatok[i].ev << '.' <<
            hallgatok[i].honap << '.' <<
            hallgatok[i].nap << '\t' << hallgatok[i].tavolsag << '\n';
    }
    std::cout << '\n';
}

int main()
{
    Hallgato hallgatok[N];
    // Hallgatok beolvasasa
    for (int i = 0; i < N; i++) {
        std::cout << i << ". Hallgato adatai: \n";
        std::cout << "Szuletesi ev: "; std::cin >> hallgatok[i].ev;
        std::cout << "Szuletesi honap: "; std::cin >> hallgatok[i].honap;
        std::cout << "Szuletesi nap: "; std::cin >> hallgatok[i].nap;
        std::cout << "Fovarostol valo tavolsag: "; std::cin >> hallgatok[i].tavolsag;
    }
    // Rendezes szuletesi ido szerint
    for (int i = 0; i < N - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (oregebb(hallgatok[i], hallgatok[j])) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            // Csere
            Hallgato tmp = hallgatok[i];
            hallgatok[i] = hallgatok[min_idx];
            hallgatok[min_idx] = tmp;
        }
    }
    kiiras(hallgatok, N);
    // Rendezes tavolsag szerint
    for (int i = 0; i < N - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (hallgatok[i].tavolsag < 
                    hallgatok[j].tavolsag) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            // Csere
            Hallgato tmp = hallgatok[i];
            hallgatok[i] = hallgatok[min_idx];
            hallgatok[min_idx] = tmp;
        }
    }
    kiiras(hallgatok, N);
}
