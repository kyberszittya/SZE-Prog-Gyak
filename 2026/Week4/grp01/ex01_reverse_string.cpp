//
// Created by keret on 2026. 02. 23..
//

#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_string(const std::string &input) {
    std::string reversed;
    for (int i = input.size() - 1; i >= 0; --i) {
        reversed += input[i];
    }
    return reversed;
}

std::string reverse_string_inplace(std::string input) {
    for (unsigned int left = 0, right = input.size() - 1; left < right; ++left, --right) {
        char temp = input[left];
        input[left] = input[right];
        input[right] = temp;
    }
    return input;
}

std::string reverse_string_inplace_swap(std::string input) {
    for (unsigned int left = 0, right = input.size() - 1; left < right; ++left, --right) {
        std::swap(input[left], input[right]);
    }
    return input;
}

std::string reverse_string_builtin(const std::string &input) {
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reversed = reverse_string(input);
    std::cout << "Reversed (manual): " << reversed << std::endl;

    std::string reversed_inplace = reverse_string_inplace(input);
    std::cout << "Reversed (in-place): " << reversed_inplace << std::endl;

    std::string reversed_inplace_swap = reverse_string_inplace_swap(input);
    std::cout << "Reversed (in-place swap): " << reversed_inplace_swap << std::endl;

    std::string reversed_builtin = reverse_string_builtin(input);
    std::cout << "Reversed (built-in): " << reversed_builtin << std::endl;

    return 0;
}


