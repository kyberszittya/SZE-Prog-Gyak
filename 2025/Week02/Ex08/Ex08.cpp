// Ex08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Menü program, szám megadásával adható ki a parancs (érvénytelen számra kilép)
// 1. Összeadás(bekér két számot és kiírja az összeget)
// 2. Szorzás
// 3. Hatványozás
// 4. Számtani sorozat a0 és d alapján n elem(önálló feladat, a három paramétert be kell kérni)

int main()
{
    std::cout << "Kalkulator:\n";
    std::cout << "1. Osszeadas \n";
    std::cout << "2. Szorzas \n";
    std::cout << "3. Hatvanyozas\n";
    std::cout << "4. szamtani sorozat\n";
    int cmd;
    std::cout << "Valasztas: "; std::cin >> cmd;
    switch (cmd) {        
    case 1: { // if (cmd == 1)
        int a, b;
        std::cout << "Kerem az elso szamot: "; std::cin >> a;
        std::cout << "Kerem a masodik szamot: "; std::cin >> b;
        std::cout << "Az osszeg: " << a + b << '\n';
    }
    case 2: {
        int a, b;
        std::cout << "Kerem az elso szamot: "; std::cin >> a;
        std::cout << "Kerem a masodik szamot: "; std::cin >> b;
        std::cout << "A szorzat: " << a * b << '\n';
        break;
    }
    case 3: {
        int a, b;
        std::cout << "Kerem az alapot: "; std::cin >> a;
        std::cout << "Kerem a kitevot: "; std::cin >> b;
        int res = 1;
        for (int i = 0; i < b; i++) {
            res = res * a; // res *= a;
        }
        std::cout << "A hatvany: " << res << '\n';
        break;
    }
    case 4: {
        int a0, d, n;
        std::cout << "Kerem az elso elemet: "; std::cin >> a0;
        std::cout << "Kerem a differenciat: "; std::cin >> d;
        std::cout << "Kerem az elemek szamat: "; std::cin >> n;
        int res = a0;
        for (int i = 0; i < n; i++) {
            res += d;
		}
		std::cout << "A szamtani sorozat: " << res << '\n';
		break;
    }
    }
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
