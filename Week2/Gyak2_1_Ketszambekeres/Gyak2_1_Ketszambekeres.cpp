// Gyak2_1_Ketszambekeres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Két szám bekérése
    int x, y;
    // Elsõ szám bekérése
    cout << "Elsõ szám: ";
    cin >> x;
    // Második szám bekérése
    cout << "Második szám: ";
    cin >> y;
    if (x > y)
    {
        std::cout << "Elsõ bekért szám nagyobb\n";
    }
    else if (x < y)
    {
        std::cout << "Második bekért szám nagyobb\n";
    }
    else 
    {
        // Az eseteink elfogytak, tehát a két szám egyenlõ
        std::cout << "A kettõ bekért szám egyenlõ\n";
    }

    return 0;
}

