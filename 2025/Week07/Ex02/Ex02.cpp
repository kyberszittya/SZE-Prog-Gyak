// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Mutatók, tömbök

Olvasson be egy hatelemû tömböt, amely egész számokat tárol és töltse fel értékekkel!
Hozzon létre egy 10 elemû tömböt, amely mutatókat tárol!
Olvasson be tíz számot a képernyõrõl! Ha a szám szerepel a hatelemû tömbben, 
    tárolja el annak a címét, ellenkezõ esetben tároljon el egy nullaértékû címet!
Jelenítse meg a 10 elemû tömb által mutatott értékeket és hozzájuk tartozó 
    memóriacímeket!
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
