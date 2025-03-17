// 05_rendszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
/*
* Rendszám ellenõrzõ

Írjon C++ programot, amely egy string validációját végzi el. 
A formátum egyezzen meg a leggyakoribb magyar rendszámtábla formátumával. 
Eszerint 7 karakter hosszúságú legyen, ennek elején három (nagy vagy kis) 
    betû után egy kötõjel és végül három szám következzen!
A program `k` betûre lépjen ki!
Videó
Plusz feladat: Fejlessze tovább az elõzõ feladatot, úgy, 
    hogy a 3 betû, kötõjel, 3 szám mellett a 3 betû, 
    három szám és a 3 betû, space, 3 szám formátumot is fogadja el. 
    Pl. `SZE-001`, `SZE 001`, `SZE001`
*/

int main()
{
    
    do {
        std::string rendszam;
        std::cout << "Add meg a rendszamot: ";
        std::cin >> rendszam;
        if (rendszam.compare("k") == 0) {
            break;
        }
        if (rendszam.length() != 6 && rendszam.length() != 7) {
			std::cout << "Hibas rendszam!" << std::endl;
			continue;
		}
        for (int i = 0; i < 3; i++) {
            if (!isalpha(rendszam[i])) {
				std::cout << "Hibas rendszam!" << std::endl;
                continue;
			}
        }
        if (rendszam.length() == 7) {
            if (rendszam[3] != '-' && rendszam[3] != ' ') {
                std::cout << "Hibas rendszam!" << std::endl;
                continue;
            }
            for (int i = 4; i < 7; i++) {
                if (!isdigit(rendszam[i])) {
                    std::cout << "Hibas rendszam!" << std::endl;
                }
            }
        }
        else {
            for (int i = 3; i < 6; i++) {
                if (!isdigit(rendszam[i])) {
                    std::cout << "Hibas rendszam!" << std::endl;
                }
            }
        }
    } while (true);
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
