//
// Created by keret on 2024. 04. 21..
//

#include "datum.h"

#include <iostream>

Datum datum_beolvas() {
    Datum datum;
    std::cout << "Ev: ";
    std::cin >> datum.year;
    std::cout << "Honap: ";
    std::cin >> datum.month;
    std::cout << "Nap: ";
    std::cin >> datum.day;
    return datum;
}

void datum_kiiras(Datum* datum) {
    std::cout << datum->year << '.' << datum->month << '.' << datum->day;
}

int datum_osszehasonlit(Datum* dat0, Datum* dat1) {
    if (dat0->year < dat1-> year)
        return -1;
    if ((dat0->year == dat1-> year) && (dat0->month < dat0->month))
        return -1;
    if ((dat0->year == dat1-> year) &&
            (dat0->month == dat0->month) &&
            (dat0->day < dat0->day))
        return -1;
    if ((dat0->year == dat1-> year) &&
        (dat0->month == dat0->month) &&
        (dat0->day == dat0->day))
        return 0;
    return -1;
}