// 04_LancoltListaMegforditas.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

// Lista megford�t�sa
Szemely* listaMegfordit(Szemely* lista)
{
    Szemely* eredeti = lista;
    Szemely* megforditott = nullptr;

    while (eredeti != nullptr)
    {
        Szemely* atrakott = eredeti;
        Szemely* next = eredeti->next;
        // Elejere sz�rni
        atrakott->next = megforditott;
        megforditott = atrakott;
        eredeti = next;
    }
    return megforditott;
}

int main()
{
    Szemely* lis = listaLetrehoz();
    Szemely* nl = NULL;
    std::cout << "Szemelyek:\n";
    listaKiir(lis);
    lis = listaMegfordit(lis);
    std::cout << "Megforditva:\n";
    listaKiir(lis);
}

