//
// Created by keret on 2024. 06. 12..
//

#include <iostream>
#include <cmath>

/**
Készíts programot, ami egy a függvényben megadott egyenestől (normálvektorával) kiszámítja egy tömbben meghatározott 2-dimenziós pontok közötti távolságot.
 A függvényben megadjuk a bemeneti tömb méretét.
 A visszatérési érték egy új tömb, ami sorban tartalmazza a számított távolságokat.
 A távolságszámításához a következő függvényt használhatod:

 Segítségképpen megadtuk a függvény fejlécét és a struktúra definícióját, de a struktúra mezőinek definiálása is a feladat része.
*/

struct Point2D {
    double x;
    double y;
};

double* distanceToLine(Point2D n0, double b, Point2D* points, unsigned int n);



double* distanceToLine(Point2D n0, double b, Point2D* points, unsigned int n) {
    double *res = new double[n];
    for (unsigned int i = 0; i < n; i++){
        double dist = std::abs(n0.x * points[i].x + n0.y * points[i].y + b)/std::sqrt(n0.x * n0.x + n0.y * n0.y);
        res[i] = dist;
    }
    return res;
}

void test1() {
    Point2D points[3];
    Point2D m;
    points[0].x = 0.0;
    points[0].y = 0.0;
    points[1].x = 0.0;
    points[1].y = 0.0;
    points[2].x = 0.0;
    points[2].y = 0.0;
    m.x = 1.0;
    m.y = 0.0;
    double b = 0;
    unsigned int n = 3;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        if (res[i] < 1e-12) {
            std::cout << 0.0 << '\n';
        }else {
            std::cout << res[i] << '\n';
        }
    }
    delete[] res;
}

void test2() {
    Point2D points[1];
    points[0].x = 2.0;
    points[0].y = 2.0;
    Point2D m;
    m.x = 1.0;
    m.y = 0.0;
    double b = 0;
    unsigned int n = 1;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

void test3() {
    Point2D points[5];
    points[0].x = 2.0;
    points[0].y = 2.0;
    points[1].x = -3.0;
    points[1].y = 3.0;
    points[2].x = -9.0;
    points[2].y = -9.0;
    points[3].x = 0.0;
    points[3].y = 0.0;
    points[4].x = 7.0;
    points[4].y = 0.0;
    Point2D m;
    m.x = 1.0;
    m.y = 0.0;
    double b = 0;
    unsigned int n = 5;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

void test4() {
    Point2D points[5];
    points[0].x = 2.0;
    points[0].y = 2.0;
    points[1].x = -3.0;
    points[1].y = 3.0;
    points[2].x = -9.0;
    points[2].y = -9.0;
    points[3].x = 0.0;
    points[3].y = 0.0;
    points[4].x = 7.0;
    points[4].y = 0.0;
    Point2D m;
    m.x = 0.0;
    m.y = 1.0;
    double b = 0;
    unsigned int n = 5;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

void test5() {
    Point2D points[5];
    points[0].x = 2.0;
    points[0].y = 2.0;
    points[1].x = -3.0;
    points[1].y = 3.0;
    points[2].x = -9.0;
    points[2].y = -9.0;
    points[3].x = 0.0;
    points[3].y = 0.0;
    points[4].x = 7.0;
    points[4].y = 0.0;
    Point2D m;
    m.x = 1.0;
    m.y = 1.0;
    double b = 0;
    unsigned int n = 5;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

void test6() {
    Point2D points[7];
    points[0].x = 2.0;
    points[0].y = 2.0;
    points[1].x = -3.0;
    points[1].y = 3.0;
    points[2].x = -9.0;
    points[2].y = -9.0;
    points[3].x = 0.0;
    points[3].y = 0.0;
    points[4].x = 7.0;
    points[4].y = 0.0;
    points[5].x = 0.0;
    points[5].y = 2.0;
    points[6].x = -1.0;
    points[6].y = 3.0;
    Point2D m;
    m.x = 1.0;
    m.y = 1.0;
    double b = -2;
    unsigned int n = 7;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

void test7() {
    Point2D points[8];
    points[0].x = 2.0;
    points[0].y = 2.0;
    points[1].x = -3.0;
    points[1].y = 3.0;
    points[2].x = -9.0;
    points[2].y = -9.0;
    points[3].x = 0.0;
    points[3].y = 0.0;
    points[4].x = 7.0;
    points[4].y = 0.0;
    points[5].x = 0.0;
    points[5].y = 2.0;
    points[6].x = -1.0;
    points[6].y = 3.0;
    points[7].x = -1.0;
    points[7].y = -7.0;
    Point2D m;
    m.x = 2.0;
    m.y = 3.0;
    double b = 2;
    unsigned int n = 7;
    double *res = distanceToLine(m, b, points, n);
    for (unsigned int i = 0; i < n; i++){
        std::cout << res[i] << '\n';
    }
    delete[] res;
}

int main() {
    test1();
    std::cout << '\n';
    test2();
    std::cout << '\n';
    test3();
    std::cout << '\n';
    test4();
    std::cout << '\n';
    test5();
    std::cout << '\n';
    test6();
    std::cout << '\n';
    test7();
    return 0;
}