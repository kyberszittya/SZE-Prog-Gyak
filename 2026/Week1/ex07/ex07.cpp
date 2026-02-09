//
// Created by keret on 2026. 02. 09..
//
// ### A "Stop" Világ (While ciklus)
//__Feladat__: Kérj be szavakat a felhasználótól folyamatosan, amíg azt nem írja, hogy "stop". Ekkor a program köszönjön el és álljon le.
//- __Fókusz__: while ciklus, string összehasonlítás.

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::string word;
    do {
        std::cout << "Kérek egy szót: ";
        std::cin >> word;

    } while (word != "stop");
    std::cout << "Minden jót!\n";
}