// Gyak1_2_Ketszambekerese.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "K�t sz�m bek�r�se\n";
    int x, y;
    std::cout << "Els� sz�m: ";
    std::cin >> x;
    std::cout << "M�sodik sz�m: ";
    std::cin >> y;
    // �sszeg ki�r�sa
    std::cout << "K�t sz�m �sszege: " << x + y << '\n';
    // Szorzat ki�r�sa
    std::cout << "K�t sz�m szorzata: " << x * y << '\n';
    // Szorzat �s �sszeg k�l�nbs�ge
    std::cout << "K�t sz�m szorzat�nak �s �sszeg�nek k�l�nbs�ge: " << (x * y) - (x + y) << '\n';
    return 0;
}
