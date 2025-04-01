// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Olvasson be egy eg�sz sz�mot billenty�zetr�l!
Foglaljon helyet annyi eg�sz sz�mnak, 
    amennyi az el�z�leg beolvasott sz�m �rt�ke!
Olvasson be �s t�roljon el annyi eg�sz sz�mot, 
    amennyi az el�z�leg beolvasott sz�m �rt�ke!
�rassa ki a beolvasott sz�mokat!
Szabad�tsa fel a lefoglalt mem�riater�letet!
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
    int n;
    std::cout << "Adjon meg egy sz�mot (m�ret): ";
    std::cin >> n;
    // Dinamikus t�mb l�trehoz�sa
    int* p = new int[n];
    // Beolvas�s
    for (int i = 0; i < n; i++)
    {
		std::cout << "Adjon meg egy sz�mot: ";
		std::cin >> p[i];
	}
    // Ki�r�s
    for (int i = 0; i < n; i++)
    {
		std::cout << p[i] << " ";
	}
	std::cout << std::endl;
	// Mem�riater�let felszabad�t�sa
    delete[] p;
}
