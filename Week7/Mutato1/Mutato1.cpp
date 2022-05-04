// Mutato1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void bekerek(int* pa) {
	cout << "Kerek egy szamot: ";
	cin >> *pa;
}

int main()
{
	int a;
	//int* pa = &a;
	bekerek(&a);
	cout << "Ertek: " << a <<
		", memoriacim: " << &a << '\n';
	//cout << "Mutatocim:" << pa << '\n';

	return 0;
}
