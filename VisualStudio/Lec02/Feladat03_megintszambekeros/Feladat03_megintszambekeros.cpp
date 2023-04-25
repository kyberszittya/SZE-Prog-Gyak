// Feladat03_megintszambekeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// - Kérjünk be számokat, míg egymás után kétszer 
//   ugyanazt a számot nem kapjuk
// - A végén írjuk ki, hogy hány számot olvastunk be
// - És hány páros számot olvastunk be ?


int main()
{
    int x = 10;
    int elozo = -1;
    int db = 0;
    int paros_db = 0;
    do {
        // 1. pont megoldása
        std::cout << "Kerek egy szamot: ";
        // Elozo érték frissítése
        if (elozo == -1) { elozo = x / 2; }
        else { elozo = x; }
        // Bekerese a szamnak
        std::cin >> x;
        // 2. pont megoldása
        db++;
        // 3. pont megoldása
        if (x % 2 == 0) { paros_db++; }
    } while (elozo != x);
    
    std::cout << "Paros szamok: " << paros_db << '\n';
    std::cout << "Osszes szam: " << db << '\n';
}
