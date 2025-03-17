// Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Olvassunk be 10 számot, majd írjuk ki az 
// átlagukat(ehhez még nem kell tömb)
//Írjuk ki az átlag alatti értékeket
// (itt már muszáj tömbbe eltárolni a számokat)
#define N 10
int main()
{
	double sum = 0.0;
	double numbers[N];
	for (int i = 0; i < N; i++) {
		double val;
		std::cout << i + 1 << ". szam: "; 
		std::cin >> val;
		numbers[i] = val;
		sum += val;
	}
	double avg = sum / N;
	std::cout << "A szamok atlaga: " << 
		avg << std::endl;
	for (int i = 0; i < N; i++) {
		if (numbers[i] < avg) { 
			std::cout << numbers[i] << " ";
		}
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
