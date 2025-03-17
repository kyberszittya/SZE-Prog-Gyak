// Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// �sszead�s f�ggv�nnyel
// �rjon f�ggv�nyt, amely k�t sz�mot v�r param�ter�l 
//  �s eredm�ny�l visszaadja a k�t sz�m �sszeg�t!
// �rjon programot, amely k�t sz�mot olvas be mindaddig, 
//  m�g azok �sszege nem oszthat� 7 - tel!
// A feladat megold�s�hoz haszn�lja fel az el�z�leg meg�rt f�ggv�ny!
// (Felhaszn�lt forr�s : PE - MIK C Programoz�s I feladatgy�jtem�ny)
// Megold�s.

int osszead(int a, int b)
{
    return a + b;
}


int main()
{
    while (true) {
        int a, b;
        std::cout << "Kerem adja meg az 1. szamot: ";
        std::cin >> a;
        std::cout << "Kerem adja meg a 2. szamot: ";
        std::cin >> b;
        int x = osszead(a, b);
        std::cout << "A ket szam osszege: " << x << std::endl;
        if (x % 7 == 0) {
			break;
		}
    }
    std::cout << "Ja mata!\n";
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
