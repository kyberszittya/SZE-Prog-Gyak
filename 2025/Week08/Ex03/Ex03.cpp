// Ex03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Készítsen egy koordinátát tároló struktúrát!
Írjon függvényt, amely koordinátát olvas be 
    billentyûzetrõl!
Foglaljon dinamikus memóriát és jelenítse meg a 
    tárolt koordinátákat!
Szabadítsa fel a lefoglalt memóriaterületet!
*/
#include <iostream>
// Memóriaszivárgás ellenõrzése
#define _CRTDBG_MAP_ALLOC

struct Coord
{
	double x;
	double y;
    double z;
};

int main()
{
    // Memóriaszivárgás ellenõrzése
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |
    		_CRTDBG_LEAK_CHECK_DF);
    Coord* p = new Coord;
    std::cout << "Adja meg az x koordinátát: ";
    std::cin >> p->x;
    std::cout << "Adja meg az y koordinátát: ";
    std::cin >> p->y;
    std::cout << "Adja meg az z koordinátát: ";
    std::cin >> p->z;
    // Nyíl operátor
    std::cout << "A koordináták: " << p->x << " " 
        << p->y << " " << p->z << std::endl;
    // Pont operátor
    std::cout << "A koordináták: " << (*p).x << " " 
		<< (*p).y << " " << (*p).z << std::endl;
    // Törlés
    delete p;
}
