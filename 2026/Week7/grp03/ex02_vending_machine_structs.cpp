//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#define ROWS 3
#define COLS 3

struct Product {
    std::string name;
    int price;
};

int main() {
    Product products[ROWS][COLS] = {
        {{"Soda", 150}, {"Cola", 170}, {"Soproni", 200}},
        {{"Chips", 100}, {"Cookies", 120}, {"Nuts", 130}},
        {{"Candy", 50}, {"Chocolate", 80}, {"Gum", 30}}
    };

    std::cout << "Vending Machine Inventory:" << std::endl;
    // Prompt user to select a product
    std::cout << "Please select a product by entering index (1-"<< ROWS << " for row, 1-" << COLS << " for column): ";
    int row, col;
    std::cin >> row >> col;
    // Decrement input
    row--;
    col--;
    // Validate input
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        std::cerr << "Invalid selection. Please enter valid indices." << std::endl;
        return 1;
    }
    // Get selected product
    Product selectedProduct = products[row][col];
    std::cout << "You selected: " << selectedProduct.name << " which costs " << selectedProduct.price << " cents." << std::endl;

    return 0;
}