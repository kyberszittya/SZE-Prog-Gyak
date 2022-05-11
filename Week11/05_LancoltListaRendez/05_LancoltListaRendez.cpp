// 05_LancoltListaRendez.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>

// Aktuális év
#define EV 2022
// Szûrési év
#define SZURES_EV 2022
// Személyek száma
#define N 8

struct Szemely {
    std::string monogram;
    int kor;                // Életkor
    int szulev;             // Születési év
    double magassag;
    // Lancolt lista
    Szemely* next;
};

// Lista létrehozása
Szemely* listaLetrehoz()
{
    Szemely* list = nullptr;
    srand(time(NULL));                      // A CPU idejét használjuk seed-nek, ebbõl generálunk pseudo random számokat
    for (int i = 0; i < N; i++)
    {
        int kor = rand() % 40;              // MEGJEGYZÉS: így biztosítjuk, hogy 0-39 évesek legyenek az emberek (mod 40)
        // Új lista elem létrehozása
        Szemely* uj = new Szemely();
        // Láncolt lista biztosítása
        uj->next = list;
        // Adatok feltöltése
        uj->kor = kor;
        uj->szulev = EV - kor;
        // Monogram generálása
        uj->monogram = "X.X.";
        uj->monogram[0] = rand() % 26 + 'A';        // MEGJ.: 26 betû van, a kezdõérték 'A'
        uj->monogram[2] = rand() % 26 + 'A';        // MEGJ.: ditto
        uj->magassag = double(170 + rand() % 30);   // MEGJ.: Az emberek magassága 140-200 cm között változik (középérték 170 cm)
        // Láncolt lista frissítése
        list = uj;
    }
    // Listával való visszatérés
    return list;
}

// Lista törlése
Szemely* listaTorol(Szemely* lista)
{
    // Lista elején van-e törlendõ
    while (lista != nullptr && lista->szulev >= SZURES_EV)
    {
        Szemely* torlendo = lista;
        lista = torlendo->next;
        delete torlendo;
    }
    // Eztán a többi elemet töröljük
    if (lista != nullptr)
    {
        Szemely* lemarado = lista;
        Szemely* iter = lista->next;
        while (iter != nullptr)
        {
            Szemely* kovetkezo = iter->next;
            if (iter->szulev >= SZURES_EV)
            {
                lemarado->next = kovetkezo;
                delete iter;
            }
            else
            {
                lemarado = iter;
            }
            iter = kovetkezo;
        }
    }
    // A maradék lista visszatérése
    return lista;
}

// Lista kiírása
void listaKiir(Szemely* lista)
{
    Szemely* iter;
    for (iter = lista; iter != nullptr; iter = iter->next)
    {
        std::cout << " " << iter->monogram << " szuletett: " << iter->szulev << ", "
            << iter->magassag << " cm magas, " << iter->kor << " eves" << '\n';
    }
    std::cout << '\n';
}


// FONTOS! A rendezéshez beszúrás a megfelelõ helyre
Szemely* listaRendezettBeszuras(Szemely* elso, std::string monogram, int kor, double magassag) 
{
    Szemely* iter;
    Szemely* uj;
    Szemely* cursor = nullptr;  // Kurzor: ide kell beszúrni
    // Lista elem szervezése
    uj = new Szemely;           // Új elem létrehozása beszúráshoz
    // Adatok feltöltése
    uj->monogram = monogram;
    uj->kor = kor;
    uj->magassag = magassag;
    uj->szulev = EV - kor;
    // Rendezés születési évszám alapján
    // Szúrjuk az elemet az elejére, ha a lista üres, vagy ez a legjobb eredmény
    if (elso == nullptr || elso->kor < kor) // FONTOS! 
    {
        uj->next = elso;
        elso = uj;
    }
    // Beszúrás máshova a listában (iteráció)
    else 
    {
        for (iter = elso; iter != nullptr && iter->kor >= kor; iter = iter->next)
        {
            cursor = iter;
        }
        uj->next = iter;
        cursor->next = uj;
    }
    return elso;
}

// FONTOS! A lista rendezése a beszúrás segítségével
Szemely* listaRendez(Szemely* lista)
{
    Szemely* iter;
    Szemely* ures = nullptr;
    Szemely* torlendo;
    for (iter = lista; iter != nullptr;)
    {
        ures = listaRendezettBeszuras(ures, iter->monogram, iter->kor, iter->magassag);
        torlendo = iter;
        // Lista elem rendezése
        iter = iter->next;
        delete torlendo;
    }
    return ures;
}




int main()
{
    Szemely* lis = listaLetrehoz();
    Szemely* nl = NULL;
    std::cout << "Szemelyek listában:\n";
    listaKiir(lis);
    lis = listaRendez(lis);
    std::cout << "Rendezve:\n";
    listaKiir(lis);
}
