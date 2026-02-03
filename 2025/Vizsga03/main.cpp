#include <iostream>
#include <cmath>     // fabs
#include <cstdlib>   // rand, srand
#include <ctime>     // time

double minkowski_distance(double x0, double x1,
                          double y0, double y1,
                          double p)
{
    double dx_p = std::pow(std::fabs(x0 - x1), p);
    double dy_p = std::pow(std::fabs(y0 - y1), p);
    return std::pow(dx_p + dy_p, 1.0 / p);
}

int main()
{
    double d = minkowski_distance(1.0, 4.0,   // x-koordináták
                                  2.0, 6.0,   // y-koordináták
                                  3.0);       // p = 3
    std::cout << d << '\n';   // ≈ 4.49794
    double d1 = minkowski_distance(1.0, 4.0,
                                  1.0, 1.0,
                                  2.0);
    std::cout << d1 << '\n';
    double d2 = minkowski_distance(1.0, 4.0,
                                   1.0, 2.0,
                                   1.0);
    std::cout << d2 << '\n';
    double d3 = minkowski_distance(1.0, 4.0,
                                   1.0, 6.0,
                                   2.0);
    std::cout << d3 << '\n';
    return 0;
}