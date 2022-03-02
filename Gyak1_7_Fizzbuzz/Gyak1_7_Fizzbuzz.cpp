// Gyak1_7_Fizzbuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Egyszerû mint a deszka
    for (int i = 1; i <= 100; i++)
    {
        // Ellenõrizzük 3-al osztható-e a szám
        if (i % 3 == 0)
        {
            std::cout << "Fizz";
        }
        // Ellenõrizzük 5-el osztható-e a szám
        if (i % 5 == 0)
        {
            std::cout << "Buzz";
        }
        // Ha egyik feltétel sem igaz, akkor kiírjuk a számot
        if ((i % 3 != 0 && i % 5 != 0))
        {
            std::cout << i;
        }
        std::cout << ' ';
    }

    return 0;
}

