#include <iostream>

/**
 *
Összeadás függvénnyel

Írjon függvényt, amely két számot vár paraméterül
 és eredményül visszaadja a két szám összegét!
Írjon programot, amely két számot olvas be mindaddig,
 míg azok összege nem osztható 7-tel! A feladat megoldásához
 használja fel az előzőleg megírt függvény!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás.

 * @return
 */

int osszeadas(int a, int b) {
    return a + b;
}

bool ellenorzes(int res) {
    return res % 7 == 0;
}

int main() {
    int a;
    int b;
    while (true) {
        std::cout << "Kerem az elso szamot: "; std::cin >> a;
        std::cout << "Kerem a masodik szamot: "; std::cin >> b;
        int res = osszeadas(a, b);
        std::cout << "A ket szam osszege: " << res << '\n';
        /// Ciklusmagból való kilépés
        if (ellenorzes(res)){
            std::cout << "Az osszeg oszthato 7-el!\n";
            break;
        }
    }

    return 0;
}