// Feladat03_megintszambekeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// - K�rj�nk be sz�mokat, m�g egym�s ut�n k�tszer 
//   ugyanazt a sz�mot nem kapjuk
// - A v�g�n �rjuk ki, hogy h�ny sz�mot olvastunk be
// - �s h�ny p�ros sz�mot olvastunk be ?


int main()
{
    int x = 10;
    int elozo = -1;
    int db = 0;
    int paros_db = 0;
    do {
        // 1. pont megold�sa
        std::cout << "Kerek egy szamot: ";
        // Elozo �rt�k friss�t�se
        if (elozo == -1) { elozo = x / 2; }
        else { elozo = x; }
        // Bekerese a szamnak
        std::cin >> x;
        // 2. pont megold�sa
        db++;
        // 3. pont megold�sa
        if (x % 2 == 0) { paros_db++; }
    } while (elozo != x);
    
    std::cout << "Paros szamok: " << paros_db << '\n';
    std::cout << "Osszes szam: " << db << '\n';
}
