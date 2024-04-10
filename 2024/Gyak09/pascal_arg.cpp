//
// Created by keret on 2024. 04. 10..
//
#include <iostream>

// Pl. pascal_arg.exe 5
int main(int argc, char* argv[]) {
    int n_sorok = std::atoi(argv[1]);
    //std::cout << "Kerem a sorok szamat: ";
    //std::cin >> n_sorok;
    int** triangle;
    triangle = new int*[n_sorok + 1];
    for (int i = 0; i <= n_sorok; i++){
        triangle[i] = new int[i + 1];
    }
    // Elemek kiszámítása
    for (int i = 0; i <= n_sorok; i++){
        for (int j = 0; j < i; j++){
            // Szélső értékek kezelése
            if (j == 0 || j == i - 1){
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
            }
        }
    }
    /// Megjelenítés
    for (int i = 0; i <= n_sorok; i++){
        for (int j = 0; j < i; j++) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << '\n';
    }
    /// Felszabaditas
    delete[] triangle;
    return 0;
}
