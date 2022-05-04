// 01_Ezegyfa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Fa
{
    int adat;
    struct Fa* bal;
    struct Fa* jobb;
};

Fa* ujfa(int adat)
{
    Fa* ujfa = new Fa;
    ujfa->adat = adat;
    // Szomszedok nullázása
    ujfa->bal = nullptr;
    ujfa->jobb = nullptr;

    return ujfa;
}

void kiir(Fa* elem)
{
    std::cout << elem->adat << '\n';
    if (elem->jobb != nullptr)
    {
        kiir(elem->jobb);
    }
    if (elem->bal != nullptr)
    {
        kiir(elem->bal);
    }
    
}

int main()
{
    Fa* gyoker = ujfa(10);

    gyoker->bal = ujfa(-3);
    gyoker->jobb = ujfa(6);

    gyoker->bal->bal = ujfa(10);

    kiir(gyoker);

    delete gyoker->bal->bal;
    delete gyoker->bal;
    delete gyoker->jobb;
    delete gyoker;

    return 0;
}
