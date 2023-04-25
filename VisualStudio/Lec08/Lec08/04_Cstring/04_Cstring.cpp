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
    // CString fel�p�t�se
    // Lore ipsum, lorem ipsum\0 <- a \0 karakter jel�li a sz�veg v�g�t
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
    // A sz�veg �tm�sol�sa a bufferb�l
    strcpy(rap, buffer);
    // A masolt rap sz�veg kiiratasa
    std::cout << "A masolt rap szoveg:\n" << rap << '\n';
    // Ne feledkezz�nk el a dinamikusan lefoglalt memoriat felszabaditani
    delete[] rap;
    return 0;
}
