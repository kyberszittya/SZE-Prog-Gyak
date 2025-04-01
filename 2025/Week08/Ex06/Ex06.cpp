// Ex06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Olvasson be eg�sz sz�mokat valamilyen v�gjel megad�s�ig, 
majd mondja meg, hogy melyik �rt�k h�nyszor szerepelt 
a bemeneten!

Els� szint: Az �rt�kek egy ismert, kis intervallumba eshetnek. 
A v�gjel legyen az els�, intervallumon k�v�li �rt�k megad�sa.
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
		std::cout << "Adjon meg egy sz�mot: ";
		std::cin >> n;
        if (n < v0 || n > v1)
        {
			break;
		}
		p[n - v0]++;
	}
    // Ki�r�s
    for (int i = 0; i < v1 - v0 + 1; i++)
    {
        if (p[i] > 0)
        {
            std::cout << "Az " << i + v0 << " szam "
                << p[i] << " alkalommal szerepelt." << std::endl;
        }
    }
    // Mem�ria felszabad�t�sa
    delete[] p;
}
