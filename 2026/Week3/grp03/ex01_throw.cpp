//
// Created by keret on 2026. 02. 16..
//

#include <iostream>
#include <cmath>

double deg2rad(double alpha) {
    return M_PI / 180 * alpha;
}

double throw_trajectory(double alpha, double v0, double g = 9.81) {
    return v0 * v0 * sin(2 * alpha) / g;
}

int main(int argc, char *argv[]){
    double alpha, v0;
    std::cout << "Add meg a hajítás szögét (fokban): ";
    std::cin >> alpha;
    alpha = deg2rad(alpha);
    std::cout << "Add meg a kezdősebességet (m/s): ";
    std::cin >> v0;
    double d = throw_trajectory(alpha, v0);
    std::cout << "Távolság: " << d << " m" << '\n';
    return 0;
}