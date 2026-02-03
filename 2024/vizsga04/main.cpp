#include <iostream>
#include <cmath>

/*
Készítsd el a következő C++ függvényeket!

double cosineTriangular(double a, double b, double gamma): a koszinusztétel megvalósítása a háromszög két oldala és általuk közrefogott szög számításával. Használható az alábbi képlet:
double triArea(double a, double b, double gamma): háromszög számítása a két oldala és általuk közrefogott szög számításával. Használható a Hérón képlet:   (TIPP: használható a szinusztétel is)
Segítségképpen megadtuk a függvények fejléceit.
 */

double cosineTriangular(double a, double b, double gamma);
double triArea(double a, double b, double gamma);

double cosineTriangular(double a, double b, double gamma) {
    return std::sqrt(a*a + b*b - 2*a*b*std::cos(gamma));
}

double triArea(double a, double b, double gamma) {
    double c = cosineTriangular(a, b, gamma);
    double s = (a+b+c)/2.0;
    return std::sqrt(s * (s-a) * (s-b) * (s-c));
}

void test1() {
    double a = 3;
    double b = 4;
    double alpha = M_PI_2;
    double c = cosineTriangular(a, b, alpha);
    double area = triArea(a, b, alpha);
    std::cout << c << ' ' << area << '\n';
}

void test2() {
    double a = 1;
    double b = 1;
    double alpha = M_PI_2;
    double c = cosineTriangular(a, b, alpha);
    double area = triArea(a, b, alpha);
    std::cout << c << ' ' << area << '\n';
}

void test3() {
    double a = 7;
    double b = 9;
    double alpha = M_PI_2;
    double c = cosineTriangular(a, b, alpha);
    double area = triArea(a, b, alpha);
    std::cout << c << ' ' << area << '\n';
}

void test4() {
    double a = 7;
    double b = 9;
    double alpha = M_PI/3;
    double c = cosineTriangular(a, b, alpha);
    double area = triArea(a, b, alpha);
    std::cout << c << ' ' << area << '\n';
}

void test5() {
    double a = 17;
    double b = 9;
    double alpha = M_PI/6;
    double c = cosineTriangular(a, b, alpha);
    double area = triArea(a, b, alpha);
    std::cout << c << ' ' << area << ' ' << a*b*std::sin(alpha)*0.5 << '\n';
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}
