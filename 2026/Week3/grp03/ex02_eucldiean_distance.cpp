//
// Created by keret on 2026. 02. 22..
//

#include <iostream>
#include <cmath>


double euclidean_distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(int argc, char *argv[]) {
    double x1, y1, x2, y2;
    std::cout << "Kérem az első pont koordinátáit (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Kérem a második pont koordinátáit (x2 y2): ";
    std::cin >> x2 >> y2;
    double distance = euclidean_distance(x1, y1, x2, y2);
    std::cout << "A két pont közötti távolság: " << distance << std::endl;
    return 0;
}