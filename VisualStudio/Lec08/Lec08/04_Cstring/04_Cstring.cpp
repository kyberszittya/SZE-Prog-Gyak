// 04_Cstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

#define BUFFER_LENGTH 1024

int main()
{
    char buffer[BUFFER_LENGTH];
    std::cout << "Rappelj: ";
    std::cin >> buffer;
    // CString felépítése
    // Lore ipsum, lorem ipsum\0 <- a \0 karakter jelöli a szöveg végét
    int hossz = 0;
    for (hossz; hossz < BUFFER_LENGTH; hossz++) {
        if (buffer[hossz] == '\r') {
            break;
        }
    }
    
    std::cout << "A beirt szoveg hossza: " << hossz << '\n';
    char* rap = new char[hossz + 1];
    if (rap == nullptr) {
        std::cout << "Nem sikerult a memoriat lefoglalni\n";
        return -1;
    }
    // A szöveg átmásolása a bufferbõl
    strcpy(rap, buffer);
    // A masolt rap szöveg kiiratasa
    std::cout << "A masolt rap szoveg:\n" << rap << '\n';
    // Ne feledkezzünk el a dinamikusan lefoglalt memoriat felszabaditani
    delete[] rap;
    return 0;
}
