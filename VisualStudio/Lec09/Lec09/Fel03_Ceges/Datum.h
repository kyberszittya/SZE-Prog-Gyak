//#pragma once
#ifndef DATUM_H
#define DATUM_H

#include <iostream>

struct Datum {
    int ev;
    int honap;
    int nap;

    void datumbeolvas();
    void kiiras();
    int compare(Datum* masik);
};


#endif
