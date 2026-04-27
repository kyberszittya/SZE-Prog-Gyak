//
// Created by keret on 2026. 04. 27..
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f("input.txt");
    if (!f.is_open()) {
        cerr << "Failed to open the file." << std::endl;
        return 1;
    }
    f.seekg(0, std::ios::end);
    unsigned length = f.tellg();
    cout << "Fájl mérete: " << length << std::endl;
    f.close();
}