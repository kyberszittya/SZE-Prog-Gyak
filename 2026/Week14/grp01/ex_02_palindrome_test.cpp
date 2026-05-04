//
// Created by keret on 2026. 05. 04..
//

#include <iostream>
#include <string>

bool isPalindrome(std::string text) {
    unsigned int len = text.length();
    for (unsigned int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << isPalindrome("") << std::endl;
    std::cout << isPalindrome("gorog") << std::endl;
    std::cout << isPalindrome("parap") << std::endl;
    std::cout << isPalindrome("papucs") << std::endl;
    std::cout << isPalindrome("bolton") << std::endl;
    std::cout << isPalindrome("tetszik ez a hely, szivesen laknek itt") << std::endl;
}