// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Bevezetés: Változók dinamikus foglalása

Hozzon létre egy egész számot címzõ mutatót!
Foglalja le az egész számnak szükséges helyet!
Olvasson be egy számot a memóriaterületre!
Írassa ki a képernyõre a beolvasott számot!
Szabadítsa fel a használt memóriaterületet!
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
    int* p;
    p = new int;
    std::cout << "Adjon meg egy számot: ";
    std::cin >> *p;
    std::cout << "A beolvasott szám: " << *p << std::endl;
    std::cout << "A memóriacím: " << p << std::endl;
    delete p;
}
