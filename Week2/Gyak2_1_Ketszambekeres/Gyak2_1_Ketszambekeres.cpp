// Gyak2_1_Ketszambekeres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // K�t sz�m bek�r�se
    int x, y;
    // Els� sz�m bek�r�se
    cout << "Els� sz�m: ";
    cin >> x;
    // M�sodik sz�m bek�r�se
    cout << "M�sodik sz�m: ";
    cin >> y;
    if (x > y)
    {
        std::cout << "Els� bek�rt sz�m nagyobb\n";
    }
    else if (x < y)
    {
        std::cout << "M�sodik bek�rt sz�m nagyobb\n";
    }
    else 
    {
        // Az eseteink elfogytak, teh�t a k�t sz�m egyenl�
        std::cout << "A kett� bek�rt sz�m egyenl�\n";
    }

    return 0;
}

