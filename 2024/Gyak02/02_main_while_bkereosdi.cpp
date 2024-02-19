//
// Created by keret on 2024. 02. 14..
//

#include <iostream>

// Kérjünk be számokat,
// amíg páratlan számot nem kapunk,
// és a párosoknak mindig írjuk ki a felét

int main(int argc, char** argv) {
    int szam = 0;
    do {
        std::cout << "Kerek egy szamot\n";
        std::cin >> szam;
        if (szam % 2 == 0){
            std::cout << "Paros szam fele: " << szam/2 << '\n';
        }
    }while(szam % 2 == 0);
    std::cout << "Paratlan szam, GOODBYE\n";
    return 0;
}