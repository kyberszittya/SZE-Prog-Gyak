// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Struktúrák, struktúratömb
Készítsen programot, amely személyek születési évét, hónapját, 
    napját képes tárolni, valamint a személy lakhelyének 
    fõvárostól való távolságát km-ben (float)!
Olvassa be 5 személy adatait a standard bemenetrõl!
Rendezze a tömböt a fõvárostól való távolságok szerinti 
    csökkenõ sorrendbe, majd jelenítse meg az elemeit!
Rendezze a tömböt a személyek kora szerinti növekvõ sorrendbe, 
    majd jelenítse meg az elemeit!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyûjtemény)
Megoldás
*/
#include <iostream>
#define N 5

struct Szemely
{
    int szulev;
    int szulho;
    int szulnap;
    float tavolsag;
};

void rendezesTavolsagSzerint(Szemely szemelyek[]) {
    // Tavolsag szerinti rendezes (buborék rendezés)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (szemelyek[i].tavolsag < szemelyek[j].tavolsag) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[j];
                szemelyek[j] = tmp;
            }
        }
    }
}

void rendezesEletkorSzerint(Szemely szemelyek[]) {
    // Tavolsag szerinti rendezes (buborék rendezés)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (szemelyek[i].szulev < szemelyek[j].szulev) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[j];
                szemelyek[j] = tmp;
            }
            else if (szemelyek[i].szulev == szemelyek[j].szulev &&
                szemelyek[i].szulho < szemelyek[j].szulho) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[j];
                szemelyek[j] = tmp;
            }
            else if (szemelyek[i].szulev == szemelyek[j].szulev &&
                szemelyek[i].szulho == szemelyek[j].szulho &&
                szemelyek[i].szulnap < szemelyek[j].szulnap) {
                Szemely tmp = szemelyek[i];
                szemelyek[i] = szemelyek[j];
                szemelyek[j] = tmp;
            }
        }         
    }
}

void megjelenites(Szemely szemelyek[]) {
    // Jelenites
    for (int i = 0; i < N; i++) {
        std::cout << szemelyek[i].szulev << " " << szemelyek[i].szulho << " " <<
            szemelyek[i].szulnap << " " << szemelyek[i].tavolsag << std::endl;
    }
}

int main()
{
    // Személyek beolvasása
    Szemely szemelyek[N];
    for (int i = 0; i < N; i++) {
        		std::cout << "Kerem adja meg a szemely szuletesi evet, " <<
                    "honapjat, napjat es a tavolsagot a fovarostol km - ben: ";
		std::cin >> szemelyek[i].szulev >> szemelyek[i].szulho >> 
            szemelyek[i].szulnap >> szemelyek[i].tavolsag;
    }
    rendezesTavolsagSzerint(szemelyek);
    std::cout << "Tavolsag szerinti rendezes:" << std::endl;
    megjelenites(szemelyek);
    rendezesEletkorSzerint(szemelyek);
    std::cout << "Eletkor szerinti rendezes:" << std::endl;
    megjelenites(szemelyek);
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
