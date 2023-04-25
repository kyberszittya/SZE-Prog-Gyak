// Fel04_Haromszoges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Coord {
    double x, y, z;
};

struct Triangle {
    Coord vertex[3];
};

void beolvas(Triangle* bemenet) {
    std::cout << "Haromszog bemenet: \n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Coord " << i; std::cout << "x: ";  std::cin >> bemenet->vertex[i].x;
        std::cout << "y: "; std::cin >> bemenet->vertex[i].y;
        std::cout << "z: "; std::cin >> bemenet->vertex[i].z;
    }
}

void printTri(Triangle* haromszog) {
    std::cout << "Haromszog adatai: \n";
    for (int i = 0; i < 3; i++) {
        std::cout << "(" << haromszog->vertex[i].x << "," << haromszog->vertex[i].y 
            << "," << haromszog->vertex[i].z << ")\n";
    }
}

int main()
{
    // Haromszog beolvasasa
    Triangle tri;
    beolvas(&tri);
    printTri(&tri);
}
