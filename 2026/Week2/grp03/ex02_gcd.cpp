//
// Created by keret on 2026. 02. 09..
//
/*
### 2. Feladat: Legnagyobb Közös Osztó (Euklideszi algoritmus)
Készíts egy rekurzív `gcd(a, b)` függvényt, amely megkeresi két szám legnagyobb közös osztóját! Ez az RSA titkosítás és a Shor-algoritmus egyik legfontosabb matematikai építőköve.
* **Logika:** $gcd(a, b) = gcd(b, a \pmod b)$, az alapeset pedig az, amikor a maradék nulla.
* **Fókusz:** A maradékos osztás (%) használata rekurzív hívásban.
*/

#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

unsigned int prepare_gcd(unsigned int a, unsigned int b) {
    if (a < b) {
        return gcd(b, a);
    }
    return gcd(a, b);
}

int main() {
    unsigned int a, b;
    std::cout << "Kérem az első számot (a): ";
    std::cin >> a;
    std::cout << "Kérem a második számot (b): ";
    std::cin >> b;
    std::cout << "A legnagyobb közös osztó: " << prepare_gcd(a, b) << std::endl;
}