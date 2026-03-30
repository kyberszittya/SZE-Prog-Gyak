//
// Created by keret on 2026. 03. 30..
//

/*
Adottak a következő struktúrák, melyeket előzetesen már definiáltunk:

struct Point3D {
    double x;
    double y;
    double z;
};
struct Node {
    Point3D data;
    Node* next;
};
Ezekkel megvalósítható egy egyszeresen láncolt lista, amely 3 dimenziós pontokat (Point3D) tartalmaz. A lista elemei Node struktúrákban helyezkednek el.

Valósítsa meg a double averageDistanceFromOrigin(const Node* head) függvényt, amely:

végigiterál a lista elemein,

kiszámítja az egyes pontok origótól mért távolságát,

visszaadja a távolságok átlagát.

A pont origótól mért távolsága:

távolság az origótól

Megjegyzések

Feltételezheti, hogy a lista nem üres.

A lista létrehozása és felszabadítása nem része a feladatnak.

A függvény nem írhat ki a képernyőre.

*/
#include <iostream>
#include <cmath>

struct Point3D {
    double x;
    double y;
    double z;
};

struct Node {
    Point3D data;
    Node* next;
};

double averageDistanceFromOrigin(Node* head) {
    Node* current = head;
    double sum = 0.0;
    int count = 0;
    while (current != nullptr) {
        // Távolság kiszámítása
        double d = std::sqrt(
            std::pow(current->data.x, 2) +
            std::pow(current->data.y, 2) +
            std::pow(current->data.z, 2)
        );
        sum += d; count++;
        current = current->next; // Továbblépés
    }
    return sum / count;
}

int main(int argc, char* argv[]) {
    Node n2{{0.0, 0.0, 2.0}, nullptr};
    Node n1{{3.0, 4.0, 0.0}, &n2};

    double avg = averageDistanceFromOrigin(&n1);
    std::cout << avg << std::endl;
}