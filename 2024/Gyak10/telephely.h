//
// Created by keret on 2024. 04. 21..
//

#ifndef GYAK10_TELEPHELY_H
#define GYAK10_TELEPHELY_H

#include <iostream>

#include "datum.h"

struct Telephely {
    std::string name;
    Datum foundation_date;
    int revenue;
};

Telephely telephely_beolvasas();
void telephely_kiirasa(Telephely* telephely);

#endif //GYAK10_TELEPHELY_H
