//
// Created by keret on 2024. 05. 29..
//
/*
Ingatlanok értékeit gyűjtjük össze egy láncolt listába.
Egy láncolt lista elemben, a következő elemeket tároljuk:
 - Terület (négyzetméterben)
 - Érték (Ft-ban)

Feladat a láncolt lista struktúra elkszítése (IngatlanLista), beszúr elejére művelet elkészítése, az ingatlanok által lefedett terület összegzése és az átlagos ingatlanérték meghatározása (az összterület felhasználásával).

Segítségképpen megadtuk a függvények fejléceit.

 */

#include <iostream>
#include <cmath>

struct IngatlanLista {
    double area;
    double value;
    IngatlanLista* next;
};

IngatlanLista* beszurElejere(IngatlanLista* lista, double area, double value);
double totalArea(IngatlanLista* lista);
double averageArea(IngatlanLista* lista);

IngatlanLista* beszurElejere(IngatlanLista* lista, double area, double value){
    IngatlanLista* tmp = new IngatlanLista();
    tmp->value = value;
    tmp->next = lista;
    tmp->area = area;
    return tmp;
}

double totalArea(IngatlanLista* lista){
    IngatlanLista* cur = lista;
    double totalarea = 0.0;
    while (cur != nullptr){
        totalarea += cur->area;
        cur = cur->next;
    }
    return totalarea;
}

double averageArea(IngatlanLista* lista){
    double area = totalArea(lista);
    if (area == 0){
        return 0;
    }
    double totalValue = 0.0;
    IngatlanLista * cur = lista;
    while (cur != nullptr) {
        totalValue += cur->value;
        cur = cur->next;
    }
    return totalValue/area;
}

void freeList(IngatlanLista* lista) {
    IngatlanLista* cur = lista;
    while (cur != nullptr) {
        IngatlanLista *tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}


void test1() {
    IngatlanLista* list = nullptr;
    list = beszurElejere(nullptr, 10.0, 567);
    list = beszurElejere(list, 5.0, 367);
    list = beszurElejere(list, 7.0, 478);
    std::cout << totalArea(list);
    freeList(list);
}

void test2() {
    IngatlanLista* list = nullptr;
    list = beszurElejere(nullptr, 10.0, 1000);
    list = beszurElejere(list, 5.0, 500);
    list = beszurElejere(list, 5.0, 500);
    std::cout << totalArea(list) << '\n';
    std::cout << averageArea(list) << '\n';
    freeList(list);
}

void test3() {
    IngatlanLista* list = nullptr;
    list = beszurElejere(nullptr, 10.0, 1000);
    list = beszurElejere(list, 5.0, 750);
    list = beszurElejere(list, 7.0, 500);
    list = beszurElejere(list, 3.0, 450);
    std::cout << totalArea(list) << '\n';
    std::cout << averageArea(list) << '\n';
    freeList(list);
}

void test4() {
    IngatlanLista* list = nullptr;
    list = beszurElejere(nullptr, 0, 0);
    list = beszurElejere(list, 0, 0);
    list = beszurElejere(list, 0, 0);
    list = beszurElejere(list, 0, 0);
    std::cout << totalArea(list) << '\n';
    std::cout << averageArea(list) << '\n';
    freeList(list);
}

void test5() {
    IngatlanLista* list = nullptr;
    list = beszurElejere(nullptr, 113, 2501);
    list = beszurElejere(list, 165, 3215);
    list = beszurElejere(list, 67, 1456);
    list = beszurElejere(list, 17, 710);
    list = beszurElejere(list, 23, 920);
    std::cout << totalArea(list) << '\n';
    std::cout << averageArea(list) << '\n';
    freeList(list);
}

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    test5();

}