// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Mutat�k, bevezet� feladat

Hozzon l�tre egy eg�sz sz�mot t�rol� v�ltoz�t �s hozz� egy mutat�t!
Olvassa be a sz�m �rt�k�t a mutat�n kereszt�l!
�rassa ki a k�perny�re a sz�m �rt�k�t �s mem�riac�m�t az els� v�ltoz� seg�ts�g�vel!
�rassa ki a k�perny�re a sz�m �rt�k�t �s mem�riac�m�t a mutat� v�ltoz� seg�ts�g�vel!
�rassa ki a k�perny�re a mutat� c�m�t!
(Felhaszn�lt forr�s: PE-MIK C Programoz�s I feladatgy�jtem�ny)
*/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int a;
    int* p_a = &a;
    std::cout << "Az ertek bekerese: ";
    std::cin >> *p_a;
    std::cout << "Az ertek: " << a << " memoriacime: " << &a << std::endl;
    std::cout << "Mutatoval: \n";
    std::cout << "Az ertek: " << *p_a << " memoriacime: " << p_a << std::endl;
    std::cout << "A mutato cime: " << &p_a << std::endl;
}
