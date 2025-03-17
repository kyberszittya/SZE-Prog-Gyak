// Exercies_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Legnagyobb szám függvénnyel

Írjon függvényt, amely két számot vár paraméterül és eredményül 
    visszaadja a két szám maximumát!
Olvasson be egy számot, amelyet eltárol jelenlegi maximális értékként!
Olvasson be számokat addig, míg nem adunk meg háromszor is nagyobb számot az 
    elõzõeknél! A nagyobb számot mindig tárolja el jelenlegi maximumként!
A feladat megoldásához használja fel az elõzõleg megírt függvényt!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyûjtemény)
Megoldás
*/

#include <iostream>

int maximum(int a, int b) 
{
    int x = a;
	if (b > a) { x = b; }
	return x;
}

int main()
{
    int max;
    std::cout << "Kerem az elso szamot: ";
    std::cin >> max;
    int cnt_max = 0;
    while (true) {
        std::cout << "Kerem az uj szamot: ";
        int a;
        std::cin >> a;
        if (a > max) { 
            max = a; 
            cnt_max++;
        }
        if (cnt_max == 3) { break; }
    }
    std::cout << "A legnagyobb szam: " << max << std::endl;
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
