// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Mutat�k, t�mb�k

Olvasson be egy hatelem� t�mb�t, amely eg�sz sz�mokat t�rol �s t�ltse fel �rt�kekkel!
Hozzon l�tre egy 10 elem� t�mb�t, amely mutat�kat t�rol!
Olvasson be t�z sz�mot a k�perny�r�l! Ha a sz�m szerepel a hatelem� t�mbben, 
    t�rolja el annak a c�m�t, ellenkez� esetben t�roljon el egy nulla�rt�k� c�met!
Jelen�tse meg a 10 elem� t�mb �ltal mutatott �rt�keket �s hozz�juk tartoz� 
    mem�riac�meket!
*/

#include <iostream>
#define N 6
#define M 10

void kiiratas(int* mutatok[], int m) {
    // Kiiratas
    for (int i = 0; i < m; i++) {
        if (mutatok[i] != nullptr) {
            std::cout << "A mutato erteke: " <<
                *mutatok[i] << " cime: " << mutatok[i] << std::endl;
        }
    }
}

void mutatokKezelese(int szamok[], int* mutatok[], int n, int m) {
    for (int i = 0; i < m; i++) {
        int szam;
        std::cout << "Kerem a " << i + 1 << ". mutatot: ";
        std::cin >> szam;
        mutatok[i] = nullptr;
        for (int j = 0; j < n; j++) {
            if (szam == szamok[j]) {
                mutatok[i] = &szamok[j];
                break;
            }
        }
    }
}

void bekeresSzamok(int szamok[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Kerem " << i + 1 << ". szam: ";
        std::cin >> szamok[i];
    }
}

int main()
{
    int szamok[N];
    int* mutatok[M];
    bekeresSzamok(szamok, N);
    mutatokKezelese(szamok, mutatok, N, M);
    kiiratas(mutatok, M);
    return 0;
}
