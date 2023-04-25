// 01_VeryEasyMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int* x;         // Egy heapre mutató változó (sima mutató)
    x = new int;    // Itt hozzuk létre a heapen a változót és egy mutatóval térünk vissza
    if (x == nullptr) {     // 0-as memóriacím: nincs definiálva a memóriaterület, nem mutatunk sehova
        std::cout << "Sikertelen memoriafoglalas\n";
        return -1;
    }
    std::cout << "Kérek egy számot beolvasni: ";
    std::cin >> *x;
    std::cout << "A beolvasott szám címe: " << x << "\n A beolvasott szám értéke: " << *x << '\n';
    delete x;      // Felszabadítjuk a memóriaterületet
    return 0;
}

