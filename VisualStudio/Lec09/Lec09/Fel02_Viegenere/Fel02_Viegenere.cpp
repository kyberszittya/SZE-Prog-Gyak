// Fel02_Viegenere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define ABCMERET 26

int main(int argc, char* argv[])
{
    cout << "Kerem a kodszot!" << endl;
    string kodszo;
    cin >> kodszo;
    for (int i = 0; i < kodszo.length(); i++)
        kodszo[i] = toupper(kodszo[i]);
    // Lefoglaljuk a tömböt
    char* tabla[ABCMERET];
    for (int i = 0; i < ABCMERET; i++)
        tabla[i] = new char[kodszo.length()];
    // Majd a kódolást elvégezzük
    for (int oszlop = 0; oszlop < kodszo.length(); ++oszlop) {
        int eltolas = kodszo[oszlop] - 'A';
        for (int sor = 0; sor < ABCMERET; ++sor) {
            // Amennyiben az eltolás kiesik az ABC tartományán akkor shiftelünk
            while (eltolas < 0)
                eltolas += ABCMERET;
            // Ugyanígy visszafele is
            while (eltolas >= ABCMERET)
                eltolas -= ABCMERET;
            tabla[sor][oszlop] = 'A' + eltolas;
            eltolas++;
        }
    }
    // Kód kiiratása
    for (int sor = 0; sor < ABCMERET; ++sor) {
        cout.put('A' + sor);
        cout << '|';
        for (int oszlop = 0; oszlop < kodszo.length(); ++oszlop) {
            cout << tabla[sor][oszlop] << " ";
        }
        cout << endl;
    }

    cin.ignore();
    cout << "Kerem a kodolando szoveget!\n";
    string szoveg;
    // Újabb iteráció
    do {
        getline(cin, szoveg);
        int kodindex = 0;
        for (int i = 0; i < szoveg.length(); ++i) {
            // Nem kell toupper, a kisbetûket és nagybetûket ellenõrizzük
            if (('A' <= szoveg[i] && szoveg[i] <= 'Z') ||
                ('a' <= szoveg[i] && szoveg[i] <= 'z')) { // csak a betuket kodoljuk
                szoveg[i] = toupper(szoveg[i]);
                szoveg[i] = tabla[szoveg[i] - 'A'][kodindex];
                ++kodindex;
                // Shiftelés elvégzése
                if (kodindex >= kodszo.length())
                    kodindex -= kodszo.length();
            }
        }
        if (szoveg.length() > 0)
            cout << szoveg << endl;
        else cout << "Kilepes";
    } while (szoveg.length() > 0); // Mindaddig megyünk, ameddig üres szöveget nem kapunk
    // Ciklus vége

    // Felszabadítjuk a táblázatot
    for (int i = 0; i < ABCMERET; i++)
        delete[] tabla[i];
    return 0;
}