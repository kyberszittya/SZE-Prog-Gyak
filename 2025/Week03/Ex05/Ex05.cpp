// Ex05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Olvassunk be 10 sz�mot egy t�mbbe!
// K�rj�nk be k�t indexet, �s cser�lj�k 
// fel a megfelel� index� elemeket, majd �rjuk ki a t�mb�t!
// Fejlessz�k ezt tov�bb �gy, hogy nem indexet, 
// hanem sorsz�mot k�r�nk a felhaszn�l�t�l!
// A sorsz�m az[1, 10] z�rt intervallumba essen, 
// hogy k�nyelmesebb legyen a program haszn�lata a felhaszn�l�nak!
// Ism�t fejlessz�k tov�bb a programot �gy, 
// hogy addig ism�telj�k a cser�ket, 
// am�g �rv�nytelen sorsz�mot(< 1 vagy >10) nem kapunk !
#define N 10

int main()
{
    int numbers[N];
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". szam: "; std::cin >> numbers[i];
    }
    while (true) {
        std::cout << "1. sorszam: "; int i1; std::cin >> i1;
        if (i1 < 1 || i1 > N + 1) {
			break;
		}
        i1--;
        std::cout << "2. sorszam: "; int i2; std::cin >> i2;
        if (i2 < 1 || i2 > N + 1) {
            break;
        }
        i2--;
        
        int tmp = numbers[i1];
        numbers[i1] = numbers[i2];
        numbers[i2] = tmp;
        for (int i = 0; i < N; i++) {
			std::cout << numbers[i] << " ";
		}
        std::cout << std::endl;
    }
}
