// 01_ProbaZH_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define N 256

int beker(char tomb[])
{
    string line;
    getline(cin, line);
    int hossz = 0;
    for (int i = 0; i < N && i < line.size(); i++)
    {
        if (line[i] >= 'a' && line[i] <= 'z' ||
            line[i] >= 'A' && line[i] <= 'Z' || line[i] == ' ') {
            hossz++;
            tomb[i] = line[i];
        }
    }
    return hossz;
}

int main()
{
    char tomb[N];
    int hossz = beker(tomb);
    std::cout << tomb << '\n';
    std::cout << "A bekert tomb hossza: " << hossz;

    return 0;
}
