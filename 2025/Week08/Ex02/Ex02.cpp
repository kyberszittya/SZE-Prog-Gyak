// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Olvasson be egy egész számot billentyûzetrõl!
Foglaljon helyet annyi egész számnak, 
    amennyi az elõzõleg beolvasott szám értéke!
Olvasson be és tároljon el annyi egész számot, 
    amennyi az elõzõleg beolvasott szám értéke!
Írassa ki a beolvasott számokat!
Szabadítsa fel a lefoglalt memóriaterületet!
*/
#include <iostream>
// Memóriaszivárgás ellenõrzése
#define _CRTDBG_MAP_ALLOC


int main()
{
    // Memóriaszivárgás ellenõrzése
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |
    		_CRTDBG_LEAK_CHECK_DF);
    // Programkód
    int n;
    std::cout << "Adjon meg egy számot (méret): ";
    std::cin >> n;
    // Dinamikus tömb létrehozása
    int* p = new int[n];
    // Beolvasás
    for (int i = 0; i < n; i++)
    {
		std::cout << "Adjon meg egy számot: ";
		std::cin >> p[i];
	}
    // Kiírás
    for (int i = 0; i < n; i++)
    {
		std::cout << p[i] << " ";
	}
	std::cout << std::endl;
	// Memóriaterület felszabadítása
    delete[] p;
}
