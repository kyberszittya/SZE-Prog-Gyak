// 03_sine_funciton_x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Szinusz görbe ascii art stílusban

Vizualizálja karakteres felületen a szinusz függvényt!
*/

#include <iostream>
#include <cmath>

#define WIDTH 20
#define PI 3.14

int main()
{
    // X tengelyen elhelyezkedõ szinusz görbe
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

