// 00_0_rekurzió_forciklus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void forciklushelyettesito(int i, int limit)
{
    cout << i << '\n';
    i++;
    if (i < limit)
    {
        forciklushelyettesito(i, limit);
    }
}

int main()
{
    forciklushelyettesito(0, 100);
}

