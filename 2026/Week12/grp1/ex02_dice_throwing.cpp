//
// Created by keret on 2026. 04. 20..
//

#include <iostream>
#include <random>
#include <fstream>

int main(int argc, char* argv[]) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);

    std::ofstream outfile;
    outfile.open("kocka.txt");
    int current_throw;
    do {
        current_throw = dis(gen);
        std::cout << "Dobas: " << current_throw << std::endl;
        outfile << current_throw << std::endl;
    }while (current_throw != 6);
    outfile.close();

    return 0;
}