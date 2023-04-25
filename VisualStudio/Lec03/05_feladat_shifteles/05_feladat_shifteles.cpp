// 05_feladat_shifteles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define DBSZAM 5

int main()
{
    int szamok[DBSZAM];
    // Szamok bekerese
    std::cout << "Szamok bekerese\n";
    for (int i = 0; i < DBSZAM; i++) {
        std::cout << i << ". : ";
        std::cin >> szamok[i];
    }
    // Shifteles
    int shiftval;
    do {
        std::cout << "Shifteles erteke: ";
        std::cin >> shiftval;
        // Ha pozitiv shift
        if (shiftval > 0) {
            // Shifteles ennyiszer
            for (int i = 0; i < shiftval; i++) {
                // Shifteles
                // Az utolsó számot rakjuk az elejére
                int tmp = szamok[DBSZAM - 1];
                for (int j = DBSZAM - 1; j > 1; j--) {
                    szamok[j] = szamok[j - 1];
                }
                // Elso ertek egyenlo TMP
                szamok[0] = tmp;
            }
        }
        // Shiftelt tomb kiirása
        for (int i = 0; i < DBSZAM; i++) {
            std::cout << szamok[i] << ' ';
        }
        std::cout << '\n';
    } while (shiftval != 0);
}
