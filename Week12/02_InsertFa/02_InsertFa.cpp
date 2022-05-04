// 02_InsertFa.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void insertJobb(Fa* elem, int adat)
{
    if (elem->jobb == nullptr)
    {
        elem->jobb = ujfa(adat);
    }
    else if (elem->bal == nullptr)
    {
        elem->bal = ujfa(adat);
    }
    else {
        insertJobb(elem->jobb, adat);
    }
}


void insertBal(Fa* elem, int adat)
{
    if (elem->jobb == nullptr)
    {
        elem->jobb = ujfa(adat);
    }
    else if (elem->bal == nullptr)
    {
        elem->bal = ujfa(adat);
    }
    else {
        insertBal(elem->bal, adat);
    }
}


int main()
{
    Fa* gyoker = ujfa(12);
    insertBal(gyoker, 14);
    insertJobb(gyoker, 8);
    insertJobb(gyoker, 19);
    insertBal(gyoker, -2);

    kiir(gyoker);

    return 0;
}

