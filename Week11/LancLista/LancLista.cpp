// LancLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

struct Lista {
	int adat;    // Az adat amit tárolunk
	Lista* kov;  // A következõ elem (egyetlen darab) a memóriában lefoglalva
};

Lista* letrehoz()
{
	int szamok[] = { 42, 34, 67, 89, 12, -678, 12, -1 };
	Lista* eleje = nullptr; // Õ sehova sem mutat a memóriában

	for (int i = 0; szamok[i] != -1; ++i)
	{
		Lista* uj = new Lista;
		// Láncolt lista black magic kezdete
		uj->kov = eleje;
		uj->adat = szamok[i];  //  Ezzel akarjuk feltölteni a láncolt listánkat
		eleje = uj;			   // Elsõ elem lesz az új elem
	}

	return eleje;
}

// Új elem beszúrása a lista elejére
Lista* beszurElejere(Lista* lista, int adat)
{
	Lista* uj = new Lista;
	uj->kov = lista;
	uj->adat = adat;
	lista = uj;			// A lista elsõ eleme innentõl a most létrehozott lesz
	return lista;
}

// Új elem beszúrása a lista végére
Lista* beszurVegere(Lista* lista, int adat)
{
	Lista* uj;
	// Amit eddig láthattunk
	uj = new Lista;
	uj->adat = adat;
	uj->kov = nullptr;
	if (lista == nullptr) return uj;
	// A listaelem végére rendezése	
	Lista* elozovege;
	for (elozovege = lista; elozovege->kov != nullptr; elozovege = elozovege->kov) // Ot kell mozgatni, megváltoztatni az értékeit
	{}
	// 
	elozovege->kov = uj;
	return lista;
}

// Felszabaditás
// 
// HALÁLFEJES KÓDRÉSZLET
//
void felszabadit(Lista* lista)
{
	while (lista != nullptr)
	{
		Lista* kov = lista->kov;
		delete lista;
		lista = kov;
	}
}


// Kiiratása a láncolt lsita
void kiir(Lista* lista)
{
	for (Lista* iter = lista; iter != nullptr; iter = iter->kov)
	{
		cout << "(" << iter->adat << ")\n";
	}
	cout << '\n';
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Lista* lis = letrehoz();
	cout << "Lista elemei:\n";
	kiir(lis);
	// Most jön a java
	cout << "A lista végére beszúrás\n";
	
	lis = beszurVegere(lis, 9001);
	kiir(lis);
	// Elejére beszúr
	cout << "A lista elejére beszúrtunk\n";
	lis = beszurElejere(lis, 1);
	kiir(lis);
	// Felszabaditas
	felszabadit(lis);
	return 0;
}