//
// Created by keret on 2026. 02. 23..
//
#include <iostream>

unsigned int word_count(const std::string &input) {
    unsigned int count = 0;
    bool in_word = false;
    for (char c : input) {
        if (std::isspace(c)) {
            if (in_word) {
                count++;
                in_word = false;
            }
        } else {
            in_word = true;
        }
    }
    if (in_word) {
        count++;
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    unsigned int count = word_count(input);
    std::cout << "Word count: " << count << std::endl;
    return 0;
}