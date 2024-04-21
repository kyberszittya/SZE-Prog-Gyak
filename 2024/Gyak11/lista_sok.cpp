//
// Created by keret on 2024. 04. 21..
//

#include <iostream>

struct LancElem {
    int value;
    LancElem* next;
};

#define N 6000

LancElem* beszurElejere(LancElem* lanc, int value) {
    /// Elso elem letrehozasa
    LancElem *uj = new LancElem();
    uj->value = value;
    uj->next = lanc;
    return uj;
}

LancElem* beszurVegere(LancElem* lanc, int value) {
    /// Elso elem letrehozasa
    LancElem *uj = new LancElem();
    uj->value = value;
    uj->next = nullptr;
    if (lanc == nullptr) {
        return uj;
    }else {
        lanc->next = uj;
        return uj;
    }
}



void felszabadit(LancElem* elso) {
    LancElem* lanc = elso;
    while (lanc != nullptr){
        LancElem* elozo = lanc;
        lanc = lanc->next;
        delete elozo;
    }
}

void kiiras(LancElem* lanc) {
    LancElem* tmp = lanc;
    while (tmp != nullptr){
        std::cout << tmp->value << " ";
        tmp = tmp->next;
    }
    std::cout << '\n';
}

int main() {
    srand(time(NULL));


    LancElem* lanc = nullptr;
    LancElem* elso = nullptr;

    LancElem* hatso = nullptr;
    // Feltöltés
    for (int i = 0; i < N; i++){
        int value = rand() % 100;
        lanc = beszurVegere(lanc, value);
        if (elso == nullptr){
            elso = lanc;
        }
        hatso = beszurElejere(hatso, value);
    }
    // Kiiras
    std::cout << "Beszur vegere: \n";
    kiiras(elso);
    std::cout << "Beszur elejere: \n";
    kiiras(hatso);
    // Felszabaditas
    felszabadit(elso);
    felszabadit(hatso);

    return 0;
}
