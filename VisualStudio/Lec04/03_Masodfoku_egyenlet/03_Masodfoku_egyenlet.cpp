// 03_Masodfoku_egyenlet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // M�sodfok� egyenlet
    double a, b, c;
    std::cout << "Masodfoku egyenlet kovetkezik\n";
    std::cout << "a: "; std::cin >> a;
    std::cout << "b: "; std::cin >> b;
    std::cout << "c: "; std::cin >> c;
    // Diszkrimin�ns kisz�mol�sa
    double D = b * b - 4 * a * c;
    // Megold�sok sz�m�t�sa
    double x1, x2;
    if (D > 0) {
        std::cout << "Ket megoldas: \n";
        double x1, x2;
        x1 = (-b + std::sqrt(D)) / (2 * a);
        x2 = (-b - std::sqrt(D)) / (2 * a);
        std::cout << "x1: " << x1 << '\n';
        std::cout << "x2: " << x2 << '\n';
    }
    else if (D == 0) {
        std::cout << "Egy megoldas: ";
        x1 = -b / (2 * a);
        std::cout << x1 << '\n';
    }
    else {
        std::cout << "Nincs valos megoldas\n";
    }
}
