//
// Created by keret on 2026. 02. 09..
//
// ### Számtani Sorozat Összege (Képlettel)
//__Feladat__: Kérj be egy N számot. Számold ki az összes egész szám összegét 1-től N-ig (1+2+3...+N).
//- __Fókusz__: Akkumulátor változó használata (sum += i).

#include <iostream>

int main(int argc, char **argv) {
    int number;
    int sum = 0;
    std::cout << "Kérek egy számot: ";
    std::cin >> number;
    sum = (number * (number + 1)) / 2;
    std::cout << "A számok összege: " << sum << std::endl;
    return 0;
}

