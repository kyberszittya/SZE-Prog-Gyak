// Fel02_Nagyobbszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define N 7

int nagyobbszam(int a, int b) {
    if (a > b) { return 1; }
    else if (a < b) { return -1; }
    else { return 0; }
}

int main()
{
    // 7-elemu bemeneti tomb
    int tomb[N];
    std::cout << N << " elemu tomb bekerese\n";
    for (int i = 0; i < N; i++) {
        std::cout << i+1 << ". elem: "; std::cin >> tomb[i];
    }
    // Bekertek, nagyobb szam vegrehajtasa
    for (int i = 0; i < N - 1; i++) {
        if (nagyobbszam(tomb[i], tomb[i + 1]) == 1) {
            std::cout << "Az elso nagyobb mint a masik: "
                << tomb[i] << "," << tomb[i + 1] << '\n';
        }
    }
}
