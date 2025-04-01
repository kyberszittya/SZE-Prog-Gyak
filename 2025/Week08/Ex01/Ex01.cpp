// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Bevezet�s: V�ltoz�k dinamikus foglal�sa

Hozzon l�tre egy eg�sz sz�mot c�mz� mutat�t!
Foglalja le az eg�sz sz�mnak sz�ks�ges helyet!
Olvasson be egy sz�mot a mem�riater�letre!
�rassa ki a k�perny�re a beolvasott sz�mot!
Szabad�tsa fel a haszn�lt mem�riater�letet!
*/

#include <iostream>

// Mem�riasziv�rg�s ellen�rz�se
#define _CRTDBG_MAP_ALLOC

int main()
{
    // Mem�riasziv�rg�s ellen�rz�se
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | 
        _CRTDBG_LEAK_CHECK_DF);
    // Programk�d
    int* p;
    p = new int;
    std::cout << "Adjon meg egy sz�mot: ";
    std::cin >> *p;
    std::cout << "A beolvasott sz�m: " << *p << std::endl;
    std::cout << "A mem�riac�m: " << p << std::endl;
    delete p;
}
