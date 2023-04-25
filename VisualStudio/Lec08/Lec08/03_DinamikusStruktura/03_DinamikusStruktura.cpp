// 03_DinamikusStruktura.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Coord2D {
    double x, y, z;
};

void koordBeolvasas(Coord2D* coord) {
    std::cout << "Koordinata uj ertekei:\n";
    std::cout << "x: ";  std::cin >> coord->x;
    std::cout << "y: ";  std::cin >> (*coord).y;  // Ez egyen�rt�k� a ny�l oper�torral
    std::cout << "z: "; std::cin >> coord->z;
}

int main()
{
    // Lefoglaljuk a koordin�ta mem�riater�let�t
    Coord2D* a = new Coord2D;
    if (a == nullptr) {
        std::cout << "Sikertelen memoriafoglalas!\n";
        return -1;
    }
    koordBeolvasas(a);
    std::cout << "A beolvasott kooridnata: " << a->x << "," << a->y << "," << a->z << '\n';
    // Ne felejts�k el felszabad�tani a koordin�ta mem�riater�let�t
    delete a;
    return 0;
}
