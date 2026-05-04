//
// Created by keret on 2026. 05. 04..
//

#include <iostream>
#include <cmath>

struct CartesianCoord {
    double x;
    double y;
};

struct PolarCoord {
    double r;
    double phi;
};

CartesianCoord toCartesianCoord(PolarCoord p) {
    CartesianCoord p1;
    p1.x = p.r * std::cos(p.phi);
    p1.y = p.r * std::sin(p.phi);
    return p1;
}

PolarCoord toPolarCoord(CartesianCoord p) {
    PolarCoord p1;
    p1.r = std::hypot(p.x, p.y);
    p1.phi = std::atan2(p.y, p.x);
    return p1;
}

int main() {
    PolarCoord p0 = {1.0, M_PI_2};
    CartesianCoord p1 = {4.0, 5.0};
    CartesianCoord p0_ = toCartesianCoord(p0);
    PolarCoord p1_ = toPolarCoord(p1);
    PolarCoord check = toPolarCoord(p0_);
    std::cout << p0_.x << " " << p0_.y << std::endl;
    std::cout << p1_.r << " " << p1_.phi << std::endl;
    std::cout << check.r << " " << check.phi << std::endl;
    return 0;
}