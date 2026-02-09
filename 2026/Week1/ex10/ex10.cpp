//
// Created by keret on 2026. 02. 09..
//
// ### A Kis Matematikus (Operátor prioritás)
//__Feladat__: Hozz létre három fix számot. Kérdezd meg a felhasználótól: "Mennyi 10 + 5 * 2?". Ha a helyes választ adja (20), dicsérd meg, ha 30-at, magyarázd el a műveleti sorrendet!
//- __Fókusz__: Precedencia tudatosítása, interaktív visszajelzés.

#include <iostream>

int main(int argc, char **argv) {
    int answer = 20;
    int _bad_answer = 30;
    int user_answer;
    std::cout << "Mennyi 10 + 5 * 2?\n";
    std::cout << "Eredmény: ";
    std::cin >> user_answer;
    if (user_answer == answer) {
        std::cout << "Helyes válasz! " << (10 + 5 * 2) << std::endl;
    } else if (user_answer == _bad_answer) {
        std::cout << "Helytelen válasz! Helyes válasz:" << (10 + 5 * 2) << std::endl;
        std::cout << "Precedencia: \n";
        // Explain operator precedence
        std::cout << "10 + 5 * 2 = " << "10 + (5 * 2) = " << " 10 + (10) = " << "20" << std::endl;
        std::cout << "Szorzást előbb kell elvégezni, mint az összeadást" << std::endl;
    } else {
        std::cout << "Távolról sem jó válasz!" << std::endl;
    }
}
