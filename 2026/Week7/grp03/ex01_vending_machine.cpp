//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#define ROWS 3
#define COLS 3

int main() {
    int vending_machine_prices[ROWS][COLS] = {
        {250, 300, 350},
        {400, 350, 250},
        {250, 400, 350}
    };
    std::cout << "Kérem a sor és oszlop indexet" << "(1-" << ROWS << "), (1-" << COLS << ")" << std::endl;
    int row, col;
    std::cin >> row >> col;
    // Decrement to convert from 1-based to 0-based indexing
    row--;
    col--;
    // Print the price of the selected item
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        std::cout << "Az ár: " << vending_machine_prices[row][col] << " Ft" << std::endl;
    } else {
        std::cout << "Hibás indexek!" << std::endl;
    }
    return 0;
}