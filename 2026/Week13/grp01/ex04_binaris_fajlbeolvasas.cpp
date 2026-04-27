//
// Created by keret on 2026. 04. 27..
//

#include <iostream>
#include <fstream>

int main() {
    std::ifstream input("OV.png", std::ios::binary);
    if (!input.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }
    input.seekg(0, std::ios::end);
    int size = input.tellg();
    input.seekg(0, std::ios::beg);

    char* buffer = new char[size];
    input.read(buffer, size);
    std::cout << "Meret: " << size << std::endl;

    delete[] buffer;

    input.close();
}