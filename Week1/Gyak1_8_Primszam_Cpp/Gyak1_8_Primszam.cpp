// Gyak1_8_Primszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Sz�m bek�r�se
    int n;
    std::cout << "Melyik sz�mot ellen�r�zzem, hogy pr�m?: ";
    std::cin >> n;
    // Egy sz�m �nmag�val �s 1-el mindig oszthat�
    unsigned cnt_osztok = 2;
    // Haszn�ljuk fel, hogy egy tetsz�leges sz�m oszthat�s�g�t a gy�k�ig kell ellen�rizni    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt_osztok++;
        }
    }
    // Ellen�rz�s (ha oszt�k sz�ma nagyobb mint 2, akkor nem pr�msz�m)
    if (cnt_osztok > 2)
    {
        std::cout << "A sz�m nem pr�m\n";
    }
    else
    {
        std::cout << "A sz�m pr�m\n";
    }

    return 0;
}

