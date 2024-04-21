//
// Created by keret on 2024. 04. 21..
//

#ifndef GYAK10_CEG_H
#define GYAK10_CEG_H

#include <iostream>

#include "telephely.h"
#include "datum.h"

struct Ceg {
    std::string name;
    Datum datum;
    Telephely* telephelyek;
    int cnt_telephelyek;
};

Ceg ceg_beolvasas();
int eves_bevetel(Ceg* ceg);
void ceg_kiirasa(Ceg* ceg);
void ceg_torles(Ceg* ceg);

#endif //GYAK10_CEG_H
