// Gyak_4_2_MasodfokuEgyenlet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "ax^2+bx+c megoldasa" << '\n';
    std::cout << "Kerem 'a' értékét: ";
    std::cin >> a;
    std::cout << "Kerem 'b' értékét: ";
    std::cin >> b;
    std::cout << "Kerem 'c' értékét: ";
    std::cin >> c;
    // Egyenlet megoldása
    double D = b * b - 4 * (a * c);
    double x1, x2;
    if (D == 0)
    {        
        x1 = (-b) / (2 * a);
        std::cout << "Eredmény: " << x1 << '\n';
    }
    else if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "Eredmény: " << x1 << ' ' << x2 << '\n';
    }
    else
    {
        std::cout << "Nincs eredmény a valós számok halmazán\n";
    }

    return 0;
}
