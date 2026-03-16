//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

int main() {
    char arr[6][7] = {
        "C++",
        "Java",
        "Python",
        "Rust",
        "Go",
        "Scala"
    };
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}