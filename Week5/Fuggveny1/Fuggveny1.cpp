// Fuggveny1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int sum2(int a, int b)
{
    return a + b;
}

int main()
{
    int sum;

    do {
        int x, y;
        cout << "K�rek egy sz�mot: ";
        cin >> x;
        cout << "K�rek egy m�sik sz�mot: ";
        cin >> y;
        sum = sum2(x, y);
        cout << "Eredm�ny: " << sum << '\n';
        
    } while (sum % 7 != 0);
    return 0;
}


