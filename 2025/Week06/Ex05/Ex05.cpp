// Ex05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* 4. Strukt�ra t�mbbel �s f�ggv�nyekkel
Feladat:
K�sz�ts egy programot, amely egy maximum 10 di�kot tartalmaz� t�mb�t kezel. 

�rj f�ggv�nyeket a k�vetkez�kre:

Di�k adatainak bek�r�se
A di�kok adatainak ki�r�sa
A legjobb �tlaggal rendelkez� di�k keres�se
*/

#include <iostream>
#include <string>
#define N 5

struct Diak {
	std::string nev;
	int kor;
	float atlag;
};

void adatokBekerese(Diak diakok[]) {
	for (int i = 0; i < N; i++) {
		std::cout << "Adja meg a diak nevet: ";		
		std::getline(std::cin, diakok[i].nev);
		std::cout << "Adja meg a diak korat: ";
		std::cin >> diakok[i].kor;
		std::cout << "Adja meg a diak atlagat: ";
		std::cin >> diakok[i].atlag;
		// Flush input buffer
		std::cin.ignore();

	}
}

void adatokKiirasa(Diak diakok[]) {
	for (int i = 0; i < N; i++) {
		std::cout << "Diak neve: " << diakok[i].nev << std::endl;
		std::cout << "Diak kora: " << diakok[i].kor << std::endl;
		std::cout << "Diak atlag: " << diakok[i].atlag << std::endl;
	}
}

int legjobbAtlaguKereses(Diak diakok[]) {
	int maxIndex = 0;
	for (int i = 1; i < N; i++) {
		if (diakok[i].atlag > diakok[maxIndex].atlag) {
			maxIndex = i;
		}
	}
	return maxIndex;
}

int main()
{
    Diak diakok[N];
	adatokBekerese(diakok);
	adatokKiirasa(diakok);
	int maxIndex = legjobbAtlaguKereses(diakok);
	std::cout << "A legjobb atlagu diak adatai: " << std::endl;
	std::cout << "Nev: " << diakok[maxIndex].nev << std::endl;
	std::cout << "Kor: " << diakok[maxIndex].kor << std::endl;
	std::cout << "Atlag: " << diakok[maxIndex].atlag << std::endl;
}
