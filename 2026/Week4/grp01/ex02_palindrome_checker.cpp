//
// Created by keret on 2026. 02. 23..
//

#include <iostream>

bool is_palindrome(std::string word) {

    for (size_t i = 0; i < word.size() / 2; ++i) {
        if (word[i] != word[word.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    if (is_palindrome(word)) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }
    return 0;
}