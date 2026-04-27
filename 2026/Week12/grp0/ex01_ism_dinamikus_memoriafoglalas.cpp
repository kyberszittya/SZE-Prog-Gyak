//
// Created by keret on 2026. 04. 20..
//
/*
Közös feladat

Hozzon létre egy egész számot tároló változót
    és hozzá egy azt címző mutatót!
Olvassa be a szám értékét a mutatón keresztül!
Írassa ki a kimenetre a szám értékét és
    memóriacímét az első változó segítségével!
Írassa ki ezeket a mutató változó segítségével is!
Végül írassa ki a mutató címét is!
*/

#include <iostream>

int main(int argc, char* argv[]) {
    int a = 242;
    int *pointer = &a;
    std::cout << "A szam erteke: " << a <<
        " cim: " << &a << ", mutato: " << pointer << std::endl;
    // Beolvassuk pointeren keresztül a szam erteket
    std::cout << "Kerem adja meg a szam erteket: ";
    std::cin >> *pointer;
    std::cout << "A szam uj erteke: " << a <<
        " cim: " << &a << ", mutato: " << pointer << std::endl;
}