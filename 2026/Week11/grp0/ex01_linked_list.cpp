//
// Created by keret on 2026. 04. 13..
//
/*
Készítsen el néhány, egyszeresen láncolt lista manipulálását végző függvényt!
1 Az elem* letrehoz(int szamok[]) függvény feladata, hogy a paraméterként
  kapott tömb elemeit egyesével beszúrja a lista elejére.
  A tömb utolsó elemének értéke mindig -1,
  amit már nem kell a listába illeszteni (végjel).
2 A void kiir(elem* horgony) célja a létrehozott lista elemeinek kijelzése
  a szabvány kimeneten. Egy-egy szóközzel válassza el a lista elemeit!
3 Végül a void felszabadit(elem* horgony) szabadítsa fel a lista által
  lefoglalt memóriát!

Egy listaelemet a következő struktúra valósít meg (már definiáltuk, Önnek csak használnia kell):

struct elem {
  int szam;
  elem* kov;
};
*/

#include <iostream>

struct Elem {
  int szam;
  Elem *kov;
};

Elem* letrehoz(int szamok[]) {
  Elem* cur = nullptr;
  for (int i = 0; szamok[i] != -1; i++) {
    //Elem* ujElem = new Elem{szamok[i], cur};
    Elem* ujElem = new Elem;
    std::cout << "UJ ELEM: " << ujElem << std::endl;
    ujElem->szam = szamok[i];
    ujElem->kov = cur;
    std::cout << "UJ ELEM SZAM " << ujElem->szam << ", KOV " << ujElem->kov << std::endl;
    cur = ujElem;
  }
  return cur;
}

void kiir(Elem* jelenlegi) {
  while (jelenlegi != nullptr) {
    std::cout << (*jelenlegi).szam << " ";
    jelenlegi = jelenlegi->kov;
  }
  std::cout << '\n';
}

void felszabadit(Elem* jelenlegi) {
  while (jelenlegi != nullptr) {
    Elem* kovetkezo = jelenlegi->kov;
    std::cout << "DELETE " << jelenlegi->szam << " " << jelenlegi->kov << std::endl;
    delete jelenlegi;
    jelenlegi = kovetkezo;
  }
  std::cout << '\n';
}

int main(int argc, char const *argv[]) {
  int sz[] = {1, 2, 3, 4, 5, -1};
  Elem* horgony = letrehoz(sz);
  kiir(horgony);
  felszabadit(horgony);
}