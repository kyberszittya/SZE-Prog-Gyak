// Gyak1_5_szamok100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 100

int main()
{
    // El�sz�r �rjuk ki a sz�mokat 1-100
    // Unsigned: eg�sz�rt�k� pozit�v sz�mok (0-2^64)
    for (unsigned int i = 1; i <= N; i++)
    {
        std::cout << i << ' ';
    }
    // Ezut�n k�rj�k be N �rt�k�t
    unsigned int n;
    std::cout << "\nMeddig kell ki�rni a sz�mokat? :\n";
    std::cin >> n;
    // Ellen�rizz�k, hogy a sz�m nagyobb-e mint 1
    if (n <= 1)
    {
        // Kil�p�nk, nem teljes�l a felt�tel�nk
        return -1;
    }
    // A sz�mok �sszeg�t is ki kell �rni! T�roljunk el ehhez egy v�ltoz�t 0 kezd��rt�kkel
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++)
    {
        std::cout << i << ' ';
        sum += i;
    }
    // �rjuk ki csak a p�ros sz�mokat
    std::cout << "\n Csak p�ros sz�mok ki�r�sa: \n";
    for (unsigned int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << ' ';
        }
    }

    // Opcion�lis feladat: 
    // k�t sz�m bek�r�se, ezek k�z�tt ki�rni az �sszes sz�mot (lehet negat�v is!)
    int n0, n1;
    std::cout << "\n Sz�mok ki�r�sa egy r�gz�tett intervallumon\n\n";
    // Els� sz�m bek�r�se
    std::cout << "Els� sz�m: ";
    std::cin >> n0;
    // M�sodik sz�m bek�r�se
    std::cout << "M�sodik sz�m: ";
    std::cin >> n1;
    // FIGYELEM: Ha az els� sz�m nagyobb, akkor cs�kken� sorrendben kell ki�rni a sz�mokat
    // Meg lehet oldani ciklusok ism�tl�se n�lk�l is
    int dx = 1; // Ezzel fogjuk v�ltoztatni a sz�ml�l� �rt�k�t
    if (n0 > n1)
    {
        dx *= -1;
    }
    // Ciklus
    for (int i = n0; i != (n1 + dx); i += dx)
    {
        std::cout << i << ' ';
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
