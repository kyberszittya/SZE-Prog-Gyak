//
// Created by keret on 2026. 02. 09..
//
//### Faktoriális Számoló (Iteráció)
//__Feladat__: Írj egy rekurzív függvényt, amely kiszámolja egy adott szám faktoriálisát (n!). Kérj be egy számot a felhasználótól, és írd ki a faktoriálisát.
//- __Fókusz__: Rekurzív függvények, alapvető matematikai műveletek.

#include <iostream>

int main(int argc, char **argv) {
    int number;
    std::cout << "Faktoriális számoló\n";
    std::cout << "Kérek egy számot: ";
    std::cin >> number;
    int factorial = 1;
    for (int i = 1; i < number; i++) {
        factorial *= i;
    }
    std::cout << "A faktoriális értéke: " << factorial << std::endl;
    return 0;
}