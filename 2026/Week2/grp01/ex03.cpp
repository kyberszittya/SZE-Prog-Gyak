//
// Created by keret on 2026. 02. 09..
//
/*
Írasd ki a Pascal-háromszög első `N` sorát. Ügyelj a számok közötti távolságra a megfelelő formázáshoz.

*/

#include <iostream>

void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            std::cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }

}

int main() {
    int n;
    std::cout << "Sorok száma: ";
    std::cin >> n;
    printPascalTriangle(n);
    return 0;
}
