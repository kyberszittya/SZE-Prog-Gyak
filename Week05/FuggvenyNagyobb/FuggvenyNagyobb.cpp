// FuggvenyNagyobb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 7

using namespace std;

int nagyobbMintAMasik(int x, int y)
{
    if (x > y) { 
        return 1; 
    }
    else if (x < y) return -1;
    else return 0;
}

int main()
{
    std::cout << nagyobbMintAMasik(1, 2) << '\n';
    std::cout << nagyobbMintAMasik(2, 2) << '\n';
    std::cout << nagyobbMintAMasik(7, 2) << '\n';
    int szamok[N];

    for (unsigned int i = 0; i < N; i++)
    {
        cout << i + 1 << ". szam: ";
        cin >> szamok[i];
    }

    for (unsigned int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            if (nagyobbMintAMasik(szamok[i], szamok[0]) == 1)
            {
                cout << szamok[i] << ' ' << szamok[0] << '\n';
            }
        }
        else if (nagyobbMintAMasik(szamok[i], szamok[i + 1]) == 1)
        {
            cout << szamok[i] << ' ' << szamok[i + 1] << '\n';
        }

    }
}
