// 02_BeolvasasEgyszeru.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("adatok.txt");
    cout << "Adatok.txt tartalma: " << '\n';
    if (f.is_open())
    {
        while (!f.eof())
        {
            string l;
            f >> l;
            cout << l << '\n';
        }
        f.close();
    }
    return 0;
}
