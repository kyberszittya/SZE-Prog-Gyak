// KetszamMaximuma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ketszamMaximuma(int x, int y)
{
    if (x > y) return x;
    else return y;
}

int main()
{
    int maxActual;
    cout << "Kerem az aktualis maximumot: ";
    cin >> maxActual;

    for (int i = 0; i <= 3; i++)
    {
        int maxNew;
        cout << "Kerek egy uj szamot: ";
        cin >> maxNew;
        if (ketszamMaximuma(maxNew, maxActual) == maxActual)
        {
            i = 0;
        }
        /*
        else
        {
            maxActual = maxNew;
        }
        */
    }
    return 0;
}
