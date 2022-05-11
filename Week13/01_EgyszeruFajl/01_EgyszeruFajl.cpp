// 01_EgyszeruFajl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 1. lépés: megnyitjuk a fájlt
    // 1.1. lépés: szöveges fájl vagy bináris fájlt olvasunk be
    // 2. lépés: írni/olvasni szeretnénk a fájlt
    // 3. lépés: vagy kiolvassuk egy részét a fájlnak, vagy adatokat írunk bele
    // 4. lépés: lezárjuk a fájlt (feloldjuk a lezárást, fájl vége)
    ofstream f("hello.txt");
    if (f.is_open())
    {
        f << "Ezt a fajlt c++ nyelven irt programmal hoztam létre!" << '\n';
        f << "Juppi!" << '\n';
        f << "Hello Világ!" << '\n';
        for (int i = 0; i < 10; i++)
        {
            f << i << '\n';
        }
        f.close();
    }
}

