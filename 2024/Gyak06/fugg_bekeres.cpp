//
// Created by keret on 2024. 03. 13..
//
/*
 * Több érték visszaadása függvényből:
Készítsen programot, amely bekéri a standard bemenetről
 hallgatók vezetéknevét, keresztnevét, neptun kódját,
 egy tantárgy nevét és a tárgyból írt 4 db ZH eredményeit!
Az adatok bekérését végezze el egy erre a célra tervezett függvény,
 amely több értéket képes vissza adni!
Az átlag számítását szintén egy függvény segítségével végezze el,
 ahol paraméterként az előző pontban meghatározott
 függvény visszatérési értékei szolgáljanak!
 */
#include <iostream>
#include <string>
#define ZH_SZAM 4

struct Targy {
    std::string nev;
    std::string neptunkod;
    int zheredmenyek[ZH_SZAM];
};

struct Hallgato {
    std::string vezeteknev;
    std::string keresztnev;
    Targy targy;
};

Hallgato beker(){
    Hallgato hallgato;
    std::cout << "Hallgato vezetekneve: "; std::cin >> hallgato.vezeteknev;
    std::cout << "Keresztnev: "; std::cin >> hallgato.keresztnev;
    std::cout << "Tantargy: "; std::cin >> hallgato.targy.nev;
    std::cout << "Tantargy neptun kod: "; std::cin >> hallgato.targy.neptunkod;
    for (int i = 0; i < ZH_SZAM; i++) {
        std::cout << i + 1 << ". ZH eredmeny: ";
        std::cin >> hallgato.targy.zheredmenyek[i];
    }
    return hallgato;
}

void kiir(Hallgato hallgato){
    std::cout << "Hallgato vezetekneve: " << hallgato.vezeteknev;
    std::cout << "Keresztnev: " << hallgato.keresztnev;
    std::cout << "Tantargy: " << hallgato.targy.nev;
    std::cout << "Tantargy neptun kod: " << hallgato.targy.neptunkod;

}

double atlagZhPontok(Hallgato hallgato){
    double atlag = 0.0;
    for (int i = 0; i < ZH_SZAM; i++) {
        atlag += hallgato.targy.zheredmenyek[i];
    }
    return atlag/ZH_SZAM;
}

int main() {
    Hallgato hallgato;
    hallgato = beker();
    kiir(hallgato);
    std::cout << "ZH pontok atlaga: " << atlagZhPontok(hallgato);
    return 0;
}