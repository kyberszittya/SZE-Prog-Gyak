// Ex05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Olvassunk be 10 számot egy tömbbe!
// Kérjünk be két indexet, és cseréljük 
// fel a megfelelõ indexû elemeket, majd írjuk ki a tömböt!
// Fejlesszük ezt tovább úgy, hogy nem indexet, 
// hanem sorszámot kérünk a felhasználótól!
// A sorszám az[1, 10] zárt intervallumba essen, 
// hogy kényelmesebb legyen a program használata a felhasználónak!
// Ismét fejlesszük tovább a programot úgy, 
// hogy addig ismételjük a cseréket, 
// amíg érvénytelen sorszámot(< 1 vagy >10) nem kapunk !
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
