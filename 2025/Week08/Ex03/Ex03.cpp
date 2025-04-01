// Ex03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*K�sz�tsen egy koordin�t�t t�rol� strukt�r�t!
�rjon f�ggv�nyt, amely koordin�t�t olvas be 
    billenty�zetr�l!
Foglaljon dinamikus mem�ri�t �s jelen�tse meg a 
    t�rolt koordin�t�kat!
Szabad�tsa fel a lefoglalt mem�riater�letet!
*/
#include <iostream>
// Mem�riasziv�rg�s ellen�rz�se
#define _CRTDBG_MAP_ALLOC

struct Coord
{
	double x;
	double y;
    double z;
};

int main()
{
    // Mem�riasziv�rg�s ellen�rz�se
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |
    		_CRTDBG_LEAK_CHECK_DF);
    Coord* p = new Coord;
    std::cout << "Adja meg az x koordin�t�t: ";
    std::cin >> p->x;
    std::cout << "Adja meg az y koordin�t�t: ";
    std::cin >> p->y;
    std::cout << "Adja meg az z koordin�t�t: ";
    std::cin >> p->z;
    // Ny�l oper�tor
    std::cout << "A koordin�t�k: " << p->x << " " 
        << p->y << " " << p->z << std::endl;
    // Pont oper�tor
    std::cout << "A koordin�t�k: " << (*p).x << " " 
		<< (*p).y << " " << (*p).z << std::endl;
    // T�rl�s
    delete p;
}
