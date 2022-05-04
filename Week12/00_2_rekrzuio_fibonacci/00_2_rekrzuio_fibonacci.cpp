// 00_2_rekrzuio_fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fibonacci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }

    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << fibonacci(i) << '\n';
    }
    return 0;
}
