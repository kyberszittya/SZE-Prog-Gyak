// 04_maosdofku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
* 
Másodfokú egyenlet

Olvassunk be `a` `b` és `c` együtthatókat szabvány bemenetről
Amennyiben az értékek alapján alkotott másodfokú egyenletnek (ax2+bx+c=0) 
van valós gyöke írja ki az eredményt, 
különben pedig `Az egyenletenek nincs valos gyoke` szöveget.
Megjegyzés: 
Az egyenletnek akkor van valós gyöke, 
ha a négyzetgyökjel alatt álló diszkrimináns nemnegatív.

Jelezzük ki a megoldást
Segítség: a 4x2+8x−5=0
 egyenlet megoldásai: x1=0.5,x2=−2.5

Plusz feladat: amennyiben a diszkrimináns 0 és csak 1 megoldás van, 
akkor ezt külön jelezze!
*/

int main()
{
    std::cout << "Hello World!\n";
    double a, b, c;
    std::cout << "A := "; std::cin >> a;
    std::cout << "B := "; std::cin >> b;
    std::cout << "C := "; std::cin >> c;
    double D = b * b - 4 * a * c;
    if (D < 0) {
        std::cout << "Az egyenletnek nincs valos gyoke" << std::endl;
    }
    else {
        double x1 = (-b + sqrt(D)) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        if (D > 0) {            
            double x2 = (-b - sqrt(D)) / (2 * a);
            std::cout << "x2 = " << x2 << std::endl;
        } else{
            std::cout << "Az egyenletnek egy megoldasa van" << std::endl;
        }
    }
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
