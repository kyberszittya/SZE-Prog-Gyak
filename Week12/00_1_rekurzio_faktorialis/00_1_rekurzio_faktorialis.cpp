// 00_1_rekurzio_faktorialis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Csak pozitív számok és a 0: unsigned
// int: x86 4 byte, x64 8 byte
// long: kétszerezése
unsigned long long faktorialis(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * faktorialis(n - 1);
}

int main()
{
    // 1*2*3*4*5 = 120
    std::cout << faktorialis(5) << '\n';
    // 1*2*3*4*5*6
    std::cout << faktorialis(6) << '\n';
    // 1*2*3 ... *19*20
    std::cout << faktorialis(20) << '\n';
    // 1*2*3 ... *39*40
    std::cout << faktorialis(40) << '\n';
}
