// Gyak2_2_Ugyanazaszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // El kell t�rolni az el�z� sz�mot is!
    int x0;
    cout << "K�rek egy sz�mot: ";
    cin >> x0;
    // Ism�telj�nk, ameddig nem kapjuk ugyanazt a sz�mot
    do
    {
        int x;
        cout << "K�rek egy sz�mot: ";
        cin >> x;
        if (x == x0)
        {
            // A break seg�ts�g�vel kil�phet�nk az adott utas�t�sblokkb�l, teh�t jelen esetben a ciklusb�l!
            break;
        }
        x0 = x;
    } while (true);
    cout << "Egym�s ut�n k�t ugyanolyan sz�mot kaptam, kil�p�s!\n";

    return 0;
}
