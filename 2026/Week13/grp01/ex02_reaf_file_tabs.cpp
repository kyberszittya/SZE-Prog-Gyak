//
// Created by keret on 2026. 04. 27..
//

#include <iostream>
#include <fstream>
#include <string>

struct Person {
    std::string name;
    int score;
};

int main() {
    std::ifstream infile("lista.txt");
    if (!infile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    Person p;
    p.score = 0;
    Person p_last;

    while (!infile.eof()) {
        // Seekg tab separated values
        std::getline(infile, p_last.name, '|');
        infile >> p_last.score;
        infile.ignore();
        if (p_last.score > p.score) {
            p = p_last;
        }
    }
    std::cout << "You're winner: " << p.name << " " << p.score << std::endl;
    infile.close();
}