//
// Created by keret on 2026. 04. 13..
//

#include <iostream>

struct elem {
    int szam;
    elem *kov;
};

elem* letrehoz(int szamok[]) {
    elem* cur = nullptr;
    for (int i = 0; szamok[i] != -1; i++) {
        //Elem* ujElem = new Elem{szamok[i], cur};
        elem* ujElem = new elem;
        std::cout << "UJ ELEM: " << ujElem << std::endl;
        ujElem->szam = szamok[i];
        ujElem->kov = cur;
        std::cout << "UJ ELEM SZAM " << ujElem->szam << ", KOV " << ujElem->kov << std::endl;
        cur = ujElem;
    }
    return cur;
}

void kiir(elem* jelenlegi) {
    while (jelenlegi != nullptr) {
        std::cout << (*jelenlegi).szam << " ";
        jelenlegi = jelenlegi->kov;
    }
    std::cout << '\n';
}

void felszabadit(elem* jelenlegi) {
    while (jelenlegi != nullptr) {
        elem* kovetkezo = jelenlegi->kov;
        std::cout << "DELETE " << jelenlegi->szam << " " << jelenlegi->kov << std::endl;
        delete jelenlegi;
        jelenlegi = kovetkezo;
    }
    std::cout << '\n';
}

elem* beszurElore(elem* horgony, int szam) {
    if (horgony == nullptr) {
        elem* ujElem = new elem;
        ujElem->szam = szam;
        ujElem->kov = nullptr;
    } else {
        elem* ujElem = new elem;
        ujElem->szam = szam;
        ujElem->kov = horgony;
        horgony = ujElem;
    }
    return horgony;
}

elem* beszurHatra(elem* horgony, int szam) {
    elem* cur = horgony;
    while (cur != nullptr) {
        if (cur->kov == nullptr) {
            elem* ujElem = new elem;
            ujElem->szam = szam;
            ujElem->kov = nullptr;
            cur->kov = ujElem;
            return horgony;
        }
        cur = cur->kov;
    }
    return horgony;
}

int main(int argc, char* argv[]) {
    int sz[] = {1, 2, 3, 4, 5, -1};
    elem* horgony = letrehoz(sz);
    std::cout << "Eredeti lista tartalma:\n";
    kiir(horgony);
    horgony = beszurElore(horgony, 42);
    std::cout << "A lista elejere torteno beszuras utan:\n";
    kiir(horgony);
    horgony = beszurHatra(horgony, 666);
    std::cout << "A lista vegere torteno beszuras utan:\n";
    kiir(horgony);
    felszabadit(horgony);
}