#include <iostream>

/*
 *
 * Láncolt lista feltöltés, kiíratás

Írjon programot, amely egy tömb elemeivel láncolt listát készít!
A tömb utolsó eleme legyen `-1`, ez már ne kerüljön a listába!
 Az elemeket szúrja be a lista elejére!
 Figyeljük meg, hogy így a lista fordított lesz a tömbhöz képest!
Végül jelezzük ki az egyes elemeket rendre!

 Az előző feladatot bővítse tovább úgy, hogy olyan függvényeket ír,
 melyekkel a lista elejére és
 végére beszúrást szemléltethetjük!
 Próbálja is ki különböző értékekkel a függvényeket!
 */

#include <iostream>

struct LancElem {
    int value;
    LancElem* next;
};

#define N 6

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

    int tomb[N] = {3, 7, 8, 9, 0, 9};

    LancElem* lanc = nullptr;
    LancElem* elso = nullptr;

    LancElem* hatso = nullptr;
    // Feltöltés
    for (int i = 0; i < N; i++){
        if (tomb[i] != -1) {
            lanc = beszurVegere(lanc, tomb[i]);
            if (elso == nullptr){
                elso = lanc;
            }
            hatso = beszurElejere(hatso, tomb[i]);
        }
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

