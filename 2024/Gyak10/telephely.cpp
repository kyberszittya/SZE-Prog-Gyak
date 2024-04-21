//
// Created by keret on 2024. 04. 21..
//
#include <limits>
#include "telephely.h"

Telephely telephely_beolvasas() {
    Telephely telephely;
    std::cout << "Telephely neve: ";
    std::cin >> telephely.name;
    std::cout << "Alapitas eve: ";
    telephely.foundation_date = datum_beolvas();
    std::cout << "Bevetel: ";
    std::cin >> telephely.revenue;
    return telephely;
}
void telephely_kiirasa(Telephely* telephely) {
    std::cout << "Telephely neve: " << telephely->name << '\n';
    std::cout << "Alapitva: ";
    datum_kiiras(&telephely->foundation_date); std::cout << '\n';
    std::cout << "Bevetel: " << telephely->revenue << '\n';
}