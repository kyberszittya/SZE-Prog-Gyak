// 04_feladat_Szerepeltemar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define DB_SZAM 5

#include <iostream>

int main()
{
    std::cout << "Kerek " << DB_SZAM << " szamot\n";
    // Szamok t�rol�sa a t�mbben
    int szamok[DB_SZAM];
    // Szamok bekerese a t�mbbe
    for (int i = 0; i < DB_SZAM; i++) {
        std::cout << i + 1 << ". : ";
        std::cin >> szamok[i];
    }
    // Konzolfel�let t�rl�se (Windows)
    system("cls");
    // Visszak�rdez�se a sz�moknak
    std::cout << "Emlekszel-e a szamokra amiket megadtal?\n";
    bool bennevan = false;
    do {
        int x;
        std::cout << "Kerek egy szamot! ";
        std::cin >> x;
        // V�gigiter�l�s a t�mb�n, hogy szerepel-e a sz�m
        for (int i = 0; i < DB_SZAM; i++) {
            if (szamok[i] == x) {
                bennevan = true;
                break; // Kil�p�nk a for-ciklusb�l, van egyez�s!
            }
        }
    } while (bennevan);
    // Kil�p�s
    std::cout << "Vesztettel, GEM OVER, WASTED, FLATLINED\n";
}
