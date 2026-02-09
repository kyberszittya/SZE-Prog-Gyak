//
// Created by keret on 2026. 02. 08..
//

// ### Életkor Ellenőr (Szelekció)
//__Feladat__: Kérd be a felhasználó életkorát. Ha 18 vagy több, írd ki: "Felnőtt vagy". Ha kevesebb, írd ki: "Még kiskorú vagy".
//- __Fókusz__: if-else szerkezet, összehasonlító operátor (>=).

#include <iostream>

int main(int argc, char **argv) {
    int age;
    std::cout << "Kérem az életkorodat: ";
    std::cin >> age;
    std::cout << "Magyarországon... \n\n";
    if (age >= 18) {
        std::cout << "Felnőtt vagy" << std::endl;
    }
    else {
        std::cout << "Még kiskorú vagy" << std::endl;
    }
}
