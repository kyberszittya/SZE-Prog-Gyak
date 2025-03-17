// 00_Shifting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main() {
    const int meret = 5;
    int tomb[meret];

    for (int i = 0; i < meret; i++) {
        cout << "Add meg a(z) " << i + 1 << ". elemet:";
        cin >> tomb[i];
    }

    int eltol;
    cout << "Add meg az eltolast: ";
    cin >> eltol;
    eltol = eltol % meret;
    if (eltol < 0) {
        eltol = eltol + meret;
    }

    int ujTomb[meret];
    for (int i = 0; i < meret; i++) {
        ujTomb[(i + eltol) % meret] = tomb[i];
    }

    cout << "Eltolt tomb: ";
    for (int i = 0; i < meret; i++) {
        cout << ujTomb[i] << " ";
    }
    cout << endl;

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
