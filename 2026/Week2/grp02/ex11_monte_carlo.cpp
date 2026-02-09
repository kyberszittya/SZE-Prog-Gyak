//
// Created by keret on 2026. 02. 09..
//
/*
 *
**Cél:** becsüld meg \(\pi\)-t véletlen mintavételezéssel.

**Geometriai ötlet:**
Vegyünk egy egységnégyzetet: $([0,1]\times[0,1])$, benne egy negyedkört sugárral $(r=1)$,
$[
x^2 + y^2 \le 1
]$
A negyedkör területe: $(\frac{\pi r^2}{4} = \frac{\pi}{4})$.
A négyzet területe: $(1)$.

Ezért:
$[
\frac{\text{bent}}{\text{összes}} \approx \frac{\pi}{4}
\quad\Rightarrow\quad
\pi \approx 4 \cdot \frac{N_{\text{bent}}}{N}
]$

**Bemenet (std::cin):**
- `N` — mintaszám (pl. 100000…5000000)

**Monte-Carlo algoritmus:**
1. Ismételd $(N)$-szer:
    - generálj véletlen $(x,y)$-t egyenletesen $([0,1])$-ben
    - ha $(x^2+y^2 \le 1)$, akkor `bent++`
2. Számold:
   $[
   \pi_{\text{mc}} = 4 \cdot \frac{N_{\text{bent}}}{N}
   ]$

**Kimenet:**
- `pi_mc` — a $(\pi)$ közelítése
- (opcionális) `abs_err = |pi_mc - 3.141592653589793|`

**Példa bemenet:**
- `N = 1000000`

**Példa kimenet (tipikusan, kb.):**
- `pi_mc ≈ 3.1410 ... 3.1425` (random, szórni fog)
- `abs_err ≈ 0.0001 ... 0.0015`
*/

#include <iostream>
#include <random>

/*
 *
 * FIGYELEM! Ez az újabb randomizálás alapján működik. Egy régi standard verziót is felraktam.
 *
 * Ez nehezebben megjegyezhető, de konzekvensebb, poontosabb és kiszámíthatatlanabb.
 * Emellett jobban szimulálja a mintavétlezést egy eloszlásból.
 */
double monteCarloPi(unsigned int n) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);
    int bent = 0;
    for (int i = 0; i < n; i++) {
        const double x = dis(gen);
        const double y = dis(gen);
        if (x * x + y * y <= 1) {
            bent++;
        }
    }
    return 4.0 * bent / n;
}

int main() {
    unsigned int n;
    std::cout << "N = ";
    std::cin >> n;
    std::cout << "pi_mc = " << monteCarloPi(n) << std::endl;
    return 0;

}