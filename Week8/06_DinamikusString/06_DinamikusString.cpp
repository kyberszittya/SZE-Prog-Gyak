// 06_DinamikusString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	//char str[101];
	string str;
	cout << "Kerem a szoveget: ";
	getline(cin, str);
	int hossz = str.length();
	char* uj_szoveg = new char[hossz + 1];
	str.copy(uj_szoveg, hossz);
	cout << "Szoveg: " << uj_szoveg << '\n';
	return 0;
}
