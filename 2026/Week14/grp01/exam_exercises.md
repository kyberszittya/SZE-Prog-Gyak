## Feladat: nagyon konnyu

Kozos feladat

Irja ki a szamokat 1-tol 100-ig!

### Pelda

```c++
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
```

---

## Feladat 1

Keszitsen C++ fuggvenyt, amely ellenorzi egy szovegrol, hogy palindroma-e!
Vagyis: a szoveg forditottja megegyezik az eredeti szoveggel.

A fuggveny fejlecet segitsegkeppen megadtuk elore.

Tipp: hasznaljon `unsigned int`-et!

### Pelda

```c++
std::cout << ispalindrome("gorog") << '\n';
```

### Teszt eredmeny

```c++
1
```

---

## Feladat 2

Keszitsen ket C++ fuggvenyt:

- `PolarCoord toPolarCoord(CartesianCoord p)`: `x`, `y` koordinatakbol polarkoordinatas format allit elo.
- `CartesianCoord toCartesianCoord(PolarCoord p)`: polarkoordinatakbol `x`, `y` koordinatakat allit elo.

Az atalakitashoz a kovetkezo fuggvenyeket hasznalhatja:
`std::cos`, `std::sin`, `std::sqrt`, `std::atan2`.

Definialja a ket strukturat:

- `CartesianCoord` (`x`, `y`)
- `PolarCoord` (`r`, `phi`)

`double` mezoket hasznaljon!
Segitsegkeppen megadtuk az implementalando fuggvenyek fejleceit.

### Pelda

```c++
PolarCoord p0;
p0.r = 1.0;
p0.phi = M_PI_2;
CartesianCoord c0 = toCartesianCoord(p0);
```

### Eredmeny

```c++
0,1
1,1.5708
```

---

## Feladat 3

Adott 3D koordinatak tombje.
Feladat: minden egyes koordinatahoz szamolja ki az origotol vett tavolsagot.

A tavolsagok egy tombben egymas utan kovetkezzenek.
A tomb merete elore ismert.

A feladathoz irjon egy C++ fuggvenyt!
Segitsegkeppen megadtuk a fuggveny fejlecet. Hasznalja a leimplementalt koordinata strukturat!

Tipp: emlekeztetoleg az Euklideszi tavolsag az origoponttol (`0,0,0`).
Tipp 2: visszatereskent egy dinamikus tombot kell lefoglalni.

### Pelda

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

### Eredmeny

```c++
0
11.1803
```

---

## Feladat 4

Ingatlanok ertekeit gyujtjuk ossze egy lancolt listaba.

Egy lancolt lista elemben a kovetkezo adatokat taroljuk:

- terulet (`m^2`)
- ertek (Ft-ban)

Feladatok:

- lancolt lista struktura elkeszitese (`IngatlanLista`)
- beszuras elejere muvelet elkeszitese
- az ingatlanok altal lefedett terulet osszegzese
- az atlagos ingatlanertek meghatarozasa (`osszterulet` felhasznalasaval)

Az atlagnal figyeljen a 0-val osztasra!
Segitsegkeppen megadtuk a fuggvenyek fejleceit.

### Pelda

```c++
IngatlanLista* list = nullptr;
list = beszurElejere(nullptr, 10.0, 567);
list = beszurElejere(list, 5.0, 367);
list = beszurElejere(list, 7.0, 478);
std::cout << totalArea(list) << '\n';
```

### Eredmeny

```c++
22
```