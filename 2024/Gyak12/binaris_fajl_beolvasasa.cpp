//
// Created by keret on 2024. 05. 08..
//
#include <iostream>
#include <fstream>

int main() {
    std::ifstream binaris_fajl("img.png", std::ios::binary);
    if (binaris_fajl.is_open()) {
        binaris_fajl.seekg(0, std::ios_base::end);
        std::streampos vege = binaris_fajl.tellg();
        char *tomb = new char[vege];
        binaris_fajl.seekg(0, std::ios_base::beg);
        binaris_fajl.read(tomb, vege);
        for (int i = 0; i < vege; i++){
            std::cout << tomb[i];
        }
        std::cout << '\n';
        delete tomb;
        binaris_fajl.close();
    }
    return 0;
}