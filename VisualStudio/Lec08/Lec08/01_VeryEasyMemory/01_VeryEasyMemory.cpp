// 01_VeryEasyMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int* x;         // Egy heapre mutat� v�ltoz� (sima mutat�)
    x = new int;    // Itt hozzuk l�tre a heapen a v�ltoz�t �s egy mutat�val t�r�nk vissza
    if (x == nullptr) {     // 0-as mem�riac�m: nincs defini�lva a mem�riater�let, nem mutatunk sehova
        std::cout << "Sikertelen memoriafoglalas\n";
        return -1;
    }
    std::cout << "K�rek egy sz�mot beolvasni: ";
    std::cin >> *x;
    std::cout << "A beolvasott sz�m c�me: " << x << "\n A beolvasott sz�m �rt�ke: " << *x << '\n';
    delete x;      // Felszabad�tjuk a mem�riater�letet
    return 0;
}

