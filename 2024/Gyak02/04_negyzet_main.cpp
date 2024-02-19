//
// Created by keret on 2024. 02. 14..
//

#include <iostream>
#include <limits>

// Kérjünk egy számot,
// rajzoljunk ennyi karakter széles négyzetet a képernyőre

int main(){
    unsigned int szelesseg;
    std::cout << "Kerek be egy szelesseget: ";
    std::cin >> szelesseg;

    for (int i = 0; i < szelesseg; i++){
        for (int ii = 0; ii < szelesseg; ii++){
            if ((i == ii) || ((szelesseg - i - 1) == ii)){
                std::cout << "X";
            }
            else {
                std::cout << "O";
            }
        }
        std::cout << '\n';
    }

    return 0;
}