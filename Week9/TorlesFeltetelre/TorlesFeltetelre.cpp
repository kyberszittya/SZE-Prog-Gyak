// TorlesFeltetelre.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
#ifndef _WIN32
#include <cstdlib>
#endif
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#define EV 2022

using namespace std;

struct Szemely
{
    string monogram;
    int kor;
    int szev;
    double magassag;
    // Lancolt lista kov. elem
    Szemely* kov;
};

Szemely* listaLetrehoz()
{
    Szemely* eleje = nullptr;
    //srand(time(NULL));
    srand(0);
    for (int i = 0; i < 20; i++)
    {
        int kor = rand() % 35;
        Szemely* uj = new Szemely;
        uj->kov = eleje;
        uj->kor = kor;
        uj->szev = EV - kor;
        uj->monogram = "X.X.";
        uj->monogram[0] = rand() % 26 + 'A';
        uj->monogram[2] = rand() % 26 + 'A';
        uj->magassag = double(160 + rand() % 60) / 10;
        eleje = uj;
    }
    return eleje;
}

Szemely* listaTorol(Szemely* lista)
{
    while (lista != nullptr && lista->szev >= 2000)
    {
        Szemely* torlendo = lista;
        lista = torlendo->kov;
        delete torlendo;        
    }
    //
    if (lista != nullptr)
    {
        Szemely* lemarad = lista;
        Szemely* iter = lista->kov;
        while (iter != nullptr)
        {
            Szemely* kov = iter->kov;
            if (iter->szev >= 2000)
            {
                lemarad->kov = kov;
                delete iter; /// Itt is torolni kell
            }
            else
            {
                lemarad = iter;
            }
            iter = kov;
        }
    }
    return lista;
}

// Kiiratása a láncolt lsita
void kiir(Szemely* lista)
{
    for (Szemely* iter = lista; iter != nullptr; iter = iter->kov)
    {
        cout << "(" << iter->monogram << ", " << iter->szev << ", "  << iter->magassag << ")\n";
    }
    cout << '\n';
}

// Felszabaditás
// 
// HALÁLFEJES KÓDRÉSZLET
//
void felszabadit(Szemely* lista)
{
    while (lista != nullptr)
    {
        Szemely* kov = lista->kov;
        delete lista;
        lista = kov;
    }
}

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Szemely* lis = listaLetrehoz();
    cout << "Szemelyek:\n";
    kiir(lis);
    lis = listaTorol(lis);
    cout << "Szemelyek a szures utan:\n";
    kiir(lis);
    // Lista felszabaditasa
    felszabadit(lis);
    return 0;
}
