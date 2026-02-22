//
// Created by keret on 2026. 02. 22..
//

#include <iostream>
#include <cmath>

constexpr double hbar = 1.0545718e-34; // Planck állandó osztva 2π-vel (Joule·s)

double quantum_harmonic_oscillator(double n, double omega) {
    return (n + 0.5) * hbar * omega;
}

int main(int argc, char *argv[]) {
    double n, omega;
    std::cout << "Kérem a kvantumszámot (n): ";
    std::cin >> n;
    std::cout << "Kérem a szögfrekvenciát (omega): ";
    std::cin >> omega;
    double energy = quantum_harmonic_oscillator(n, omega);
    std::cout << "A kvantumharmonikus oszcillátor energiája: " << energy << " Joule" << std::endl;
    return 0;
}