// 03_StrukturaBeolvasas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

struct Varos
{
    int id;
    std::string name;
    std::string orszag;
    double nepesseg;
};

using namespace std;

int main()
{
    ifstream f("varosok.txt");
    if (f.is_open())
    {
        string line;        
        while (getline(f, line))
        {
            Varos v;
            int pozi[4] = { 0,0,0,0 };
            int cursor = 0;
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == ',')
                {
                    pozi[cursor] = i;
                    cursor++;
                }
            }
            // CSTR: const char stringbõl (fõleg átalakításoknál használatos)
            // ATOI: string-bõl (const char) integer
            v.id = atoi(line.substr(0, pozi[0]).c_str());
            // -1, hogy a vesszõk kimaradjanak
            v.name = line.substr(pozi[0]+1, pozi[1] - pozi[0] - 1);
            v.orszag = line.substr(pozi[1]+1, pozi[2] - pozi[1] - 1);
            // ATOF: string-bõl double
            v.nepesseg = atof(line.substr(pozi[2]+1, pozi[3] - pozi[2] - 1).c_str());
            //f >> v.name;
            //f >> v.orszag;
            //f >> v.nepesseg;
            cout << v.id << ":" << v.name << "-" << v.orszag << ", " << v.nepesseg << '\n';
        }
        f.close();
    }
}

