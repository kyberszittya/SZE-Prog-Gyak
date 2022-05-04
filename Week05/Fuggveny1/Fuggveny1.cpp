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
        cout << "Kérek egy számot: ";
        cin >> x;
        cout << "Kérek egy másik számot: ";
        cin >> y;
        sum = sum2(x, y);
        cout << "Eredmény: " << sum << '\n';
        
    } while (sum % 7 != 0);
    return 0;
}


