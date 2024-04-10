//
// Created by keret on 2024. 04. 03..
//
/*
 * C típusú karaktertömbök foglalása:

Olvasson be egy szöveget!
Hozzon létre egy a szöveg hosszának megfelelő méretű tömböt!
Másolja át a szöveget a számára létrehozott tömbbe!
Írassa ki a szöveget!
Szabadítsa fel a lefoglalt memóriaterületet!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
Megoldás

 */
#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
#include <stdio.h>

int main(){
    std::string szoveg;
    std::cout << "Irj be egy random szoveget:\n";
    std::getline(std::cin,szoveg);
    int n = szoveg.length();
    std::cout << "Szoveg hossza: " << n << '\n';
    char* uj_szoveg = new char[n + 1];
    /// Masolas
    for (int i = 0; i < n; i++){
        uj_szoveg[i] = szoveg[i];
    }
    uj_szoveg[n] = '\0';
    /// Szöveg kiírása
    std::cout << uj_szoveg << std::endl;
    /// Strcpy
    char* uj_szoveg_strcpy = new char[n];
    strcpy_s(uj_szoveg_strcpy, sizeof uj_szoveg_strcpy, szoveg.c_str());
    /// STR CPY visual studio alatt
    strcpy_s(uj_szoveg_strcpy, sizeof uj_szoveg_strcpy, szoveg.c_str());
    /// Kiiras strcpy
    std::cout << uj_szoveg_strcpy << '\n';
    /// Ne felejtsük el felszabadítani a szövegünket
    delete[] uj_szoveg;
    return 0;
}