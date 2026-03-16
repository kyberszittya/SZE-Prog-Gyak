# 📊 7. Gyakorlat: Többdimenziós Tömbök (A Táblázatok Világa)

## I. Elmélet: Felejtsük el a matematikát!

Képzelj el egy társasházat! Ha egy barátodhoz mész látogatóba, nem elég tudnod az utcanevet (ez lenne egy sima, egydimenziós tömb). Tudnod kell az **emeletet** és az **ajtószámot** is. A C++-ban a 2D tömb pontosan ez: egy rács, ahol az első szám a sort (emelet), a második szám az oszlopot (ajtó) jelenti.

* **Szintaxis:** `tipus nev[sorok][oszlopok];`
* **Példa:** `int mozi[5][10];` (5 sor, soronként 10 szék).
* **Fontos szabály:** A programozásban a számozás mindig a nulladik sor nulladik oszlopával indul (`mozi[0][0]`).

### Feladat
1. Hozz létre egy `int` típusú 2D tömböt, amely 4 sorból és 6 oszlopból áll!
2. Töltsd fel a tömböt úgy, hogy minden elem értéke legyen a sor indexe plusz az oszlop indexe (pl. `tomb[2][3]` értéke legyen `2 + 3 = 5`)! Írj egy kettős `for` ciklust, amely végigmegy a tömb minden elemén, és feltölti az értékeket!
3. Írd ki a tömb minden elemét a képernyőre egy újabb kettős `for` ciklussal, formázva úgy, hogy a sorok külön sorba kerüljenek!

---

## II. Elméleti Alapozó Feladatok (A Logika Felépítése)

Mielőtt komplex programokat írnánk, meg kell értenünk a 2D rácsok bejárásának szabályait.

### 1. Feladat: A "Kettős Ciklus" (A bejárás művészete)
Ahhoz, hogy egy 2D tömb minden elemét elérjük, két egymásba ágyazott `for` ciklusra van szükségünk. Képzeld el, hogy olvasol egy könyvet: a külső ciklus lapozza az oldalakat (sorok), a belső ciklus pedig végigolvassa a szavakat az adott oldalon (oszlopok). Amíg egy oldalt nem olvastál végig, nem lapozol a következőre!

* **Feladat:** Adott egy `int grid[3][4]` méretű tömb (3 sor, 4 oszlop). Írd fel papírra azt a kettős `for` ciklust, amely egyszerűen csak kiírja a képernyőre az aktuális koordinátákat `[sor][oszlop]` formátumban!
* **Mérnöki kérdés:** Hány alkalommal fog lefutni a belső ciklus magja összesen? (Megoldás: $3 \cdot 4 = 12$ alkalommal).

---

### 2. Feladat: Irányított bejárás (Csak egy sor vagy csak egy oszlop)
Nem mindig akarjuk az egész társasházat bejárni. Van, hogy csak a 2. emeletet (egy adott sor), vagy minden emeleten az 'A' lakást (egy adott oszlop) akarjuk ellenőrizni. Ehhez **elég egyetlen ciklus is**, hiszen az egyik dimenziót fixáljuk!

* **Feladat:** Adott egy `int jegyek[5][5]` méretű napló.
    1. Írj egyetlen `for` ciklust, amely végigmegy és kiírja a **2-es indexű sor** minden elemét! (Tipp: a sor indexe fix 2, az oszlop indexe a ciklusváltozó).
    2. Írj egyetlen `for` ciklust, amely kiírja a **4-es indexű oszlop** minden elemét! (Tipp: most az oszlop fix 4, és a sor indexe változik).
* **Mérnöki fókusz:** Értsétek meg: ha csak egy dimenzióban mozogtok, a 2D tömb pontosan úgy viselkedik, mint egy hagyományos 1D tömb!

---

### 3. Feladat: A "Szakadék Széle" (Kritikus határ-ellenőrzés)
A C++ nem fogja a kezedet. Ha egy 3 emeletes épületben megpróbálsz belépni a 4. emeletre, a program nem szól, hanem egyszerűen "lezuhan" (Segmentation Fault), vagy memóriaszemétbe ütközik.

