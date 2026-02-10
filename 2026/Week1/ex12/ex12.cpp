//
// Created by keret on 2026. 02. 09..
//

#include <iostream>

int main () {
    int n;
    std::cout << "Kerek egy számot N-ig: ";
    std::cin >> n;
    for (int i = 1; i < n; i+=2) {
        std::cout << i << std::endl;
    }
    return 0;
}
