#

## 1. feladat: Láncolt lista feltöltés, kiíratás

- Írjon programot, amely egy tömb elemeivel láncolt listát készít!
- A tömb utolsó eleme legyen `-1`, ez már ne kerüljön a listába! Az elemeket szúrja be a lista elejére! Figyeljük meg, hogy így a lista fordított lesz a tömbhöz képest!
- Végül jelezzük ki az egyes elemeket rendre!

[Megoldás](main.cpp)

### Random számokkal
Sok számmal való feltöltés.

[Megoldás](lista_sok.cpp)

## 2. feladat

Láncolt lista törlés adott feltételre

- Generáljunk monogramokat, életkort, ebből születési évet, magasságot minden láncolt lista elemnek, majd listázzuk!
- A generált listából töröljük a 2000 után született személyeket, majd listázzuk ki ezt is!

[Megoldás](torles.cpp)

## 3. feladat
Láncolt lista rendezése

- Rendezzük az előző feladat listáját monogram / életkor / magasság szerinti növekvő sorrendbe!

[Megoldas](rendezes.cpp)

## 4. feladat
Láncolt lista megfordítása

- Folytassuk a 2. feladattól
- Fordítsunk meg egy listát az elemei átláncolása által! Jelezzük ki előző program listáját eredeti sorrendjében (és ezáltal az adatokat eredeti sorrendjükben), továbbá a megfordítottat is!
- Mindig a lista elejéről veszünk el egy elemet, majd a megfordított lista elejére betesszük azt, így a lista megfordul. Végül az eredeti lista elfogy, amint ez megtörténik, a megfordított lista kész.

[Megoldas](megfordit.cpp)

## Példa vizsga feladat: 
Folyamatosan megfigyel egy neutroncsillagot.

Írjon egy programot, ami az égitest fényességét jegyzi meg, az utolsó mért eredményhez fűzve az új eredményt!  A negatív mért érték hibásnak számít, amit nem kell listába rakni.

Minden nap végén törölni kell az eredményeket (lista törlése), csak az átlagot kell standard outputra kiírni. Segítségül megadtuk a struktúrát és a befejezendő függvények fejlécét. Készüljön fel arra a lehetőségre, hogy nincs használható mérés egy nap folyamán (FIGYELEM: átlagolás).

```c++
struct NeutronStarMeasurement
{
    double luminosity;
    NeutronStarMeasurement* next;
    
    NeutronStarMeasurement(double luminosity): 
        luminosity(luminosity), next(nullptr){}
};

```