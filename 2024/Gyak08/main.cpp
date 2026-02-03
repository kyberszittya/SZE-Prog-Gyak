#include <iostream>

/*
 * Tömbök dinamikus foglalása

Olvasson be egy egész számot billentyűzetről!
Foglaljon helyet annyi egész számnak, amennyi az előzőleg beolvasott szám értéke!
Olvasson be és tároljon el annyi egész számot,
 amennyi az előzőleg beolvasott szám értéke!
Írassa ki a beolvasott számokat!
Szabadítsa fel a lefoglalt memóriaterületet!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás
 */

int main() {
    int n;
    std::cout << "Ekkora méretű tömböt foglaljunk le: ";
    std::cin >> n;
    /// Lefoglaljuk a memóriaterületet
    int* tomb = new int[n];
    for (int i = 0; i < n; i++){
        std::cout << i << ". elem: ";
        std::cin >> tomb[i];
    }
    /// Beolvasott számok kiírása
    std::cout << "\nSzamok kiirasa: \n";
    for (int i = 0; i < n; i++){
        std::cout << i << ". elem: " << tomb[i] << '\n';
    }
    /// Felszabadítása a memóriaterületnek
    delete[] tomb;
    return 0;
}
