// 01_bekeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// K�rj�nk be k�t sz�mot, 
// majd mondjuk meg, hogy az els� a nagyobb, 
// a m�sodik, vagy egyenl�k!
int main()
{
    int x, y;
    std::cout << "Kerem az elso szamot: ";
    std::cin >> x;
    std::cout << "Kerem a masodik szamot: ";
    std::cin >> y;
    if (x > y) {
        std::cout << "Az elso nagyobb\n";
    }
    else if (x < y) {
        std::cout << "A masodik nagyobb\n";
    }
    else {
        std::cout << "Egyenlok";
    }
}
