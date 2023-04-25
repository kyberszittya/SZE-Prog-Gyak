// Lec02_Atlagalatti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr int BEKER_SZAM = 5;

int main()
{
    double szum = 0.0;
    // T�mb defini�l�sa
    int szamok[BEKER_SZAM];
    std::cout << "Atlagszamitas!\n";
    for (int i = 0; i < BEKER_SZAM; i++) {
        // Szamok bek�rese
        std::cout << "Kerek egy szamot: ";
        std::cin >> szamok[i];
        szum += szamok[i];
    }
    double avg = szum / BEKER_SZAM;
    std::cout << "Atlag: " << avg << '\n';
    // �tlag alatti �rt�kek
    for (int i = 0; i < BEKER_SZAM; i++) {
        if (szamok[i] < avg) {
            std::cout << szamok[i] << '\n';
        }
    }
}