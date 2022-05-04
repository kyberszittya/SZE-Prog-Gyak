// Gyak2_2_Ugyanazaszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // El kell tárolni az elõzõ számot is!
    int x0;
    cout << "Kérek egy számot: ";
    cin >> x0;
    // Ismételjünk, ameddig nem kapjuk ugyanazt a számot
    do
    {
        int x;
        cout << "Kérek egy számot: ";
        cin >> x;
        if (x == x0)
        {
            // A break segítségével kiléphetünk az adott utasításblokkból, tehát jelen esetben a ciklusból!
            break;
        }
        x0 = x;
    } while (true);
    cout << "Egymás után két ugyanolyan számot kaptam, kilépés!\n";

    return 0;
}
