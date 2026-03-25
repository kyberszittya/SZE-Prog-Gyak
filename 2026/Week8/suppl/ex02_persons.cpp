//
// Created by keret on 2026. 03. 25..
//

#include <iostream>
#include <iomanip>
// Készítsen programot, amely személyek
// születési évét, hónapját, napját és nevét képes tárolni!
// Olvassa be 5 személy adatait a standard bemenetről,
// majd rendezze a tömböt a személyek kora szerinti növekvő sorrendbe!
//
// Végül jelenítse is meg ennek elemeit!
#define N 5
using namespace std;

struct Person {
    int birth_year;
    int birth_month;
    int birth_day;
};

void beolvas(Person* persons, int length) {
    for (int i = 0; i < N; i++) {
        std::cout << "Birth year"; std::cin >> persons[i].birth_year;
        std::cout << "Birth month"; std::cin >> persons[i].birth_month;
        std::cout << "Birth day"; std::cin >> persons[i].birth_day;
    }
}

void rendez(Person* persons, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if ((persons[j].birth_year > persons[i].birth_year) ||

                (persons[j].birth_year == persons[i].birth_year
                    && persons[j].birth_month > persons[i].birth_month) ||

                (persons[j].birth_year == persons[i].birth_year
                    && persons[j].birth_month == persons[i].birth_month
                    && persons[j].birth_day > persons[i].birth_day))
                {
                Person temp = persons[i];
                persons[i] = persons[j];
                persons[j] = temp;
            }
        }
    }
}

void kiiras(Person* persons, int length) {
    for(int i=0; i<length; i++) {
        cout << persons[i].birth_year << '.'
             << setw(2) << setfill('0') << persons[i].birth_month << '.'
             << setw(2) << setfill('0') << persons[i].birth_day << '\n';
    }
}

int main(int argc, char* argv[]) {
    Person persons[N];
    // Kérjünk be N személyt
    beolvas(persons, N);
    // Rendezés
    rendez(persons, N);
    // Kiírás
    kiiras(persons, N);
    return 0;
}