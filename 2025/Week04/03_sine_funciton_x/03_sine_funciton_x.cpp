// 03_sine_funciton_x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Szinusz g�rbe ascii art st�lusban

Vizualiz�lja karakteres fel�leten a szinusz f�ggv�nyt!
*/

#include <iostream>
#include <cmath>

#define WIDTH 20
#define PI 3.14

int main()
{
    // X tengelyen elhelyezked� szinusz g�rbe
    for (int i = 0; i < WIDTH; i++)
    {
        double x = 2 * PI * i / WIDTH;
		double y = sin(x);
		int j = (int)(y * WIDTH / 2 + WIDTH / 2);
        for (int k = 0; k < WIDTH; k++)
        {
            if (k == j)
            {

            }
        }
    }

}

