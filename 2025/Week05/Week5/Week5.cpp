// Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Összeadás függvénnyel
// Írjon függvényt, amely két számot vár paraméterül 
//  és eredményül visszaadja a két szám összegét!
// Írjon programot, amely két számot olvas be mindaddig, 
//  míg azok összege nem osztható 7 - tel!
// A feladat megoldásához használja fel az elõzõleg megírt függvény!
// (Felhasznált forrás : PE - MIK C Programozás I feladatgyûjtemény)
// Megoldás.

int osszead(int a, int b)
{
    return a + b;
}


int main()
{
    while (true) {
        int a, b;
        std::cout << "Kerem adja meg az 1. szamot: ";
        std::cin >> a;
        std::cout << "Kerem adja meg a 2. szamot: ";
        std::cin >> b;
        int x = osszead(a, b);
        std::cout << "A ket szam osszege: " << x << std::endl;
        if (x % 7 == 0) {
			break;
		}
    }
    std::cout << "Ja mata!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
