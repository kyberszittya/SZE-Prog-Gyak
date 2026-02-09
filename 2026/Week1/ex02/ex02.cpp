//
// Created by keret on 2026. 02. 08..
//

// ### Területszámoló (Műveleti sorrend)
//__Feladat__: Kérd be egy téglalap két oldalát (float). Számold ki és írd ki a területét és kerületét.
//- __Fókusz__: Alapvető aritmetika, változók deklarálása.

#include <iostream>

int main (int argc, char **argv) {
    double a, b;
    // Rajzoljunk egy téglalapot
    std::cout << "              a\n";
    std::cout << "----------------------------\n";
    std::cout << "|                          |\n";
    std::cout << "|                          | b\n";
    std::cout << "|                          |\n";
    std::cout << "----------------------------\n";
    std::cout << "Kérem az első oldal hosszát (a): ";
    std::cin >> a;
    std::cout << "Kérem a második oldal hosszát (b): ";
    std::cin >> b;
    std::cout << "A téglalap kerülete: " << 2 * (a + b) << std::endl;
    std::cout << "A téglalap területe: " << a * b << std::endl;
}