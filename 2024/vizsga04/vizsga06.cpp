//
// Created by keret on 2024. 06. 13..
//
/*
Egy személyek magasságát és testsúlyát kezelő alkalmazást készítest. Fejezd be a következő függvényeket:
 - PersonnelList* beszurElejere(PersonnelList* lista, std::string name, double height, double weight): beszur a lista elejere egy elemet
 - unsigned int cntPersons: visszaadja a listában található személyek számát
 - double averageHeight(PersonnelList* lista): az átlagos magasságot adja vissza
 - void calcBMI(PersonnelList* lista): kiszámítja minden egyes személyre a testtömegindexet. A képlet:
 - Person maxHeight(PersonnelList* lista): visszatér a legmagasabb személlyel
 - Person minHeight(PersonnelList* lista): visszatér a legalacsonyabb személlyel


Segítségképpen megadtuk a függvények fejléceit és a felhasználható struktúrákat! Figyeljen a 0 bemeneti értékekre.
 */

#include <iostream>

struct Person {
    double height;
    double weight;
    double BMI;
    std::string name;
};

struct PersonnelList {
    Person person;
    PersonnelList* next;
};

PersonnelList* beszurElejere(PersonnelList* lista, std::string name, double height, double weight);
unsigned int cntPersons(PersonnelList* lista);
double averageHeight(PersonnelList* lista);
void calcBMI(PersonnelList* lista);
Person* maxHeight(PersonnelList* lista);
Person* minHeight(PersonnelList* lista);

PersonnelList* beszurElejere(PersonnelList* lista, std::string name, double height, double weight){
    PersonnelList* tmp = new PersonnelList();
    tmp->person.height = height;
    tmp->person.weight = weight;
    tmp->person.name = name;
    tmp->next = lista;
    return tmp;
}



unsigned int cntPersons(PersonnelList* list){
    PersonnelList * cur = list;
    unsigned int cnt = 0;
    while (cur != nullptr) {
        cnt++;
        cur = cur->next;
    }
    return cnt;
}

double averageHeight(PersonnelList* lista){
    double totalValue = 0.0;
    PersonnelList * cur = lista;
    while (cur != nullptr) {
        totalValue += cur->person.height;
        cur = cur->next;
    }
    unsigned int cnt = cntPersons(lista);
    if (cnt == 0) return 0.0;
    return totalValue/cnt;
}

void calcBMI(PersonnelList* lista) {
    PersonnelList * cur = lista;
    while (cur != nullptr) {
        double height = cur->person.height;
        if (height != 0.0){
            double bmi = cur->person.weight/(cur->person.height*cur->person.height);
            cur->person.BMI = bmi;
        }

        cur = cur->next;
    }
}

Person* maxHeight(PersonnelList* list){
    PersonnelList * cur = list;
    Person* maxPerson = nullptr;
    while (cur != nullptr) {
        maxPerson = &(list->person);
        if (cur->person.height > maxPerson->height){
            maxPerson = &(cur->person);
        }
        cur = cur->next;
    }
    return maxPerson;
}

Person* minHeight(PersonnelList* list){
    PersonnelList * cur = list;
    Person* minPerson = nullptr;
    while (cur != nullptr) {
        minPerson = &(list->person);
        if (cur->person.height < minPerson->height){
            minPerson = &(cur->person);
        }
        cur = cur->next;
    }
    return minPerson;
}

void freeList(PersonnelList* lista) {
    PersonnelList* cur = lista;
    while (cur != nullptr) {
        PersonnelList *tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}

void printPersons(PersonnelList* list){
    PersonnelList * cur = list;
    std::cout << "Name, height, weight, bmi\n";
    while (cur != nullptr) {
        std::cout << cur->person.name << ' ' << cur->person.height << ' ' << cur->person.weight << ' ' << cur->person.BMI << '\n';
        cur = cur->next;
    }
}



void test1() {
    PersonnelList* list = nullptr;
    list = beszurElejere(list, "Rei Hino", 1.62, 51);
    list = beszurElejere(list, "Ami Mizuno",1.6, 50);
    calcBMI(list);
    printPersons(list);
    std::cout << averageHeight(list) << '\n';
    std::cout << maxHeight(list)->name << '\n';
    std::cout << minHeight(list)->name << '\n';
    freeList(list);
}

void test2() {
    PersonnelList* list = nullptr;
    list = beszurElejere(list, "Floor Jansen", 1.832, 75);
    list = beszurElejere(list, "Suzuka Nakamoto",1.56, 50);
    list = beszurElejere(list, "Ayumi Hamasaki",1.57, 51);
    list = beszurElejere(list, "Momoko Okazaki",1.59, 55);
    list = beszurElejere(list, "Tarja Turunen",1.64, 57);
    list = beszurElejere(list, "Charlotte Wessels",1.67, 62);
    list = beszurElejere(list, "Sharon den Adel",1.7, 63);
    list = beszurElejere(list, "Elize Ryd",1.68, 60);
    calcBMI(list);
    printPersons(list);
    std::cout << "Count: " << cntPersons(list) << '\n';
    std::cout << "Average height: " << averageHeight(list) << '\n';
    std::cout << "Max height: " << maxHeight(list)->name << '\n';
    std::cout << "Min height: " << minHeight(list)->name << '\n';
    freeList(list);
}

void test3() {
    PersonnelList* list = nullptr;
    calcBMI(list);
    printPersons(list);
    std::cout << "Count: " << cntPersons(list) << '\n';
    std::cout << "Average height: " << averageHeight(list) << '\n';
    if (maxHeight(list) != nullptr){
        std::cout << "Wrong max";
    }
    if (minHeight(list) != nullptr){
        std::cout << "Wrong min";
    }
    freeList(list);
}

int main() {
    test1();
    std::cout << '\n';
    test2();
    std::cout << '\n';
    test3();
}