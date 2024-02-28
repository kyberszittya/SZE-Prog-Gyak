//
// Created by keret on 2024. 02. 28..
//

/*
 * Másodfokú egyenlet

Olvassunk be `a` `b` és `c` együtthatókat szabvány bemenetről
Amennyiben az értékek alapján alkotott másodfokú egyenletnek (ax2+bx+c=0
) van valós gyöke írja ki az eredményt, különben pedig `Az egyenletenek nincs valos gyoke` szöveget.
Megjegyzés: Az egyenletnek akkor van valós gyöke, ha a négyzetgyökjel alatt álló diszkrimináns nemnegatív.

Jelezzük ki a megoldást
Segítség: a 4x2+8x−5=0
 egyenlet megoldásai: x1=0.5,x2=−2.5

Plusz feladat: amennyiben a diszkrimináns 0 és csak 1 megoldás van, akkor ezt külön jelezze!
 */

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Masodfoku egyenlet\n";
    std::cout << "a: "; std::cin >> a;
    std::cout << "b: "; std::cin >> b;
    std::cout << "c: "; std::cin >> c;
    std::cout << a << "x^2 + " << b << "x+" << c << '\n';
    double D = b*b - 4*a*c;
    if (D < 0) {
        std::cout << "Nincs valós megoldása az egyenletnek!\n";
    } else if (D == 0){
        std::cout << "Egy valós megoldása az egyenletnek\n";
        double x = -b/(2*a);
        std::cout << "Megoldas: " << x;
    } else {
        std::cout << "Két valós megoldása van az egyenletnek";
        double x1 = (-b + std::sqrt(D))/(2*a);
        double x2 = (-b - std::sqrt(D))/(2*a);
        std::cout << "Ket megoldas: " << x1 << ", " << x2 << '\n';
    }
}