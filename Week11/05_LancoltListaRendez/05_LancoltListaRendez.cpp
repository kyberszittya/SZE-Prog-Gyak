// 05_LancoltListaRendez.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>

// Aktu�lis �v
#define EV 2022
// Sz�r�si �v
#define SZURES_EV 2022
// Szem�lyek sz�ma
#define N 8

struct Szemely {
    std::string monogram;
    int kor;                // �letkor
    int szulev;             // Sz�let�si �v
    double magassag;
    // Lancolt lista
    Szemely* next;
};

// Lista l�trehoz�sa
Szemely* listaLetrehoz()
{
    Szemely* list = nullptr;
    srand(time(NULL));                      // A CPU idej�t haszn�ljuk seed-nek, ebb�l gener�lunk pseudo random sz�mokat
    for (int i = 0; i < N; i++)
    {
        int kor = rand() % 40;              // MEGJEGYZ�S: �gy biztos�tjuk, hogy 0-39 �vesek legyenek az emberek (mod 40)
        // �j lista elem l�trehoz�sa
        Szemely* uj = new Szemely();
        // L�ncolt lista biztos�t�sa
        uj->next = list;
        // Adatok felt�lt�se
        uj->kor = kor;
        uj->szulev = EV - kor;
        // Monogram gener�l�sa
        uj->monogram = "X.X.";
        uj->monogram[0] = rand() % 26 + 'A';        // MEGJ.: 26 bet� van, a kezd��rt�k 'A'
        uj->monogram[2] = rand() % 26 + 'A';        // MEGJ.: ditto
        uj->magassag = double(170 + rand() % 30);   // MEGJ.: Az emberek magass�ga 140-200 cm k�z�tt v�ltozik (k�z�p�rt�k 170 cm)
        // L�ncolt lista friss�t�se
        list = uj;
    }
    // List�val val� visszat�r�s
    return list;
}

// Lista t�rl�se
Szemely* listaTorol(Szemely* lista)
{
    // Lista elej�n van-e t�rlend�
    while (lista != nullptr && lista->szulev >= SZURES_EV)
    {
        Szemely* torlendo = lista;
        lista = torlendo->next;
        delete torlendo;
    }
    // Ezt�n a t�bbi elemet t�r�lj�k
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
    // A marad�k lista visszat�r�se
    return lista;
}

// Lista ki�r�sa
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


// FONTOS! A rendez�shez besz�r�s a megfelel� helyre
Szemely* listaRendezettBeszuras(Szemely* elso, std::string monogram, int kor, double magassag) 
{
    Szemely* iter;
    Szemely* uj;
    Szemely* cursor = nullptr;  // Kurzor: ide kell besz�rni
    // Lista elem szervez�se
    uj = new Szemely;           // �j elem l�trehoz�sa besz�r�shoz
    // Adatok felt�lt�se
    uj->monogram = monogram;
    uj->kor = kor;
    uj->magassag = magassag;
    uj->szulev = EV - kor;
    // Rendez�s sz�let�si �vsz�m alapj�n
    // Sz�rjuk az elemet az elej�re, ha a lista �res, vagy ez a legjobb eredm�ny
    if (elso == nullptr || elso->kor < kor) // FONTOS! 
    {
        uj->next = elso;
        elso = uj;
    }
    // Besz�r�s m�shova a list�ban (iter�ci�)
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

// FONTOS! A lista rendez�se a besz�r�s seg�ts�g�vel
Szemely* listaRendez(Szemely* lista)
{
    Szemely* iter;
    Szemely* ures = nullptr;
    Szemely* torlendo;
    for (iter = lista; iter != nullptr;)
    {
        ures = listaRendezettBeszuras(ures, iter->monogram, iter->kor, iter->magassag);
        torlendo = iter;
        // Lista elem rendez�se
        iter = iter->next;
        delete torlendo;
    }
    return ures;
}




int main()
{
    Szemely* lis = listaLetrehoz();
    Szemely* nl = NULL;
    std::cout << "Szemelyek list�ban:\n";
    listaKiir(lis);
    lis = listaRendez(lis);
    std::cout << "Rendezve:\n";
    listaKiir(lis);
}
