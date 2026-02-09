//
// Created by keret on 2026. 02. 09..
//
/*
### 4. Feladat: Decimális-Bináris átalakító (Rekurzív)
A kvantumbiteket (qubiteket) gyakran bináris láncként ábrázoljuk. Alakítsunk át egy tizes számrendszerbeli számot kettes számrendszerbe!

**Feladat:**
Írj egy `void printBinary(int n)` függvényt, amely rekurzió segítségével írja ki a szám bináris alakját!

* **Logika:** A függvény hívja meg magát `n / 2` értékkel, majd írja ki az `n % 2` maradékot.
* **Fókusz:** Figyeld meg a kiíratás helyét! A `std::cout` a rekurzív hívás **előtt** vagy **után** szerepeljen, hogy a bitek sorrendje helyes legyen? (A verem/stack sorrend megértése).

*/

#include <iostream>

void printBinary(int n) {
    if (n == 0) {
        return;
    }
    printBinary(n / 2);
    std::cout << n % 2;
}

std::string decimalToBinary(int n, std::string binary = "") {
    if (n == 0) {
        return binary;
    }
    binary = std::to_string(n % 2) + binary;
    return decimalToBinary(n / 2, binary);

}

int main(int argc, char** argv) {
    int n;
    std::cout << "Kérem a számot: ";
    std::cin >> n;
    std::cout << "Binary (recursive, std cout): ";
    printBinary(n);
    std::cout << std::endl;
    std::cout << "Binary: " << decimalToBinary(n) << std::endl;
    return 0;

}