* **Feladat (Hibakeresés):** Az alábbi kódrészletben egy végzetes mérnöki hiba van. Keresd meg, és magyarázd el, miért omlik össze tőle a program!
```cpp
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for(int i = 0; i <= 3; i++) {
    for(int j = 0; j <= 3; j++) {
        cout << matrix[i][j] << " ";
    }
}
```
---

### 4. feladat: Inicializálás Kézzel (A Kapcsos Zárójelek Mágikus Ereje)
A C++ lehetőséget ad arra, hogy egy 2D tömböt már a deklarációkor feltöltsünk értékekkel, kapcsos zárójelek segítségével. Ez egy gyors és hatékony módja annak, hogy egy előre ismert adatstruktúrát létrehozzunk.

* **Feladat:** Hozz létre egy `char` típusú 2D tömböt, amely egy 3 sorból és 4 oszlopból álló "szókereső" játékot reprezentál! Töltsd fel a tömböt olyan karakterekkel, amelyek egy értelmes szót alkotnak (pl. "C++", "JAVA", "PYTHON")! Írd ki a tömböt a képernyőre!

## III. Alapozó Feladatok (A Való Életből)

### 1. Feladat: Az Italautomata (Értékadás és Olvasás)
Egy klasszikus italautomatában a termékek sorokba és oszlopokba vannak rendezve (pl. A1, B3).

* **Feladat:**
    1. Hozz létre egy 3 sorból és 3 oszlopból álló 2D tömböt (`int automata[3][3]`), amely az italok árait tárolja!
    2. Töltsd fel fix értékekkel (pl. 250, 300, 450 stb.) már a deklarációkor, kapcsos zárójelek segítségével!
    3. Kérj be a felhasználótól egy sor és egy oszlop indexet (0-2 között)!
    4. Írd ki a konzolra a kiválasztott ital árát!

---

### 2. Feladat: Az Italautomata (Értékadás és Olvasás) - Struktúrák
Egy modern italautomatában nemcsak árak, hanem terméknevek is szerepelnek egy-egy rekeszben. A logikailag összetartozó adatokat struktúrába zárjuk, és ebből az összetett típusból építjük fel a 2D rácsot.

* **Feladat:**
  1. Definiálj globálisan egy `struct Termek` típust, amely két adattagot tartalmaz: `std::string nev` (az ital neve) és `int ar` (az ital ára)!
  2. A `main` függvényben hozz létre egy 3 sorból és 3 oszlopból álló 2D tömböt ebből a struktúrából (`Termek automata[3][3]`)!
  3. Töltsd fel a rekeszeket fix értékekkel már a deklarációkor, beágyazott kapcsos zárójelekkel!
     *(Példa egy elemre: `{"Cola", 350}`)*
  4. Kérj be a felhasználótól egy sor és egy oszlop indexet (0-2 között)!
  5. A pont operátor (`.`) segítségével írd ki a konzolra a kiválasztott rekeszben található ital **nevét és árát** (pl. `automata[sor][oszlop].nev`)!

* **Mérnöki fókusz:** Figyeljétek meg, hogy az inicializálásnál most már háromszoros beágyazásra lesz szükség: a legkülső a 2D tömbé, a középső a soroké, a legbelső pedig magáé a struktúráé!
---

### 3. Feladat: Mozi Jegyfoglaló Rendszer (Keresés és Módosítás)
Modellezzünk egy egyszerű mozi nézőteret, ahol látnunk kell, melyik szék szabad és melyik foglalt.



* **Feladat:**
    1. Hozz létre egy `bool moziterem[4][5]` tömböt (4 sor, 5 szék)!
    2. Kezdetben minden szék legyen `false` (szabad)! Ezt egy kettős (egymásba ágyazott) `for` ciklussal tedd meg: a külső ciklus a sorokon, a belső az oszlopokon menjen végig.
    3. Szimulálj néhány foglalást: állíts be kézzel 3-4 helyet `true` értékre (pl. `moziterem[1][2] = true;`)!
    4. Kérdezd meg a felhasználót, hova szeretne ülni (sor, szék)!
    5. Ha a hely `true`, írd ki, hogy "Foglalt!". Ha `false`, módosítsd `true`-ra, és írd ki, hogy "Sikeres foglalás!".

