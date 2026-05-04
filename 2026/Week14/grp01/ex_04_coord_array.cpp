//
// Created by keret on 2026. 05. 04..
//
#include <iostream>
#include <cmath>

struct Coord {
    double x;
    double y;
    double z;
};

double* calcEuclid(Coord* coords, unsigned int n) {
    double* res = new double[n];
    for (int i = 0; i < n; i++) {
        double dx = std::pow(coords[i].x, 2);
        double dy = coords[i].y * coords[i].y;
        double dz = coords[i].z * coords[i].z;
        res[i] =std::sqrt(dx + dy + dz);
    }
    return res;
}

int main() {
    Coord coords[2];
    coords[0].x = 0.0;
    coords[0].y = 0.0;
    coords[0].z = 0.0;

    coords[1].x = 10.0;
    coords[1].y = 5.0;
    coords[1].z = 0.0;

    double* res = calcEuclid(coords, 2);
    for (int i = 0; i < 2; i++) {
        std::cout << res[i] << '\n';
    }
    delete[] res;
}