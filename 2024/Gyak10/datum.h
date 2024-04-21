//
// Created by keret on 2024. 04. 21..
//

#ifndef GYAK10_DATUM_H
#define GYAK10_DATUM_H

struct Datum {
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

Datum datum_beolvas();
void datum_kiiras(Datum* datum);
int datum_osszehasonlit(Datum* dat0, Datum* dat1);

#endif //GYAK10_DATUM_H
