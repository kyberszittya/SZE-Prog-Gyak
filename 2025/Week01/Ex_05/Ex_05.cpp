// Ex_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Kérjünk be két számot, ha az elsõ nagyobb, 
írjuk ki a különbségüket
Ha mindkét szám kisebb, mint 10, 
akkor írjuk ki a szorzatukat is
*/

int main()
{
    int number1, number2;
    std::cout << "Elso szam: \n";
    std::cin >> number1;
    std::cout << "Masodik szam: \n";
    std::cin >> number2;
    // Ha az elsõ szám nagyobb
    if (number1 > number2) {
        std::cout << "A ket szam kulonbsege: " 
            << number1 - number2 << std::endl;
    }
    // Ha mindkét szám kisebb, mint 10
    if (number1 < 10 && number2 < 10) {
        std::cout <<  "A ket szam szorzata: " <<
            number1 * number2 << std::endl;
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
