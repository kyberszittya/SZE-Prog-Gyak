//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

int main() {
    double* din_adat = new double(3.144354);
    std::cout << "Az érték: " << *din_adat << std::endl;
    std::cout << "Mem. addr: " << din_adat << std::endl;
    delete din_adat;
    din_adat = nullptr;
    std::cout << "Mem. addr: " << din_adat << std::endl;
}