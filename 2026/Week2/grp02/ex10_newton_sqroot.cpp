//
// Created by keret on 2026. 02. 09..
//
/*
**Cél:** közelítsd $(\sqrt{S})$-t iterációval (nagyon alap, 2–3 képlet).

**Bemenet (std::cin):**
- `S` — pozitív valós szám (`S > 0`)
- `k` — iterációk száma (pl. 5–20)

**Módszer (Babiloni/Newton):**
Válassz kezdőértéket, pl. $(x_0 = S)$ (vagy $(x_0 = 1)$, ha akarsz).
Iteráció:
$[
x_{n+1} = \frac{1}{2}\left(x_n + \frac{S}{x_n}\right)
]$

**Feladat:**
- Számold ki $(x_k)$-t.
- Írd ki a közelítést, és (opcionálisan) a hibát is: $(|x_k^2 - S|)$.

**Kimenet:**
- `sqrt_approx` — $(\sqrt{S})$ közelítése
- (opcionális) `error = |sqrt_approx^2 - S|`

**Példa bemenet:**
- `S = 10`
- `k = 6`

**Példa kimenet (kb.):**
- `sqrt_approx ≈ 3.16227766`
- `error ≈ 0.00000000...`
*/

#include <iostream>
#include <cmath>

double approx_square_root(double S, int k) {
    double xn = 1;
    for (int i = 0; i < k; ++i) {
        xn = (xn + S / xn) / 2.0;
    }
    return xn;
}

int main() {
    double S;
    int k;
    std::cout << "Szám négyzetgyöke: ";
    std::cin >> S;
    std::cout << "Lépésszám (k):";
    std::cin >> k;
    double sqrt_approx = approx_square_root(S, k);
    double error = std::abs(sqrt_approx * sqrt_approx - S);
    std::cout << "Közelítés ≈ " << sqrt_approx << std::endl
              << "Hiba ≈ " << error << std::endl;
    return 0;

}