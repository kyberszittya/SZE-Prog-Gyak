// 01_LancLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Lista
{
    int adat;
    Lista* kov;
};

// Lista létrehozása benne lévõ számokkal
Lista* listaLetrehoz()
{
    // Tömb létrehozása a kezdeti értékeknek (-1 értékkel a végén)
    int szamok[] = { 556, 343, 168, 467, 4654, 23, -1 };
    // Üres lista létrehozása
    Lista* elso = nullptr;
    // Minden elem beszúrása
    for (int i = 0; szamok[i] != -1; i++)
    {
        Lista* elem = new Lista;    // Új elem létrehozása
        elem->kov = elso;           // A következõ elem a korábbi elsõ elemre mutata
        elem->adat = szamok[i];     // Az éppen iterált elem a tömbben az értéke az elemnek
        elso = elem;                // A lista elsõ eleme az újonnan létrehozott elem
    }
    return elso;                    // Visszatérünk a legutóbb létrehozott listaelemmel, ami épp a többi listaelemre is mutat
}

void listaKiir(Lista* lista)
{
    Lista* iter;
    // FONTOS! Egy láncolt listában az elemeken hasonló analógiával lehetséges végigiterálni
    for (iter = lista; iter != nullptr; iter = iter->kov)
    {
        std::cout << "[" << iter->adat << "] ";
    }
    std::cout << '\n';
}

int main()
{
    Lista* list = listaLetrehoz();
    std::cout << "A lista: \n";
    listaKiir(list);
    return 0;
}
