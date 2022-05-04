// 3_Olvasas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 10

using namespace std;

int main()
{
    int szamok[N];
    for (int i = 0; i < N; i++)
    {
        std::cout << i + 1 << " szam: ";
        cin >> szamok[i];
    }

    bool szerepel;
    do
    {
        szerepel = false;
        int uj_szam;
        cout << "Uj szam: ";
        cin >> uj_szam;
        for (const int sz: szamok)
        {
            if (sz == uj_szam)
            {
                szerepel = true;
                break; // FOR ciklus leallhat, mehetünk tovább
            }
        }
    } while (szerepel);
    cout << "A szam egyszer sem szerepelt, kilepes\n";

    return 0;
}
