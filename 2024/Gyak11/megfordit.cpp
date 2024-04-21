//
// Created by keret on 2024. 04. 21..
//

#include <iostream>

#define N 200
#define MIN_AGE 1980
#define MIN_HEIGHT 150
#define CURRENT_YEAR 2024
#define MAGASSAG_INTERVALLUM 50

struct Person {
    std::string monogram;
    int age;
    int height;
    int birthyear;
};

struct PersonListElem {
    Person* elem;
    PersonListElem *next;
};

Person* generatePerson() {
    Person* elem = new Person();
    /// A lehetséges életkor intervallum megkapható jelen év
    /// és a legkisebb beállított életkor külöbségeként
    int eletkor = rand()% (CURRENT_YEAR - MIN_AGE);
    elem->birthyear = MIN_AGE + eletkor;
    /// Az életkor már egyszerűen megadhato
    elem->age = eletkor;
    /// A magasságnál fix intervallumot adunk meg a magasság változására
    elem->height = MIN_HEIGHT + (rand() % MAGASSAG_INTERVALLUM);
    /// A monogram esetén 26 betűből válogatunk, kezdőbetű az 'A'
    elem->monogram = "...";
    /// Az első betűt kell változtatni
    elem->monogram[0] = 'A' + (rand() % 26);
    /// Az utolsó betűt kell változtatni
    elem->monogram[2] = 'A' + (rand() % 26);
    /// Vege, visszaterhetunk
    return elem;
}

PersonListElem* generateList() {
    PersonListElem* cur = nullptr;
    for (int i = 0; i < N; i++){
        Person* person = generatePerson();
        PersonListElem* n = new PersonListElem();
        n->elem = person;
        n->next = cur;
        cur = n;
    }
    return cur;
}

void listPersons(PersonListElem* list){
    PersonListElem* cur = list;
    int cnt = 0;
    while (cur != nullptr){
        Person* person = cur->elem;
        std::cout << person->monogram;
        std::cout << ", eletkor: ";
        std::cout << person->age;
        std::cout << ", szuletesi ev: ";
        std::cout << person->birthyear;
        std::cout << ", magassag: ";
        std::cout << person->height;
        cur = cur->next;
        std::cout << std::endl;
        cnt++;
    }
    std::cout << "Összes személy száma: " << cnt << std::endl;
}

/**
 * Valamilyen év után született emberek kiszedése a listából
 * @param list A lista
 * @param value Az év érték amire szűrünk
 */
PersonListElem* filterPersons(PersonListElem* list, int value){
    PersonListElem* first = list;
    if (first != nullptr && first->elem->birthyear >= value) {
        PersonListElem* tmp = first;
        first = first->next;
        delete tmp->elem;
        delete tmp;
    }
    /// Többi elem törlése
    if (first != nullptr) {
        /// Első elem kezelése (a megelőző elemet ezután inicializáljuk)
        PersonListElem *prev = first;
        /// Jelenlegi elem
        PersonListElem *cur = first->next;
        /// Iterálunk a további elemeken
        while (cur != nullptr) {
            PersonListElem *next = cur->next;
            if (cur->elem->birthyear >= value) {
                prev->next = next;
                delete cur->elem;
                delete cur;
            } else {
                prev = cur;
            }
            cur = next;
        }
    }
    return first;
}

void disposePersons(PersonListElem* list) {
    PersonListElem* cur = list;
    while (cur != nullptr){
        PersonListElem* tmp = cur;
        cur = cur->next;
        delete tmp->elem;
        delete tmp;
    }
}

PersonListElem* reverseList(PersonListElem* listElem){
    PersonListElem *orig = listElem;
    PersonListElem *reversed = nullptr;

    while (orig != nullptr) {
        PersonListElem* changed = orig;
        PersonListElem* next = orig->next;
        changed->next = reversed;
        reversed = changed;
        orig = next;
    }
    return reversed;
}

int main() {
    srand(time(NULL));
    std::cout << "Személyek listázása (összes): \n";
    PersonListElem *list = generateList();
    listPersons(list);
    list = filterPersons(list, 2000);
    std::cout << "Személyek listázása (szurve): \n";
    listPersons(list);
    std::cout << "Lista megforditasa: \n";
    list = reverseList(list);
    listPersons(list);
    disposePersons(list);
}