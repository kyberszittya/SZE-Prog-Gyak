// Gyak1_Szambekeres_Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int main()
{
    // Szám eltárolása egy változóban
    int x;
    // Jelezzük standard output-on mit szeretnénk a felhasználótól ("cout" ~ console output)
    std::cout << "Kérek egy számot: ";
    // Szám bekérése standard inputról ("cin" ~ console input)
    std::cin >> x;
    // Írjuk ki a kétszeresét a számnak
    std::cout << "A szám kétszerese: " << 2 * x << '\n';
    // '\n' ~ új sor (vö. ENTER)
}
