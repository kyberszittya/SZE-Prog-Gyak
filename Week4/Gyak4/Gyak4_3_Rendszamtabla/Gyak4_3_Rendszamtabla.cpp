// Gyak4_3_Rendszamtabla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string rendszam;
    do
    {
        cout << "Kerek egy rendszamot: ";
        cin >> rendszam;
        bool megfelel = true;
        if (rendszam.size() == 7)
        {
            
            for (int i = 0; i <= 2; i++)
            {
                if (!((rendszam[i] >= 'A' && rendszam[i] <= 'Z')
                    || (rendszam[i] >= 'a' && rendszam[i] <= 'z')))
                {
                    megfelel = false;
                }
            }
            for (int i = 4; i <= 6; i++)
            {
                if (!(rendszam[i] >= '0' && rendszam[i] <= '9'))
                {
                    megfelel = false;
                }
            }
        }
        else
        {
            megfelel = false;
        }
        if (megfelel) std::cout << "Megfelel a rendszamtabla\n";
        else std::cout << "Nem megfelelo a rendszamtabla\n";
    } while (rendszam.compare("k")!=0);
}
