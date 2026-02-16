//
// Created by keret on 2026. 02. 16..
//

#include <iostream>

void quantum_gate_selector(int gate) {
    switch (gate) {
        case 1:
            std::cout << "Pauli-X\n";
            std::cout << "Bit-flip kapu (a 0-ból 1 lesz, az 1-ből 0).\n";
            break;
        case 2:
            std::cout << "Pauli-Y\n";
            std::cout << "Bit és fázis-flip kapu.\n";
            break;
        case 3:
            std::cout << "Pauli-Z\n";
            std::cout << "Fázis-flip kapu.\n";
            break;
        case 4:
            std::cout << "Hadamard (H)\n";
            std::cout << "Szuperpozíciót létrehozó kapu.\n";
            break;
        default:
            std::cout << "Ismeretlen művelet!\n";
            break;

    }

}

int main(int argc, char *argv[]) {
    int gate;
    std::cout << "Add meg a kvantum-kapu számát: ";
    std::cin >> gate;
    quantum_gate_selector(gate);

}