// Fel01_Teglahasabszamitas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Teglahasab {
    double x;
    double y;
    double z;
    //Teglahasab(double x, double y, double z) :  x(x), y(y), z(z) {}
    double felulet() {
        return 2.0 * (x * y + y * z + x * z);
    }
    double terfogat() {
        return x * y * z;
    }
};
 
double teglaFelulet(Teglahasab tegla) {
    return 2.0 * (tegla.x * tegla.y + tegla.y * tegla.z +
        tegla.x * tegla.z);
}

int main()
{
    Teglahasab tegla1;
    std::cout << "Teglahasab parameterek bekerese\n";
    std::cout << "X oldal: ";
    std::cin >> tegla1.x;
    std::cout << "Y oldal: ";
    std::cin >> tegla1.y;
    std::cout << "Z oldal: ";
    std::cin >> tegla1.z;
    // Kiírjuk a teglalap oldalait, felületét, térfogatát
    std::cout << "Teglalap oldalai: " << tegla1.x << " " <<
        tegla1.y << " " << tegla1.z << '\n';
    std::cout << "Felulet: " << tegla1.felulet() << '\n';
    std::cout << "Felulet (v2): " << teglaFelulet(tegla1) << '\n';
    std::cout << "Terfogat: " << tegla1.terfogat() << '\n';
}
