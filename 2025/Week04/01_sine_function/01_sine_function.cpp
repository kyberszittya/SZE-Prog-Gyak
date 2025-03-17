// 01_sine_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

/*
* Szinusz g�rbe ascii art st�lusban

Vizualiz�lja karakteres fel�leten a szinusz f�ggv�nyt! 
Ha �gy k�nnyebb, az x tengely �llhat f�gg�legesen is, 
azaz 90 fokkal el lehet forgatni az �br�t.
*/

#define WIDTH 20
#define PI 3.14

int main()
{
    for (int i = 0; i < WIDTH; i++)
    {
        double x = 2 * PI * i / WIDTH;
		double y = sin(x);
		int j = (int)(y * WIDTH / 2 + WIDTH / 2);
        for (int k = 0; k < WIDTH; k++)
        {
            if (k == j)
            {
				std::cout << "*";
			}
            else
            {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
    }
    
}
