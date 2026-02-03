#include <iostream>

/*
 * Hozzon létre egy egész számot tároló változót és hozzá egy mutatót!
Olvassa be a szám értékét a mutatón keresztül!
Írassa ki a képernyőre a szám értékét és memóriacímét az
 első változó segítségével!
Írassa ki a képernyőre a szám értékét és memóriacímét
 a mutató változó segítségével!
Írassa ki a képernyőre a mutató címét!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
 */

int main() {
    int a = 56;
    std::cout << "Valtozo erteke: " << a << '\n';
    std::cout << "Valtozo memoriacime: " << &a << '\n';
    int* mutato = &a;
    std::cout << "Mutato memoriacime: " << mutato << '\n';
    std::cout << "Mutato altal referalt ertek: " << *mutato << '\n';

    /// Beolvassuk az új értéket a muatón keresztül
    std::cout << "Uj erteket kerek: ";
    std::cin >> *mutato;
    std::cout << "Valtozo uj erteke: " << a << '\n';
    return 0;
}
