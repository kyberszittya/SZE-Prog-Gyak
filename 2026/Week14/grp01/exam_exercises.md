## Feladat: nagyon könnyű
Közös feladat
Írja ki a számokat 1-től 100-ig!
### Példa
```c++
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
```
---
## Feladat 1
Készítsen C++ függvényt, amely ellenőrzi egy szövegről, hogy palindróma-e!
Vagyis: a szöveg fordítottja megegyezik az eredeti szöveggel.
A függvény fejlécét segítségképpen megadtuk előre.
Tipp: használjon `unsigned int`-et!
### Példa
```c++
std::cout << ispalindrome("gorog") << '\n';
```
### Teszt eredmény
```c++
1
```
---
## Feladat 2
Készítsen két C++ függvényt:
- `PolarCoord toPolarCoord(CartesianCoord p)`: `x`, `y` koordinátákból polárkoordinátás formát állít elő.
- `CartesianCoord toCartesianCoord(PolarCoord p)`: polárkoordinátákból `x`, `y` koordinátákat állít elő.
Az átalakításhoz a következő függvényeket használhatja:
`std::cos`, `std::sin`, `std::sqrt`, `std::atan2`.
Definiálja a két struktúrát:
- `CartesianCoord` (`x`, `y`)
- `PolarCoord` (`r`, `phi`)
`double` mezőket használjon!
Segítségképpen megadtuk az implementálandó függvények fejléceit.
### Példa
```c++
PolarCoord p0;
p0.r = 1.0;
p0.phi = M_PI_2;
CartesianCoord c0 = toCartesianCoord(p0);
```
### Eredmény
```c++
0,1
1,1.5708
```
---
## Feladat 3
Adott 3D koordináták tömbje.
Feladat: minden egyes koordinátához számolja ki az origótól vett távolságot.
A távolságok egy tömbben egymás után következzenek.
A tömb mérete előre ismert.
A feladathoz írjon egy C++ függvényt!
Segítségképpen megadtuk a függvény fejlécét. Használja a leimplementált koordináta struktúrát!
Tipp: emlékeztetőleg az Euklideszi távolság az origóponttól (`0,0,0`).
Tipp 2: visszatérésként egy dinamikus tömböt kell lefoglalni.
### Példa
```c++
struct Coord coords[2];
coords[0].x = 0.0;
coords[0].y = 0.0;
coords[0].z = 0.0;
coords[1].x = 10.0;
coords[1].y = 5.0;
coords[1].z = 0.0;
double* res = calcEuclid(coords, 2);
for (int i = 0; i < 2; i++) {
    std::cout << res[i] << '\n';
}
delete[] res;
```
### Eredmény
```c++
0
11.1803
```
---
## Feladat 4
Ingatlanok értékeit gyűjtjük össze egy láncolt listába.
Egy láncolt lista elemben a következő adatokat tároljuk:
- terület (`m^2`)
- érték (Ft-ban)
Feladatok:
- láncolt lista struktúra elkészítése (`IngatlanLista`)
- beszúrás elejére művelet elkészítése
- az ingatlanok által lefedett terület összegzése
- az átlagos ingatlanérték meghatározása (`összterület` felhasználásával)
Az átlagnál figyeljen a 0-val osztásra!
Segítségképpen megadtuk a függvények fejléceit.
### Példa
```c++
IngatlanLista* list = nullptr;
list = beszurElejere(nullptr, 10.0, 567);
list = beszurElejere(list, 5.0, 367);
list = beszurElejere(list, 7.0, 478);
std::cout << totalArea(list) << '\n';
```
### Eredmény
```c++
22
```
