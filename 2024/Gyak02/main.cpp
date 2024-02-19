#include <iostream>

/// Önálló feladat
//
// Kérjünk be két számot, majd mondjuk meg,
// hogy az első a nagyobb, a második, vagy egyenlők!
/// \return

int main() {
    std::cout << "Kérem az első számot: " << '\n';
    int a, b;
    std::cin >> a;
    std::cout << "Kérem a második számot: " << '\n';
    std::cin >> b;
    if (a > b) {
        std::cout << "Első nagyobb\n";
    }
    else if (a < b) {
        std::cout << "Második nagyobb\n";
    } else {
        std::cout << "A kettő egyenlő\n";
    }
    return 0;
}
