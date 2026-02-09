//
// Created by keret on 2026. 02. 08..
//

// ### A Páros-Páratlan Detektív (Operátorok)
//__Feladat__: Kérj be egy egész számot. A modulo (%) operátor segítségével döntsd el, hogy a szám páros-e vagy páratlan.
//- __Fókusz__: % operátor használata, logikai vizsgálat.

#include <iostream>

int main(int argc, char **argv) {
    int number;
    std::cout << "Kérek egy egész számot: ";
    std::cin >> number;
    std::cout << "A szám ";
    if (number % 2 == 0) {
        std::cout << " páros\n";
    } else {
        std::cout << " páratlan\n";
    }
    return 0;
}