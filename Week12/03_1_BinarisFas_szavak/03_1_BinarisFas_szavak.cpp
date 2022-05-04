// 03_1_BinarisFas_szavak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Szo 
{
	char szo[31];
	int elofordulas;

	Szo* bal;
	Szo* jobb;
};

struct Nev 
{
	char* nev;
	char szam[21];
	// Bináris fa
	Nev* jobb;
	Nev* bal;
};

struct Morze
{
	char betu;
	// Binaris fa
	Morze* ti;
	Morze* ta;
};

