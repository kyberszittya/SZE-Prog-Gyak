// Ex03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Kérjünk be számokat, míg egymás után kétszer 
//    ugyanazt a számot nem kapjuk
// A végén írjuk ki, hogy hány számot olvastunk be
// És hány páros számot olvastunk be ?

int main()
{
    int cnt = 0, cnt_paros = 0;
    int x, x_prev = 0;
    do {
        std::cout << "Kerek egy szamot: "; std::cin >> x;
        cnt++;
        if (x % 2 == 0) {
            cnt_paros++;
        }
        if (x == x_prev) {
            break;
        }
        x_prev = x;
    } while (true);
    std::cout << "Beolvasott szamok szama: " << cnt << '\n';
    std::cout << "Beolvasott paros szamok szama: " << cnt_paros << '\n';
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
