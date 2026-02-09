
/*
### 1. Feladat: Born-szabály
A kvantummechanikában a mérési valószínűség az amplitúdó négyzete ($P = | \psi |^2$). Készíts egy `double bornRule(double amplitude)` függvényt, amely százalékos formában adja vissza az eredményt.

*/

#include <iostream>

double born_rule(double ampl) {
    return ampl * ampl;
}

int main() {
    double ampl;
    std::cout << "Amplitudo: ";
    std::cin >> ampl;
    std::cout << "Mérés valószínűsége: " << born_rule(ampl)*100.0 << "%" << std::endl;
}