// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Mutatók, bevezetõ feladat

Hozzon létre egy egész számot tároló változót és hozzá egy mutatót!
Olvassa be a szám értékét a mutatón keresztül!
Írassa ki a képernyõre a szám értékét és memóriacímét az elsõ változó segítségével!
Írassa ki a képernyõre a szám értékét és memóriacímét a mutató változó segítségével!
Írassa ki a képernyõre a mutató címét!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyûjtemény)
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
