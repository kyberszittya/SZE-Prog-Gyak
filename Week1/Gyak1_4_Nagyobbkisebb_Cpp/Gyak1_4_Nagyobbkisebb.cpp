// Gyak1_4_Nagyobbkisebb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // K�t sz�m t�rol�sa
    int x, y;
    // Els� sz�m bek�r�se
    std::cout << "Els� sz�m: ";
    std::cin >> x;
    // M�sodik sz�m bek�r�se
    std::cout << "M�sodik sz�m: ";
    std::cin >> y;
    // Sz�mok ellen�rz�se
    if (x > y)
    {
        // Ha az els� nagyobb, �rjuk ki a k�t sz�m k�l�nbs�g�t
        std::cout << "K�t sz�m k�l�nbs�ge: " << x - y << '\n';
    }
    // Ha mindk�t sz�m kisebb mint 10, akkor �rjuk ki a sozrzatukat is
    if (x < 10 && y < 10)
    {        
        std::cout << "K�t sz�m szorzata: " << x * y << '\n';
    }

    return 0;
}
