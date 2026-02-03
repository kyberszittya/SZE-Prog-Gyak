// 04_abszertek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Kérjünk be egy számot és írjuk ki az 
   abszolút értékét 
   (Többféle kiíratás megmutatása, 
   pl. értékadással, anélkül, -x, -1*x)
Ha a szám páros, írjuk ki a felét
Nézzük meg, páratlan szám esetén mi lesz a 2-vel való osztás eredménye
*/

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Kerek egy szamot!\n";
    int x;
    std::cin >> x;
    int absz = std::fabs(x);
    std::cout << "Abszolutertek std: " << absz << '\n';
    int absz_rendes = x;
    if (x < 0) {
        absz_rendes = -1 * x;
    }
    std::cout << "Abszolut ertek: " << absz_rendes << '\n';
    if (absz_rendes % 2 == 0) {
        std::cout << "A szam paros, a fele: " << 
            absz_rendes / 2 << '\n';
    }
    else {
        std::cout << absz_rendes / 2 << '\n';
    }
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
