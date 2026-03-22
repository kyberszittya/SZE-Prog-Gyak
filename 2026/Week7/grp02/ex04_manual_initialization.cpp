//
// Created by keret on 2026. 03. 16..
//

#include <iostream>

#define WORD_CNT 7
#define WORD_LEN 8

int main() {
    char arr[WORD_CNT][WORD_LEN] = {
        "C++",
        "Java",
        "Python",
        "Rust",
        "Go",
        "Scala",
        "Nihongo"
    };
    for (int i = 0; i < WORD_CNT; ++i) {
        for (int j = 0; j < WORD_LEN; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}