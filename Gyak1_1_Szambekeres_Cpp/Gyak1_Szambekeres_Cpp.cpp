// Gyak1_Szambekeres_Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int main()
{
    // Sz�m elt�rol�sa egy v�ltoz�ban
    int x;
    // Jelezz�k standard output-on mit szeretn�nk a felhaszn�l�t�l ("cout" ~ console output)
    std::cout << "K�rek egy sz�mot: ";
    // Sz�m bek�r�se standard inputr�l ("cin" ~ console input)
    std::cin >> x;
    // �rjuk ki a k�tszeres�t a sz�mnak
    std::cout << "A sz�m k�tszerese: " << 2 * x << '\n';
    // '\n' ~ �j sor (v�. ENTER)
}