---

### 4. Feladat: Heti Hőmérséklet Napló (Adatösszegzés)
A meteorológiai állomások rengeteg adatot gyűjtenek. Tároljuk el egy hét hőmérsékleti adatait (reggel, délben, este)!

* **Feladat:**
    1. Hozz létre egy 7 soros (napok) és 3 oszlopos (napszakok) `double` típusú tömböt!
    2. A kódban töltsd fel az első két nap adatait (pl. Hétfő: 12.5, 20.0, 15.2; Kedd: 13.0, 22.1, 16.5)! A többi nap maradhat nulla.
    3. Írj egy programrészt, amely bekér egy napot (0 = Hétfő, 1 = Kedd...), és egy ciklus segítségével kiszámítja és kiírja annak az egyetlen napnak a napi átlaghőmérsékletét!

## 🌟 Extra Feladat: Italautomata Szimulátor (Univerzális méretezés)

Ebben a feladatban egy teljesen működő, interaktív konzolos alkalmazást építünk fel. A kódot úgy írjuk meg, hogy a függvények egy 3x3-as és egy 10x20-as gépet is módosítás nélkül tudjanak kezelni.

### 1. Lépés: Konstansok és Adatmodell
A "varázsszámok" helyett globális konstansokat használunk.
* **Feladat:**
  1. Deklarálj két globális konstanst a fájl elején: `const int ROWS = 3;` és `const int COLS = 3;`
  2. Definiáld a `struct Termek` típust: `nev` (string), `ar` (int) és `keszlet` (int).

---

### 2. Lépés: Univerzális Rendszerfüggvények
A függvények egydimenziós mutatóként kapják a memóriablokkot, és paraméterként a dimenziókat.

* **A) Megjelenítő függvény:** Írj egy `void printAutomata(Termek* gep, int rows, int cols)` függvényt!
  *Feladata:* Kettős `for` ciklussal (i: sorok, j: oszlopok) írja ki a rácsot. A rekeszeket a `gep[i * cols + j]` lineáris képlettel indexeld! Ha a készlet 0, a név helyett írja ki: "[KIFOGYOTT]".

* **B) Vásárlás függvény:**
  Írj egy `bool vasarlas(Termek* gep, int rows, int cols, int valasztottSor, int valasztottOszlop, int& egyenleg)` függvényt!
  *Feladata:* 1. **Biztonsági ellenőrzés (Bounds checking):** Ha a választott sor vagy oszlop a rácson kívül van (kisebb mint 0, vagy $\ge$ rows/cols), térjen vissza `false` értékkel!
  2. Indexeld ki a terméket a `gep[valasztottSor * cols + valasztottOszlop]` képlettel!
  3. Ellenőrizd a rekesz készletét és a felhasználó egyenlegét!
  4. Ha sikeres a tranzakció, vonja le az árat, csökkentse a készletet, és térjen vissza `true`-val.

---

### 3. Lépés: A Fő Vezérlő Ciklus (A `main` függvény)
* **Feladat:**
  1. Hozd létre az automatát: `Termek automata[ROWS][COLS] = { /* adatok */ };`
  2. Hozz létre egy `penztarca` változót (pl. 2000 Ft)!
  3. Írj egy végtelen `while(true)` ciklust!
  4. Hívd meg a megjelenítő függvényt. **Kritikus:** A 2D tömböt a legelső elemének memóriacímével add át: `printAutomata(&automata[0][0], ROWS, COLS);`
  5. Kérj be sor és oszlop indexet a felhasználótól.
  6. Hívd meg a `vasarlas` függvényt hasonló módon, és az eredménytől (true/false) függően írj ki siker/hiba üzenetet!