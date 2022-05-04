// 01_Szemelyek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MAXHALLGATO 1

struct Hallgato {
    int ev, honap, nap;
    float tavolsag;
};

using namespace std;

int main()
{
    Hallgato hallgato[MAXHALLGATO];
    for (int i = 0; i < MAXHALLGATO; i++)
    {
        cout << "Kerem a hallgato adatait: \n";
        cout << "Ev: ";
        cin >> hallgato[i].ev;
        cout << "Honap: ";
        cin >> hallgato[i].honap;
        cout << "Nap: ";
        cin >> hallgato[i].nap;
        cout << "Tavolsag fovarostol: ";
        cin >> hallgato[i].tavolsag;
        
        /*
        cout << "Kerem a hallgato adatait: \n";
        cout << "Ev: ";
        cin >> i.ev;
        cout << "Honap: ";
        cin >> i.honap;
        cout << "Nap: ";
        cin >> i.nap;
        cout << "Tavolsag fovarostol: ";
        cin >> i.tavolsag;
        */
    
    }
    //for (int i = 0; i < MAXHALLGATO; i++)
    for (const Hallgato i: hallgato)
    {
        /*
        cout << "Hallgato: " << hallgato[i].ev << " " << hallgato[i].honap << " "
            << hallgato[i].nap << ", tavolsag: " << hallgato[i].tavolsag << '\n';
            */
        cout << "Hallgato: " << i.ev << " " << i.honap << " "
            << i.nap << ", tavolsag: " << i.tavolsag << '\n';
    }

    for (const Hallgato i : hallgato)
    {
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
