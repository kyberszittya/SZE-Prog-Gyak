// Ex_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Kérjünk be egy számot és írjuk ki az abszolút értékét (Többféle kiíratás megmutatása, pl. értékadással, anélkül, -x, -1*x)
Ha a szám páros, írjuk ki a felét
Nézzük meg, páratlan szám esetén mi lesz a 2-vel való osztás eredménye
Videó
*/

int main()
{
    std::cout << "Kerek egy szamot:\n";
    int number;
    std::cin >> number;
    // Az abszolút érték kiszámítása
    int abs_number = number;
    if (number < 0) {
        abs_number = -number;
        std::cout << "Az abszolut ertek: " << abs_number << std::endl;
    }
    // Kiiratas
    std::cout << "Az abszolut ertek: " << abs_number << std::endl;
    // Parossag ellenõrzése
    if (number % 2 == 0) {
        std::cout << "Szam fele: " << number / 2 << std::endl;
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
