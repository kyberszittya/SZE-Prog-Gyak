// 01_EgyszeruFajl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 1. l�p�s: megnyitjuk a f�jlt
    // 1.1. l�p�s: sz�veges f�jl vagy bin�ris f�jlt olvasunk be
    // 2. l�p�s: �rni/olvasni szeretn�nk a f�jlt
    // 3. l�p�s: vagy kiolvassuk egy r�sz�t a f�jlnak, vagy adatokat �runk bele
    // 4. l�p�s: lez�rjuk a f�jlt (feloldjuk a lez�r�st, f�jl v�ge)
    ofstream f("hello.txt");
    if (f.is_open())
    {
        f << "Ezt a fajlt c++ nyelven irt programmal hoztam l�tre!" << '\n';
        f << "Juppi!" << '\n';
        f << "Hello Vil�g!" << '\n';
        for (int i = 0; i < 10; i++)
        {
            f << i << '\n';
        }
        f.close();
    }
}

