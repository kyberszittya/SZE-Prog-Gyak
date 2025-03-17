// Ex_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
K�z�s feladat

�rjuk ki a sz�mokat 1-t�l 100-ig
K�rj�k be N �rt�k�t, majd �rjuk ki a sz�mokat 1-t�l N-ig
Ellen�rizz�k, hogy N>1
A v�g�n �rjuk ki a sz�mok �sszeg�t
Csak a p�ros sz�mokat �rjuk ki
Opcion�lis feladat: k�rj�nk be k�t sz�mot, 
majd soroljuk fel a k�zt�k l�v� sz�mokat, 
ha az els� sz�m nagyobb, akkor cs�kken� sorrendben
Vide�
*/

int main()
{
    int N;
    do {
        std::cout << "Kerem adja meg N erteket: ";
        std::cin >> N;        
    } while (N <= 1);
    int sum = 0;
    // Iter�ci� 1-t�l N-ig
    for (int i = 1; i <= N; i++)
    {
        // P�ros sz�mok ki�r�sa
        if (i % 2 == 0){
            std::cout << i << " ";
        }        
        // �sszegz�s
        sum += i;
    }
    // �j sor
    std::cout << std::endl;
    // �sszeg ki�r�sa
    std::cout << "Osszeg: " << sum << std::endl;
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
