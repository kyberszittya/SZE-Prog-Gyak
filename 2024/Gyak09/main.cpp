#include <iostream>

/*
 * Pascal-háromszög

Kérje be a sorok számát!
Hozzon létre dinamikusan egy háromszög-mátrixot a tároláshoz
 (az első sor 1 hosszú, majd egyesével növekszik)!
Számolja ki az egyes elemeket: minden sor szélein 1,
 a köztes elemek a fölötte lévő két elem összegei!
Jelenítse meg a háromszög-mátrixot (a sorokat nem kell középre igazítani)!
Szabadítsa fel a használt memóriaterületet!
Megoldás

 */

int main() {
    int n_sorok;
    std::cout << "Kerem a sorok szamat: ";
    std::cin >> n_sorok;
    int** triangle;
    triangle = new int*[n_sorok + 1];
    for (int i = 0; i <= n_sorok; i++){
        triangle[i] = new int[i + 1];
    }
    // Elemek kiszámítása
    for (int i = 0; i <= n_sorok; i++){
        for (int j = 0; j < i; j++){
            // Szélső értékek kezelése
            if (j == 0 || j == i - 1){
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
            }
        }
    }
    /// Megjelenítés
    for (int i = 0; i <= n_sorok; i++){
        for (int j = 0; j < i; j++) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << '\n';
    }
    /// Felszabaditas
    for (int i = 0; i <= n_sorok; i++){
        delete[] triangle[i];
    }
    delete[] triangle;
    return 0;
}
