// 05_BinarisfajlBeolvasasa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 0. fájl megnyitása
    ifstream erdo("erdo.jpg", ios::binary);
    if (erdo.is_open())
    {
        // 1. fájl méretének meghatározása
        erdo.seekg(0, ios_base::end);
        streampos vege = erdo.tellg();
        char* tomb = new char[vege];
        // 2. fájl tartalmának átmásolása a fájlba
        erdo.seekg(0, ios_base::beg);
        erdo.read(tomb, vege);
        // 3. Kiiratas
        for (char* n = tomb; n < tomb+vege; n++)
        {
            cout << *n;
        }
        cout << '\n';
        // 4. lépés: felszabadítjuk az erõforrásokat
        delete[] tomb;
        erdo.close();
    }
    else
    {
        // Standard Error output
        cerr << "Nem sikerult megnyitni az erdot";
    }
}
