// Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// K�rj�nk be k�t sz�mot, majd mondjuk meg, hogy az els� a nagyobb, 
// a m�sodik, vagy egyenl�k!

int main()
{
    int a, b;
    std::cout << "Kerem adja meg az elso szamot: "; std::cin >> a;
    std::cout << "Kerem adja meg a masodik szamot: ";  std::cin >> b;
    if (a > b) {
        std::cout << "Az elso szam nagyobb, mint a masodik." << std::endl;
    }
    else if (a < b) {
        std::cout << "A masodik szam nagyobb, mint az elso." << std::endl;
    }
    else {
        std::cout << "A k�t sz�m egyenl�.\n";
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
