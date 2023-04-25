// 05_Intervallumosdi_din.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define START 1000
#define END 3000

int main()
{
    int db[END - START + 1] = { 0 };

    while (true) {
        std::cout << "Kerek egy szamot [" << START << "," << END << "]: ";
        int szam;
        std::cin >> szam;
        if (szam >= START && szam <= END) db[szam - START] += 1;
        else {
            std::cout << "Hibas szam";
            break; // Kilepes a ciklusbol
        }
        if (szam == 0) break; // Kilepes a ciklusbol
    }
    for (int i = 0; i <= END - START; i++) {
        if (db[i] > 0) std::cout << i + START << ": " << db[i] << " db\n";
    }
    for (int i = START; i <= END; i++) {
        if (db[i - START] > 0) std::cout << i << ": " << db[i - START] << " db\n";
    }
    return 0;
}