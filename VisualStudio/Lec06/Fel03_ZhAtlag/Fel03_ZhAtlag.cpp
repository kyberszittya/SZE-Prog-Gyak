// Fel03_ZhAtlag.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define ZH_SZAM 3

struct Hallgato {
    std::string vezeteknev;
    std::string keresztnev;
    std::string targynev;
    int zh_eredmenyek[ZH_SZAM];
};

Hallgato bekeresHallgato() {
    Hallgato hallgato;
    std::cout << "Hallgato vezeteknev: "; 
    std::cin >> hallgato.vezeteknev;
    std::cout << "Hallgato keresztnev: "; 
    std::cin >> hallgato.keresztnev;
    std::cout << "Hallgatott targy: "; 
    std::cin >> hallgato.targynev;
    // ZH eredmenyek bekerese
    for (int i = 0; i < ZH_SZAM; i++) {
        std::cout << "ZH eredmeny: ";
        std::cin >> hallgato.zh_eredmenyek[i];
    }
    return hallgato;
}

double zhAtlag(Hallgato hallgato) {
    double szum = 0.0;
    for (int i = 0; i < ZH_SZAM; i++) {
        szum += hallgato.zh_eredmenyek[i];
    }
    return szum / ZH_SZAM;
}

int main()
{
    Hallgato hallgato = bekeresHallgato();
    double avg = zhAtlag(hallgato);
    std::cout << "ZH-k átlaga: " << avg;
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
