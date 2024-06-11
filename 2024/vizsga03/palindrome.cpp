//
// Created by keret on 2024. 05. 29..
//

#include <iostream>
#include <string>

bool ispalindrome(std::string text);

bool ispalindrome(std::string text){
    for (unsigned int i = 0; i < text.length(); i++){
        if (text[i] != text[text.length() - i - 1]){
            return false;
        }
    }
    return true;

}


int main(){
    std::cout << ispalindrome("gorog") << '\n';
    std::cout << ispalindrome("gorogzita") << '\n';
    std::cout << ispalindrome("indulagorogaludni") << '\n';
    std::cout << ispalindrome("apa") << '\n';
    std::cout << ispalindrome("jolvanezigy") << '\n';
    return 0;
}