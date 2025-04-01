// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*C típusú karaktertömbök foglalása:

Olvasson be egy szöveget!
Hozzon létre egy a szöveg hosszának megfelelõ méretû tömböt!
Másolja át a szöveget a számára létrehozott tömbbe!
Írassa ki a szöveget!
Szabadítsa fel a lefoglalt memóriaterületet!
*/

#include <iostream>
#include <string>

// Memóriaszivárgás ellenõrzése
#define _CRTDBG_MAP_ALLOC
int main()
{
    // Memóriaszivárgás ellenõrzése
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |
    		_CRTDBG_LEAK_CHECK_DF);
    // Programkód
    std::string text;
    std::cout << "Adjon meg egy szöveget: ";
    std::getline(std::cin, text);
    char* p = new char[text.length() + 1];
    for (int i = 0; i < text.length(); i++)
    {
		p[i] = text[i];
	}
    // Lezáró null karakter
    p[text.length()] = '\0';
    // Kiírás
    std::cout << "Masolva: " << p << std::endl;
    // Memória felszabadítása
    delete[] p;
}
