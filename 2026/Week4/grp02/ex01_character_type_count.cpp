//
// Created by keret on 2026. 02. 23..
//

#include <iostream>

bool is_vowel(char c) {
    char lower_c = std::tolower(c);
    return (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u');
}

bool is_digit(char c) {
    return (c >= '0' && c <= '9');
}

bool is_space(char c) {
    return std::isspace(c);
}

bool is_punctuation(char c) {
    char lower_c = std::tolower(c);
    return (lower_c == '.' || lower_c == ',' || lower_c == '!' || lower_c == '?' || lower_c == ';' || lower_c == ':');
}

bool is_consonant(char c) {
    return std::isalpha(c) && !is_vowel(c) && !is_punctuation(c) && !is_space(c);
}

unsigned int count_vowel(std::string input) {
    unsigned int count = 0;
    for (char c : input) {
        if (is_vowel(c)) {
            count++;
        }
    }
    return count;
}

unsigned int count_consonant(std::string input) {
    unsigned int count = 0;
    for (char c : input) {
        if (is_consonant(c)) {
            count++;
        }
    }
    return count;
}

unsigned int count_punctuation(std::string input) {
    unsigned int count = 0;
    for (char c : input) {
        if (is_punctuation(c)) {
            count++;
        }
    }
    return count;
}

unsigned int count_space(std::string input) {
    unsigned int count = 0;
    for (char c : input) {
        if (is_space(c)) {
            count++;
        }
    }
    return count;
}

unsigned int count_digit(std::string input) {
    unsigned int count = 0;
    for (char c : input) {
        if (is_digit(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    // Counts
    unsigned int vowel_count = count_vowel(input);
    unsigned int consonant_count = count_consonant(input);
    unsigned int punctuation_count = count_punctuation(input);
    unsigned int space_count = count_space(input);
    unsigned int digit_count = count_digit(input);
    // Output
    std::cout << "Vowels: " << vowel_count << std::endl;
    std::cout << "Consonants: " << consonant_count << std::endl;
    std::cout << "Punctuation: " << punctuation_count << std::endl;
    std::cout << "Spaces: " << space_count << std::endl;
    std::cout << "Digits: " << digit_count << std::endl;
    return 0;
}