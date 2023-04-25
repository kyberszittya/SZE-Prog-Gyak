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
    // Lefoglaljuk a t�mb�t
    char* tabla[ABCMERET];
    for (int i = 0; i < ABCMERET; i++)
        tabla[i] = new char[kodszo.length()];
    // Majd a k�dol�st elv�gezz�k
    for (int oszlop = 0; oszlop < kodszo.length(); ++oszlop) {
        int eltolas = kodszo[oszlop] - 'A';
        for (int sor = 0; sor < ABCMERET; ++sor) {
            // Amennyiben az eltol�s kiesik az ABC tartom�ny�n akkor shiftel�nk
            while (eltolas < 0)
                eltolas += ABCMERET;
            // Ugyan�gy visszafele is
            while (eltolas >= ABCMERET)
                eltolas -= ABCMERET;
            tabla[sor][oszlop] = 'A' + eltolas;
            eltolas++;
        }
    }
    // K�d kiirat�sa
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
    // �jabb iter�ci�
    do {
        getline(cin, szoveg);
        int kodindex = 0;
        for (int i = 0; i < szoveg.length(); ++i) {
            // Nem kell toupper, a kisbet�ket �s nagybet�ket ellen�rizz�k
            if (('A' <= szoveg[i] && szoveg[i] <= 'Z') ||
                ('a' <= szoveg[i] && szoveg[i] <= 'z')) { // csak a betuket kodoljuk
                szoveg[i] = toupper(szoveg[i]);
                szoveg[i] = tabla[szoveg[i] - 'A'][kodindex];
                ++kodindex;
                // Shiftel�s elv�gz�se
                if (kodindex >= kodszo.length())
                    kodindex -= kodszo.length();
            }
        }
        if (szoveg.length() > 0)
            cout << szoveg << endl;
        else cout << "Kilepes";
    } while (szoveg.length() > 0); // Mindaddig megy�nk, ameddig �res sz�veget nem kapunk
    // Ciklus v�ge

    // Felszabad�tjuk a t�bl�zatot
    for (int i = 0; i < ABCMERET; i++)
        delete[] tabla[i];
    return 0;
}