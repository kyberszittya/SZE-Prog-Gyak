// Ex06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Olvasson be egész számokat valamilyen végjel megadásáig, 
majd mondja meg, hogy melyik érték hányszor szerepelt 
a bemeneten!

Elsõ szint: Az értékek egy ismert, kis intervallumba eshetnek. 
A végjel legyen az elsõ, intervallumon kívüli érték megadása.
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
    int v0, v1;
    std::cout << "Adjon meg egy intervallumot: ";
    std::cin >> v0 >> v1;
    if (v0 > v1) {
        // Csere
        int temp = v0;
        v0 = v1;
        v1 = temp;
    }
    int* p = new int[v1 - v0 + 1];
    for (int i = 0; i < v1 - v0 + 1; i++)
    {
        p[i] = 0;
    }
    while (true)
    {
		int n;
		std::cout << "Adjon meg egy számot: ";
		std::cin >> n;
        if (n < v0 || n > v1)
        {
			break;
		}
		p[n - v0]++;
	}
    // Kiírás
    for (int i = 0; i < v1 - v0 + 1; i++)
    {
        if (p[i] > 0)
        {
            std::cout << "Az " << i + v0 << " szam "
                << p[i] << " alkalommal szerepelt." << std::endl;
        }
    }
    // Memória felszabadítása
    delete[] p;
}
