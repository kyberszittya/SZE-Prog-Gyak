//
// Created by keret on 2024. 04. 21..
//

#include <limits>
#include "ceg.h"

Ceg ceg_beolvasas() {
    Ceg ceg;
    std::cout << "Ceg neve: ";
    getline(std::cin, ceg.name);
    std::cout << "Alapitas eve: ";
    ceg.datum = datum_beolvas();
    std::cout << "Telephelyek szama: ";
    std::cin >> ceg.cnt_telephelyek;
    ceg.telephelyek = new Telephely[ceg.cnt_telephelyek];
    for (int i = 0; i < ceg.cnt_telephelyek; i++){
        Telephely telephely = telephely_beolvasas();
        ceg.telephelyek[i] = telephely;
    }
    return ceg;
}

int eves_bevetel(Ceg* ceg) {
    int total = 0;
    for (int i = 0; i < ceg->cnt_telephelyek; i++){
        total += ceg->telephelyek[i].revenue;
    }
    return total;
}

void ceg_kiirasa(Ceg* ceg) {
    std::cout << "Ceg neve: " << ceg->name << '\n';
    std::cout << "Alapitva: ";
    datum_kiiras(&ceg->datum); std::cout << '\n';
    std::cout << "Telephelyek szama: " << ceg->cnt_telephelyek << '\n';
    for (int i = 0; i < ceg->cnt_telephelyek; i++) {
        telephely_kiirasa(&ceg->telephelyek[i]);
    }
    std::cout << "Eves bevetel: " << eves_bevetel(ceg);
    std::cout << std::endl;
}

void ceg_torles(Ceg* ceg){
    delete[] ceg->telephelyek;
}