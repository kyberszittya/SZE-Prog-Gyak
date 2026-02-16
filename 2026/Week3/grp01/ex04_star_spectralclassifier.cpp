//
// Created by keret on 2026. 02. 16..
//

#include <iostream>

void star_classifier(char star) {
    switch (star) {
        case 'O': {
            std::cout << "Kékes szín, extrém forró (T > 30 000 K)\n";
            break;
        }
        case 'B': {
            std::cout << "Kékesfehér szín (10 000 K < T < 30 000 K)\n";
            break;
        }
        case 'A': {
            std::cout << "Fehér szín (7 500 K < T < 10 000 K)\n";
            break;
        }
        case 'F': {
            std::cout << "Sárgásfehér szín (6 000 K < T < 7 500 K)\n";
            break;
        }
        case 'G': {
            std::cout << "Sárga szín (5 200 K < T < 6 000 K)\n";
            break;
        }
        case 'K': {
            std::cout << "Narancssárga szín (3 700 K < T < 5 200 K)\n";
            break;
        }
        case 'M': {
            std::cout << "Vörös szín, hűvösebb csillag (T < 3 700 K)\n";
            break;
        }
        default: {
            std::cout << "Ismeretlen spektrálosztály!\n";
            break;
        }
    }
    return;
}

int main(int argc, char *argv[]) {
    char star;
    std::cout << "Add meg a spektrálosztályot: ";
    std::cin >> star;
    star_classifier(star);
    return 0;

}