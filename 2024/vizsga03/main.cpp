

/*
 * Polár koordinátás forma
 *
 * Készítsen két C++ függvényt! Az egyik függvény:
 * - PolarCoord toPolarCoord(CartesianCoord p): x,y koordinátákból polárkoordinátás formát állít elő.
 * - CartesianCoord toCartesianCoord(PolarCoord p): polárkoordinátákból x,y koordinátákat állít elő.
 *
 * Az átalakításhoz a következő képleteket használhatja (tipp: std::cos, std::sin, std::sqrt, std::atan2):
 * - Polárkoordinátás forma: x = r*cos(phi), y = r*sin(phi)
 * - Koordinátás forma: r = sqrt(x^2 + y ^ 2), phi = atan2(y, x)
 * Definiálja a két struktúrát: CartesianCoord (x, y), PolarCoord (r, phi). double mezőket használjon! Segítségképpen megadtuk az implementálandó függvények fejléceit.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

struct PolarCoord {
    double r;
    double phi;
};

struct CartesianCoord {
    double x;
    double y;
};

CartesianCoord toCartesianCoord(PolarCoord p);
PolarCoord toPolarCoord(CartesianCoord p);

CartesianCoord toCartesianCoord(PolarCoord p) {
    CartesianCoord coord;
    coord.x = p.r * std::cos(p.phi);
    coord.y = p.r * std::sin(p.phi);
    return coord;
}

PolarCoord toPolarCoord(CartesianCoord p) {
    PolarCoord coord;
    coord.r = std::sqrt(p.x * p.x + p.y * p.y);
    coord.phi = std::atan2(p.y, p.x);
    return coord;
}

void printCoord(CartesianCoord p) {
    if (std::abs(p.x) < 1e-5){
        std::cout << 0;
    } else {
        std::cout << p.x;
    }
    std::cout << ',';
    if (std::abs(p.y) < 1e-5) {
        std::cout << 0;
    }else {
        std::cout << p.y;
    }
    std::cout << '\n';
}

void printCoord(PolarCoord p) {
    std::cout << p.r << ',' << p.phi << '\n';
}


void test1() {
    CartesianCoord c0;
    c0.x = 0.0;
    c0.y = 0.0;

    PolarCoord p0 = toPolarCoord(c0);
    printCoord(c0);
    printCoord(p0);
}

void test2() {
    CartesianCoord c0;
    c0.x = 1.0;
    c0.y = 1.0;
    PolarCoord p0 = toPolarCoord(c0);
    printCoord(c0);
    printCoord(p0);
}

void test3() {
    PolarCoord p0;
    p0.r = 1.0;
    p0.phi = M_PI;
    CartesianCoord c0 = toCartesianCoord(p0);

    printCoord(c0);
    printCoord(p0);
}

void test4() {
    PolarCoord p0;
    p0.r = 1.0;
    p0.phi = M_PI_2;
    CartesianCoord c0 = toCartesianCoord(p0);

    printCoord(c0);
    printCoord(p0);
}

void test5() {
    CartesianCoord c0;
    c0.x = -10.0;
    c0.y = 40.0;

    PolarCoord p0 = toPolarCoord(c0);
    printCoord(c0);
    printCoord(p0);
}

void test6() {
    CartesianCoord c0;
    c0.x = -10.0;
    c0.y = -25.0;

    PolarCoord p0 = toPolarCoord(c0);
    printCoord(c0);
    printCoord(p0);
}

void test7() {
    PolarCoord p0;
    p0.r = 67.0;
    p0.phi = 3.0*M_PI/2;
    CartesianCoord c0 = toCartesianCoord(p0);

    printCoord(c0);
    printCoord(p0);
}

int main() {

    //test1()
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    test7();
    return 0;
}
