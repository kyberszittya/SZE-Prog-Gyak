// Gyak1_3_abszolut.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Sz�m elt�rol�sa
    int x;
    // Sz�m beolvas�sa
    std::cout << "K�rek egy sz�mot: ";
    std::cin >> x;
    // Abszol�t�rt�k sz�m�t�sa
    int abs = x;
    if (abs < 0)
    {
        abs *= -1;
    }
    std::cout << "Abszol�t�rt�k: " << abs << '\n';
    // Ha a sz�m p�ros, �rjuk ki a fel�t
    if (abs % 2 == 0)
    {
        std::cout << "A sz�m p�ros, a sz�m fele: " << x / 2 << '\n';
    }
    else
    {
        // Az�rt n�zz�k meg mi t�rt�nik, ha p�ratlan �s �gy osztunk 2-vel
        std::cout << "A sz�m p�ratlan, a sz�m fele eg�sz�rt�k� oszt�ssal: " << x / 2 << '\n';
    }
}
