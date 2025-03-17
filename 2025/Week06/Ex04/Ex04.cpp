// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
* 3. Struktúra visszatérési értékként függvényben
Feladat:
Írj egy függvényt, amely egy diák adatait fogadja paraméterként, 
    és visszaad egy módosított struktúrát, 
    ahol az átlaghoz hozzáadunk 0.5-et (de max. 5.0 lehet).
*/

struct Diak {
	char nev[50];
	int kor;
	float atlag;
};

Diak modositAtlag(Diak diak) {
	if (diak.atlag + 0.5 > 5.0) {
		diak.atlag = 5.0;
	}
	else {
		diak.atlag += 0.5;
	}
	return diak;
}

int main()
{
	Diak diak;
	std::cout << "Adja meg a diak nevet: ";
	std::cin.getline(diak.nev, 50);
	std::cout << "Adja meg a diak korat: ";
	std::cin >> diak.kor;
	std::cout << "Adja meg a diak atlagat: ";
	std::cin >> diak.atlag;
    Diak modositottDiak = modositAtlag(diak);
	std::cout << "Modositott diak adatai: " << std::endl;
	std::cout << "Nev: " << modositottDiak.nev << std::endl;
	std::cout << "Kor: " << modositottDiak.kor << std::endl;
	std::cout << "Atlag: " << modositottDiak.atlag << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
