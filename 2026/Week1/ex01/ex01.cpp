//
// Created by keret on 2026. 02. 08..
//

//###  Az Üdvözlő Gép (I/O alapok)
//__Feladat__: Kérd be a felhasználó keresztnevét, majd köszöntsd őt: "Üdvözöllek a C++ világában, [Név]!"
//- __Fókusz__: string, cin, cout.

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::cout << "Kérem a neved: ";
    std::string name;
    std::cin >> name;
    std::cout << "Üdvözöllek a C++ világában, " << name << "!" << std::endl;
}