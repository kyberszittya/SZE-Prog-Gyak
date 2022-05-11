// 04_FajlMerete.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("erdo.jpg", ios::binary);
    if (f.is_open())
    {
        f.seekg(0, ios_base::end);
        streampos vege = f.tellg();
        cout << "Fajl merete: " << vege << " bajt\n";
        f.close();
    }
    else
    {
        cerr << "Nem sikerult megnyitni a fajlt\n";
    }
    return 0;
}
