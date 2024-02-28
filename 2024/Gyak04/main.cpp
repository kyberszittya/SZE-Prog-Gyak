/*
 * Önálló feladat
    Olvassunk be 5 számot egy tömbbe
    Kérjünk be további számokat, és ennyivel shifteljük jobbra az elemeket, majd írjuk ki a tömböt
    Negatív szám esetén balra shifteljen, és 5-nél nagyobbra is működjön
    Addig ismételjük, amíg nem 0-t kapunk
 */

#include <iostream>

//#define N 5
constexpr int N = 5;

int main() {
    /*
     * [_________] + _
     */
    int tomb[N];
    std::cout << "Kerek " << N << " szamot:";
    for (int i = 0; i < N; i++){
        std::cout << i << ": ";
        std::cin >> tomb[i];
    }
    std::cout << "Shifteles!\n";
    int shift = 0;
    do {
        std::cout << "Shifteles mértéke: ";
        std::cin >> shift;
        int marshift = shift % N;
        std::cout << marshift << '\n';
        int ujtomb[N];
        if (marshift > 0) {
            for (int i = 0; i < N; i++) {
                int tol = (i + marshift) % N;
                ujtomb[i] = tomb[tol];
            }
        }
        else {
            for (int i = 0; i < N; i++) {
                int tol = (N + marshift - i) % N;
                std::cout << tol << '\n';
                ujtomb[i] = tomb[tol];
            }
        }
        for (int i = 0; i < N; i++){
            std::cout << ujtomb[i] << ' ';
            tomb[i] = ujtomb[i];
        }

        std::cout << '\n';
    }while(shift != 0);
    return 0;
}
