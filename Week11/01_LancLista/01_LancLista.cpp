// 01_LancLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Lista
{
    int adat;
    Lista* kov;
};

// Lista l�trehoz�sa benne l�v� sz�mokkal
Lista* listaLetrehoz()
{
    // T�mb l�trehoz�sa a kezdeti �rt�keknek (-1 �rt�kkel a v�g�n)
    int szamok[] = { 556, 343, 168, 467, 4654, 23, -1 };
    // �res lista l�trehoz�sa
    Lista* elso = nullptr;
    // Minden elem besz�r�sa
    for (int i = 0; szamok[i] != -1; i++)
    {
        Lista* elem = new Lista;    // �j elem l�trehoz�sa
        elem->kov = elso;           // A k�vetkez� elem a kor�bbi els� elemre mutata
        elem->adat = szamok[i];     // Az �ppen iter�lt elem a t�mbben az �rt�ke az elemnek
        elso = elem;                // A lista els� eleme az �jonnan l�trehozott elem
    }
    return elso;                    // Visszat�r�nk a legut�bb l�trehozott listaelemmel, ami �pp a t�bbi listaelemre is mutat
}

void listaKiir(Lista* lista)
{
    Lista* iter;
    // FONTOS! Egy l�ncolt list�ban az elemeken hasonl� anal�gi�val lehets�ges v�gigiter�lni
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
