// 04_feladat_Szerepeltemar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define DB_SZAM 5

#include <iostream>

int main()
{
    std::cout << "Kerek " << DB_SZAM << " szamot\n";
    // Szamok tárolása a tömbben
    int szamok[DB_SZAM];
    // Szamok bekerese a tömbbe
    for (int i = 0; i < DB_SZAM; i++) {
        std::cout << i + 1 << ". : ";
        std::cin >> szamok[i];
    }
    // Konzolfelület törlése (Windows)
    system("cls");
    // Visszakérdezése a számoknak
    std::cout << "Emlekszel-e a szamokra amiket megadtal?\n";
    bool bennevan = false;
    do {
        int x;
        std::cout << "Kerek egy szamot! ";
        std::cin >> x;
        // Végigiterálás a tömbön, hogy szerepel-e a szám
        for (int i = 0; i < DB_SZAM; i++) {
            if (szamok[i] == x) {
                bennevan = true;
                break; // Kilépünk a for-ciklusból, van egyezés!
            }
        }
    } while (bennevan);
    // Kilépés
    std::cout << "Vesztettel, GEM OVER, WASTED, FLATLINED\n";
}
