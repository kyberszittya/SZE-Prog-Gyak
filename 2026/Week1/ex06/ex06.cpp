//
// Created by keret on 2026. 02. 08..
//
//
//### Szorzótábla (Ciklusok)
//__Feladat__: Kérj be egy számot, és írd ki a hozzá tartozó szorzótáblát 1-től 10-ig (pl. 5 * 1 = 5, 5 * 2 = 10...).
//- __Fókusz__: Ciklusváltozó használata a műveletekben.

#include <iostream>

int main(int argc, char **argv) {
    int number;
    std::cout << "Kérek egy számot: ";
    std::cin >> number;
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " * " << i << "\t=\t" << (number * i) << std::endl;
    }
    return 0;

}