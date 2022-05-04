// 02_DinamikusTombMemoria.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Mem�riasziv�rg�s ellen�rz�s�hez sz�ks�ges f�ggv�nyek
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>

using namespace std;

int main()
{
    // Mem�riasziv�rg�s ellenr�z�se VS k�rnyezetben
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    // T�mbre mutat�
    int* tomb;

    int n;
    cout << "Tomb merete: ";
    cin >> n;
    // T�mb lefoglal�sa
    tomb = new int[n];
    // T�mb elemeinek bekerese
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sz�m: ";
        cin >> tomb[i];
    }
    // T�mb elemeinek kiirat�sa
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sz�m: " << tomb[i] << '\n';
    }
    // T�mb felszabad�t�sa
    delete[] tomb;
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
