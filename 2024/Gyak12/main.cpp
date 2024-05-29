#include <iostream>
#include <ostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream of("elsofajl.txt");
    of << "Csodaprogramok jeeee\n";
    of << "Ledobtam két atombombát\n";
    of << "Cukorcsokoladegyar\n";
    of.close();
    std::ifstream inputfile("elsofajl.txt");
    if (!inputfile.is_open()) {
        std::cout << "Nem található a fájl!\n";
        return -1;
    }
    std::string line;
    while (std::getline(inputfile, line)){
        std::cout << line << '\n';
    }
    /*
    while (!inputfile.eof()){
        inputfile >> line;
        std::cout << line << '\n';
    }
     */

    inputfile.close();
    std::ifstream inputfile_binary("elsofajl.txt", std::ifstream::binary | std::ifstream::ate);
    std::cout << inputfile.tellg() << '\n';
    inputfile_binary.close();
    return 0;
}
