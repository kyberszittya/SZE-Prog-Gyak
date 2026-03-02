//
// Created by keret on 2026. 03. 02..
//

#include <iostream>
#include <cmath>


struct Point2D {
    double x;
    double y;
};

double distance2D(Point2D p1, Point2D p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return std::sqrt(dx * dx + dy * dy);
}

int main() {
    Point2D p1;
    Point2D p2;

    std::cout << "2D Pont távolság kiszámító program\n";
    std::cout << "Add meg kérlek az első pontot (p1): \n";
    std::cout << "p1.x :";
    std::cin >> p1.x;
    std::cout << "p1.y :";
    std::cin >> p1.y;
    std::cout << "Add meg kérlek az második pontot (p2): \n";
    std::cout << "p2.x :";
    std::cin >> p2.x;
    std::cout << "p2.y :";
    std::cin >> p2.y;
    double distance = distance2D(p1, p2);
    std::cout << "A két pont távolsága: " << distance << '\n';
    return 0;

}