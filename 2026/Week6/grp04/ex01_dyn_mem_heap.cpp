//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

int main() {
    int *adat = new int(5);
    std::cout << "Az érték: " << *adat << std::endl;
    std::cout << "Mem. addr: " << adat << std::endl;
    delete adat;
    adat = nullptr;
    std::cout << "Mem. addr: " << adat << std::endl;
}