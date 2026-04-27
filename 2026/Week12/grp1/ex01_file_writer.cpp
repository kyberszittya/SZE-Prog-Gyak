//
// Created by keret on 2026. 04. 20..
//
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Kiiratas a fajlba: ";
    std::ofstream outfile;
    outfile.open("kimenet.txt");
    if (!outfile.is_open()) {
        std::cout << "Nem lehet megnyitni a kimenet.txt fajlt!" << std::endl;
        return 1;
    }
    outfile << "Szeretek programozni\n";
    outfile << "Ez egy tesz fajl\n";
    outfile << "KONBAN WA\n";
    outfile.close();

}