// Fel02_Mutatomb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 6
#define M 10

int main()
{
    int tomb[N], *ptomb[M];
    std::cout << "Kerem a tomb elemeit: \n";
    for (int i = 0; i < N; i++) {
        std::cout << i << ". elem: ";
        std::cin >> tomb[i];
    }
    std::cout << "Meg tovabbi" << M << " szamokat kerek:\n";
    for (int j = 0; j < M; j++) {
        int v;
        std::cout << j << ". elem: ";
        std::cin >> v;
        // V�gigmegy�nk a kor�bbi t�mb�nk�n, hogy van-e m�r ilyen sz�m
        int i = 0;
        for (i = 0; i < N && tomb[i] != v; i++);
        // Ellen�rizz�k, hogy benne van-e a t�mbben a k�rt elem
        if (i < N) ptomb[j] = &tomb[i];
        else ptomb[j] = 0;
    }
    // Ki�rjuk a mutat�t�mb�t
    for (int i = 0; i < M; i++) {
        std::cout << "A cim: " << ptomb[i] << '\n';
        if (ptomb[i] == 0) std::cout << "NULL\n";
        else std::cout << "Ertek: " << *ptomb[i] << ", memoriacim: " << ptomb[i] << '\n';
    }
}
