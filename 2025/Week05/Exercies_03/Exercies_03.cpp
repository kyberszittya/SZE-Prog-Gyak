// Exercies_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Legnagyobb sz�m f�ggv�nnyel

�rjon f�ggv�nyt, amely k�t sz�mot v�r param�ter�l �s eredm�ny�l 
    visszaadja a k�t sz�m maximum�t!
Olvasson be egy sz�mot, amelyet elt�rol jelenlegi maxim�lis �rt�kk�nt!
Olvasson be sz�mokat addig, m�g nem adunk meg h�romszor is nagyobb sz�mot az 
    el�z�ekn�l! A nagyobb sz�mot mindig t�rolja el jelenlegi maximumk�nt!
A feladat megold�s�hoz haszn�lja fel az el�z�leg meg�rt f�ggv�nyt!
(Felhaszn�lt forr�s: PE-MIK C Programoz�s I feladatgy�jtem�ny)
Megold�s
*/

#include <iostream>

int maximum(int a, int b) 
{
    int x = a;
	if (b > a) { x = b; }
	return x;
}

int main()
{
    int max;
    std::cout << "Kerem az elso szamot: ";
    std::cin >> max;
    int cnt_max = 0;
    while (true) {
        std::cout << "Kerem az uj szamot: ";
        int a;
        std::cin >> a;
        if (a > max) { 
            max = a; 
            cnt_max++;
        }
        if (cnt_max == 3) { break; }
    }
    std::cout << "A legnagyobb szam: " << max << std::endl;
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
