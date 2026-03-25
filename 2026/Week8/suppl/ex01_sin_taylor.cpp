//
// Created by keret on 2026. 03. 25..
//

#include <iostream>
#include <cmath>

#define K 13
#define EPS 1e-9

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    }
    return n * factorial(n - 1);
}

double mySin(double x) {
    double result = 0.0;
    for (int i = 0; i < K; i++) {
        double d = 2 * i + 1;
        double term = std::pow(-1, i) * std::pow(x, d) / factorial(d);
        result += term;
    }
    return result;
}

double myCos(double x) {
    double elojel = +1.; double szorzo = 0.;
    double szamlalo = 1.; double nevezo = 1.;
    double elozo, aktualis=0.;
    for (int i = 0; i < 2; i++) {
        elozo = aktualis;
        aktualis = elozo + (elojel*szamlalo) / nevezo;
        elojel *= -1.;
        szamlalo *= x * x;
        nevezo *= (szorzo+1.) * (szorzo+2.);
        szorzo += 2.;
        if (abs(aktualis - elozo) <= EPS) {
            break;
        }
    }

    return aktualis;
}

int main(int argc, char* argv[]) {
    double x = 3.14;
    std::cout << "MySin(x): " << mySin(x) << std::endl;
    std::cout << "std::sin(x): " << std::sin(x) << std::endl;
    std::cout << "Koszinusz\n";
    std::cout << "MyCos(x): " << myCos(x) << std::endl;
    std::cout << "std::cos(x): " << std::cos(x) << std::endl;

    return 0;
}