// Ex04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*C t�pus� karaktert�mb�k foglal�sa:

Olvasson be egy sz�veget!
Hozzon l�tre egy a sz�veg hossz�nak megfelel� m�ret� t�mb�t!
M�solja �t a sz�veget a sz�m�ra l�trehozott t�mbbe!
�rassa ki a sz�veget!
Szabad�tsa fel a lefoglalt mem�riater�letet!
*/

#include <iostream>
#include <string>

// Mem�riasziv�rg�s ellen�rz�se
#define _CRTDBG_MAP_ALLOC
int main()
{
    // Mem�riasziv�rg�s ellen�rz�se
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |
    		_CRTDBG_LEAK_CHECK_DF);
    // Programk�d
    std::string text;
    std::cout << "Adjon meg egy sz�veget: ";
    std::getline(std::cin, text);
    char* p = new char[text.length() + 1];
    for (int i = 0; i < text.length(); i++)
    {
		p[i] = text[i];
	}
    // Lez�r� null karakter
    p[text.length()] = '\0';
    // Ki�r�s
    std::cout << "Masolva: " << p << std::endl;
    // Mem�ria felszabad�t�sa
    delete[] p;
}
