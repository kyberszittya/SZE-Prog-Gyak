#include <iostream>
#include <cmath>
#include <cassert>
//
// Created by keret on 2025. 06. 06..
//
struct Triangle {
    double a;
    double b;
    double c;
};


bool isTriangle(const Triangle& t)
{
    return t.a > 0 && t.b > 0 && t.c > 0 &&           // pozitív oldalak
           t.a + t.b > t.c &&
           t.a + t.c > t.b &&
           t.b + t.c > t.a;
}

double calculateArea(const Triangle& t)
{
    double p2 = 0.5 * (t.a + t.b + t.c);              // félkerület
    return std::sqrt(p2 * (p2 - t.a) * (p2 - t.b) * (p2 - t.c));
}

int main()
{
    // 1. érvényes: klasszikus 3-4-5 háromszög
    Triangle t1{3, 4, 5};
    assert(isTriangle(t1));
    assert(std::abs(calculateArea(t1) - 6.0) < 1e-9);

    // 2. érvényes: szabályos 6-6-6 háromszög
    Triangle t2{6, 6, 6};
    assert(isTriangle(t2));
    double area2 = calculateArea(t2);                 // ≈ 15.588...
    assert(std::abs(area2 - 15.588457) < 1e-6);

    // 3. érvénytelen: 2-2-9 nem alkot háromszöget
    Triangle t3{2, 2, 9};
    assert(!isTriangle(t3));

    // 4. érvényes: 5-12-13 háromszög
    Triangle t4{5, 12, 13};
    assert(isTriangle(t4));
    assert(std::abs(calculateArea(t4) - 30.0) < 1e-9);

    // Ha minden assert átmegy:
    std::cout << "Minden teszt sikeres!\n";
}