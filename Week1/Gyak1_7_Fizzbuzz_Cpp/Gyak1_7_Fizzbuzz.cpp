// Gyak1_7_Fizzbuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Egyszer� mint a deszka
    for (int i = 1; i <= 100; i++)
    {
        // Ellen�rizz�k 3-al oszthat�-e a sz�m
        if (i % 3 == 0)
        {
            std::cout << "Fizz";
        }
        // Ellen�rizz�k 5-el oszthat�-e a sz�m
        if (i % 5 == 0)
        {
            std::cout << "Buzz";
        }
        // Ha egyik felt�tel sem igaz, akkor ki�rjuk a sz�mot
        if ((i % 3 != 0 && i % 5 != 0))
        {
            std::cout << i;
        }
        std::cout << ' ';
    }

    return 0;
}

