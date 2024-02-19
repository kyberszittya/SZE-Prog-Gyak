//
// Created by keret on 2024. 02. 14..
//
#include <iostream>
// Magasság bekérése után
// lépcső kirajzolása (i. sorban i db '*')

int main (){
    int magassag = 0;
    std::cout << "Lepcso kirajzolasa, magassag: ";
    std::cin >> magassag;
    for (unsigned int i = 1; i <= magassag; i++){
        for (unsigned int ii = 0; ii < i; ii++){
            std::cout << "*";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    // Fuggoleges tukrozes
    for (unsigned int i = 1; i <= magassag; i++){
        for (unsigned int ii = 0; ii < magassag; ii++){
            if (i < magassag - ii){
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }

        }
        std::cout << '\n';
    }
    return 0;
}