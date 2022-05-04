// 04_Toki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct FaEleme
{
    int adat;
    // Bianris fa
    FaEleme* jobb;
    FaEleme* bal;
};

int elemszam(FaEleme* fa)
{
    if (fa == nullptr)
    {
        return 0;
    }
    return elemszam(fa->bal) + elemszam(fa->jobb) + 1;
    //return fa ? elemszam(fa->bal) + elemszam(fa->jobb) + 1 : 0;
}

bool tokiegy(FaEleme* fa)
{
    return (fa != nullptr) || tokiegy(fa->bal) && tokiegy(fa->jobb) && 
        abs(elemszam(fa->bal) - elemszam(fa->jobb)) <= 1;
}

int main()
{
    std::cout << "Hello World!\n";
}

