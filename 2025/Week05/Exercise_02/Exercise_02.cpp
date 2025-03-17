// Exercise_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
* Nagyobb szám függvénnyel

Írjon függvényt, amely két számot vár paraméterül 
    és eredményül `1`-et ad vissza, 
    ha az elsõ szám nagyobb a másodiknál, 
    `-1`-et, ha a második nagyobb az elsõnél, `0`-át, ha egyenlõk!
Olvasson be egy hételemû tömböt!
Írassa ki a képernyõre azon szomszédos elemeket, 
    amelyekre igaz, hogy az elsõ nagyobb a másodiknál!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyûjtemény)
*/
#define N 7

int nagyobb(int a, int b)
{
    int x = -1;
    if (a > b) { x = 1; }
    else if (a == b) { x = 0; }
    return x;
}

int main()
{
    int a[N];
    for (int i = 0; i < N; i++) {
        std::cout << "Kerem adja meg a(z) " << i + 1 << ". szamot: ";
        std::cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        if (nagyobb(a[i], a[i + 1]) == 1) {
			std::cout << a[i] << " > " << a[i + 1] << std::endl;
		}
	}
    return 0;
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
