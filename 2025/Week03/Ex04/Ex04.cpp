// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Olvassunk be 10 számot egy tömbbe
// Kérjünk be további számokat, 
//  és mondjuk meg, hányszor szerepeltek a 10 elemû tömbben
// Ha egyszer sem szerepelt, álljon le a program

#define N 10

int main()
{
    int numbers[N];
    for (int i = 0; i < N; i++) {
        std::cout << i + 1 << ". szam: "; std::cin >> numbers[i];
    }
    while(true) {
        int val;
        std::cin >> val;
        int db = 0;
        for (int i = 0; i < N; i++) {
            if (numbers[i] == val) {
                db++;
            }
        }
        if (db == 0) {
            std::cout << "Nem szerepel a tombben\n";
			break;
		}
        std::cout << val << " szerepel " << db << " alkalommal\n";
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
