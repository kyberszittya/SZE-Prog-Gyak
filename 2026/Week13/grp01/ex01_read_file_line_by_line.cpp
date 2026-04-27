//
// Created by keret on 2026. 04. 27..
//

#include <iostream>
#include <fstream>


int main() {
    std::ifstream infile("input.txt");
    if (!infile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }
    while (!infile.eof()) {
        std::string line;
        std::getline(infile, line);
        std::cout << line << std::endl;
    }
    infile.close();
    return 0;
}