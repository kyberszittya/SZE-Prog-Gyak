// LancLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

struct Lista {
	int adat;    // Az adat amit t�rolunk
	Lista* kov;  // A k�vetkez� elem (egyetlen darab) a mem�ri�ban lefoglalva
};

Lista* letrehoz()
{
	int szamok[] = { 42, 34, 67, 89, 12, -678, 12, -1 };
	Lista* eleje = nullptr; // � sehova sem mutat a mem�ri�ban

	for (int i = 0; szamok[i] != -1; ++i)
	{
		Lista* uj = new Lista;
		// L�ncolt lista black magic kezdete
		uj->kov = eleje;
		uj->adat = szamok[i];  //  Ezzel akarjuk felt�lteni a l�ncolt list�nkat
		eleje = uj;			   // Els� elem lesz az �j elem
	}

	return eleje;
}

// �j elem besz�r�sa a lista elej�re
Lista* beszurElejere(Lista* lista, int adat)
{
	Lista* uj = new Lista;
	uj->kov = lista;
	uj->adat = adat;
	lista = uj;			// A lista els� eleme innent�l a most l�trehozott lesz
	return lista;
}

// �j elem besz�r�sa a lista v�g�re
Lista* beszurVegere(Lista* lista, int adat)
{
	Lista* uj;
	// Amit eddig l�thattunk
	uj = new Lista;
	uj->adat = adat;
	uj->kov = nullptr;
	if (lista == nullptr) return uj;
	// A listaelem v�g�re rendez�se	
	Lista* elozovege;
	for (elozovege = lista; elozovege->kov != nullptr; elozovege = elozovege->kov) // Ot kell mozgatni, megv�ltoztatni az �rt�keit
	{}
	// 
	elozovege->kov = uj;
	return lista;
}

// Felszabadit�s
// 
// HAL�LFEJES K�DR�SZLET
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


// Kiirat�sa a l�ncolt lsita
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
	// Most j�n a java
	cout << "A lista v�g�re besz�r�s\n";
	
	lis = beszurVegere(lis, 9001);
	kiir(lis);
	// Elej�re besz�r
	cout << "A lista elej�re besz�rtunk\n";
	lis = beszurElejere(lis, 1);
	kiir(lis);
	// Felszabaditas
	felszabadit(lis);
	return 0;
}