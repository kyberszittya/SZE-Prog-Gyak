//
// Created by keret on 2026. 02. 08..
//

// ###	 Visszaszámláló (For ciklus)
//__Feladat__: Írj egy programot, amely 10-től 1-ig visszaszámol, majd kiírja: "Kilövés! 🚀".
//- __Fókusz__: for ciklus dekrementálással (i--).

#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Mission control HOUSTON\n";
    for (int i = 10; i > 0; i--) {
        std::cout << i << std::endl;
    }
    std::cout << "LIFT OFF! 🚀" << std::endl;

}