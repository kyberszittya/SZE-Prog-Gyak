# Feladatok (3. hét): Függvények, Matematika és Tömbök

## I. Gyakorlás: egyszerű függvények
*Cél: A logikai elágazások és a függvények kombinálása.*


### 1. Feladat: BMI Index kalkulátor
Írj egy `double calculateBMI(double weight, double height)` függvényt, amely kiszámítja a testtömegindexet!
* **Képlet:** $BMI = \frac{súly}{magasság^2}$ (a magasság méterben értendő).
* **Feladat:** A `main` függvényben kérd be az adatokat, hívd meg a függvényt, majd az eredmény alapján írd ki a kategóriát (sovány, normál, túlsúly).
* __FIGYELEM!__ Figyelj, hogy ha cm-ben adod meg a testsúlyt, el kell osztani 100-al. 

__Kiegészítés__: a BMI a következő kategóriákba kerül:
- < 18.5 : alultápláltság
- 18.5 - 25: normál testsúly
- 25 - 30: túlsúly
- 30 < : elhízás (obesity)

### 2. Feladat: Mini Kalkulátor
Készíts egy `double calculate(double a, double b, char op)` függvényt!
* **Működés:** A függvény végezze el az `op` karakterben megadott műveletet (`+`, `-`, `*`, `/`) a két számmal.
* **Fókusz:** Használj `switch-case` szerkezetet! Ügyelj a nullával való osztás kezelésére.

### 3. Feladat: Kvantum-kapu választó (Switch-case)

A kvantumszámítás során különböző kapukat (gate) alkalmazunk a qubiteken. Ebben a feladatban egy egyszerű választómenüt kell készítened.

**Feladat:**
Írj egy programot, amely bekér egy egész számot (1-4), és egy `switch-case` szerkezet segítségével kiírja a hozzá tartozó kvantum-kapu nevét és rövid leírását!

**Választási lehetőségek:**
1. **Pauli-X**: Bit-flip kapu (a 0-ból 1 lesz, az 1-ből 0).
2. **Pauli-Y**: Bit és fázis-flip kapu.
3. **Pauli-Z**: Fázis-flip kapu.
4. **Hadamard (H)**: Szuperpozíciót létrehozó kapu.
* **Minden más szám esetén:** Írd ki, hogy "Ismeretlen művelet!".

**Fókusz:**
* Ne felejtsd el a `break` kulcsszót minden eset (case) végén!
* Használd a `default` ágat a hibás bemenetek kezelésére.

### 4. Feladat: Csillagászati Spektrálosztályozó (Switch-case)

A csillagokat a felszíni hőmérsékletük és spektrumuk alapján spektrálosztályokba soroljuk (Morgan–Keenan rendszer). Ebben a feladatban egy karakteres bemenetet kell feldolgoznod.

**Feladat:**
Írj egy programot, amely bekér egyetlen karaktert (a spektrálosztály kódját), és egy `switch-case` szerkezet segítségével írja ki a csillag típusának fő jellemzőit!

**Osztályozási adatok:**
* **'O'**: Kékes szín, extrém forró ($T > 30\,000$ K)
* **'B'**: Kékesfehér szín ($10\,000 \text{ K} < T < 30\,000$ K)
* **'A'**: Fehér szín ($7\,500 \text{ K} < T < 10\,000$ K)
* **'F'**: Sárgásfehér szín ($6\,000 \text{ K} < T < 7\,500$ K)
* **'G'**: Sárga szín (pl. a Nap) ($5\,200 \text{ K} < T < 6\,000$ K)
* **'K'**: Narancssárga szín ($3\,700 \text{ K} < T < 5\,200$ K)
* **'M'**: Vörös szín, hűvösebb csillag ($T < 3\,700$ K)

**Minden más karakter esetén:** Írd ki: "Ismeretlen spektrálosztály!"

**Fókusz:**
* Karakter típusú változó (`char`) használata a `switch` kifejezésben.
* **Kis- és nagybetű érzékenység:** Kezeld le úgy a kódot, hogy a 'g' és 'G' bemenet is ugyanazt az eredményt adja (használj halmozott `case` címkéket)!
* A `default` ág szerepe a váratlan karakterek kiszűrésében.

## V. Összefoglaló Feladat: Közlekedési lámpa állapotgép

A közlekedési lámpa az egyik legszemléletesebb példa a véges állapotgép (FSM) működésére. A rendszer különböző állapotok között vált át meghatározott szabályok (tranzíciók) szerint.



**Feladat:**
Szimulálj egy magyarországi közlekedési lámpát! A program egy ciklusban fusson, és minden körben kérdezze meg a felhasználótól: *"Váltsunk állapotot? (i/n)"*. Ha a válasz 'i', a lámpa váltson a következő logikai állapotba a `switch-case` szerkezet segítségével.

**Állapotok és sorrend:**
1. **PIROS**: Megállás. (Következő: PIROS-SÁRGA)
2. **PIROS-SÁRGA**: Felkészülés az indulásra. (Következő: ZÖLD)
3. **ZÖLD**: Szabad út. (Következő: SÁRGA)
4. **SÁRGA**: Megállás előtti figyelmeztetés. (Következő: PIROS)

**Technikai elvárások:**
* Deklarálj egy `int state` változót (vagy C++ `enum`-ot), amely az aktuális állapotot tárolja.
* Használj egy `switch(state)` szerkezetet a jelenlegi állapot kiírásához és a következő állapot értékének beállításához.
* Kezeld le a hibás állapotokat a `default` ágban.

**Pseudocode:**
```text
PROCEDURE TrafficLightSimulation
    state = RED
    LOOP
        PRINT current state
        INPUT choice
        IF choice == 'i' THEN
            SWITCH state
                CASE RED: 
                    PRINT "PIROS"
                    state = RED_YELLOW
                CASE RED_YELLOW:
                    PRINT "PIROS-SÁRGA"
                    state = GREEN
                CASE GREEN:
                    PRINT "ZÖLD"
                    state = YELLOW
                CASE YELLOW:
                    PRINT "SÁRGA"
                    state = RED
            END SWITCH
        END IF
    END LOOP
END PROCEDURE
```

---

## II. Gyakorlás: Rekurzív függvények
*Cél: Az önmagát hívó logika és a leállási feltétel (base case) gyakorlása.*

### 1. Feladat: Számjegyek összege rekurzívan
Készíts egy `int sumDigits(int n)` függvényt, amely egy egész szám számjegyeit adja össze!
* **Logika:** * **Alapeset:** Ha a szám kisebb, mint 10, térjen vissza a számmal.
    * **Rekurzív lépés:** Vedd az utolsó számjegyet (`n % 10`) és add hozzá a maradék szám (`n / 10`) rekurzív összegéhez.
* **Példa:** `sumDigits(123)` -> $3 + (2 + (1)) = 6$.

### 2. Feladat: Hanoi tornyai
Mozgass át $n$ korongot az 'A' rúdról a 'C' rúdra a 'B' rúd segítségével!

**Pszeudokód:**
```text
PROCEDURE Hanoi(n, src, dest, aux)
    IF n == 1 THEN
        PRINT: "Mozgasd a korongot: forrás -> cél"
        RETURN
    END

    // 1. n-1 korong mozgatása a segédrúdra
    Hanoi(n - 1, src, aux, dest)

    // 2. A legnagyobb korong mozgatása a célra
    PRINT: "Mozgasd a korongot: forrás -> cél"

    // 3. Az n-1 korong mozgatása a segédről a célra
    Hanoi(n - 1, aux, dest, src)
END PROCEDURE
```

__C++ szignatúra:__ ```void hanoi(int n, char from_rod, char to_rod, char aux_rod)```

---

## III. Standard matematikai függvények 
*Cél: Lebegőpontos műveletek és a <cmath> könyvtár használata.*

### 0. Feladat: Pitagorasz-tétel (Átfogó számítása)
A derékszögű háromszög oldalainak összefüggése alapvető a számítógépes grafikában és a pozicionálásban.



* **Bemenet:** $a$ és $b$ (a háromszög két befogója).
* **Feladat:** Számítsd ki az átfogó ($c$) hosszát!
* **Képlet:** $$c = \sqrt{a^2 + b^2}$$
* **Használt függvények:** `std::sqrt()`, `std::pow()`.
* **Mérnöki megjegyzés:** a C++ kínál egy célspecifikus függvényt is: `std::hypot(a, b)`. Ez nemcsak rövidebb, de precízebb is, mert belsőleg kezeli az olyan numerikus hibákat, mint a túlcsordulás (overflow) vagy az alulcsordulás (underflow) a négyzetre emelés során.

### 1. Feladat: Ferde hajítás távolsága
Számítsd ki egy lövedék vízszintes lőtávolságát ($d$)!
* **Képlet:** $d = \frac{v_0^2 \cdot \sin(2\alpha)}{g}$
* **Paraméterek:** $v_0$ (kezdősebesség m/s), $\alpha$ (kilövési szög fokban), $g = 9.81$.
* **Figyelem:** A C++ `sin()` függvénye **radiánt** vár!
    * $radián = fok \cdot \frac{\pi}{180}$
* **Szükséges függvények:** `std::pow()`, `std::sin()`, `M_PI`.

### 2. Feladat: Euklideszi távolság (2D)
A geometriai számítások alapja két pont közötti távolság meghatározása a síkban.
* **Bemenet:** $(x_1, y_1)$ és $(x_2, y_2)$ koordináták (valós számok).
* **Feladat:** Számítsd ki a két pont távolságát a Pitagorasz-tétel alapján!
* **Képlet:** $$d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$
* **Használt függvények:** `std::sqrt()`, `std::pow()` vagy `std::hypot()`.


### 3. Feladat: Decibel (dB) kalkulátor
A mérnöki tudományokban (akusztika, elektronika) a logaritmikus skála elengedhetetlen a teljesítményarányok kifejezésére.
* **Bemenet:** $P$ (mért teljesítmény), $P_0$ (referencia teljesítmény).
* **Feladat:** Számítsd ki a teljesítményszintet decibelben!
* **Képlet:** $$L_{dB} = 10 \cdot \log_{10}\left(\frac{P}{P_0}\right)$$
* **Használt függvény:** `std::log10()`.


### 4. Feladat: Szigmoid függvény (AI alapok)
A neurális hálózatok egyik legfontosabb aktivációs függvénye, amely bármilyen valós számot a $(0, 1)$ tartományba szorít.
* **Bemenet:** $x$ (valós szám).
* **Feladat:** Implementáld a logisztikus szigmoid függvényt!
* **Képlet:** $$S(x) = \frac{1}{1 + e^{-x}}$$
* **Használt függvény:** `std::exp()`.



![Image of a sigmoid function curve on a graph](https://encrypted-tbn2.gstatic.com/licensed-image?q=tbn:ANd9GcTx07EjUftyg9y3ZbcY8OuGnerrOLwxG4_1XNRlXLEghEYZtx63atZ7e27oLo0M0Lz8hTw-3oxrtmvBuWVEshxGmTYZx0TCXFsuZjOlWitJjP9sgEM)


### 5. Feladat: Lineáris interpoláció (Lerp)
Grafikai motorokban és animációkban két érték közötti sima átmenet kiszámítására használjuk.
* **Bemenet:** $a$ (kezdőérték), $b$ (végérték), $t$ (arány, $0$ és $1$ között).
* **Feladat:** Számítsd ki az interpolált értéket!
* **Képlet:** $$f(a, b, t) = a + t \cdot (b - a)$$
* **Megjegyzés:** Ügyelj rá, hogy $t=0$ esetén az eredmény $a$, $t=1$ esetén pedig $b$ legyen.

### 6. Feladat: De Broglie hullámhossz számítása
A kvantummechanika egyik alappillére, hogy minden anyagi részecskéhez rendelhető egy hullámhossz ($\lambda$), amely a részecske impulzusától ($p$) függ.

* **Bemenet:** $m$ (tömeg [kg]), $v$ (sebesség [m/s]).
* **Feladat:** Számítsd ki a részecske de Broglie hullámhosszát!
* **Képlet:** $$\lambda = \frac{h}{m \cdot v}$$
* **Konstans:** Planck-konstans ($h \approx 6.626 \times 10^{-34}$ Js).
* **Mérnöki megjegyzés:** Ügyelj a rendkívül kicsi értékekre! Használj `double` vagy `long double` típust a pontosság érdekében.


### 7. Feladat: Kvantum harmonikus oszcillátor energiaszintjei
A klasszikus fizikával ellentétben egy kvantummechanikai oszcillátor energiája nem lehet tetszőleges, csak meghatározott diszkrét értékeket vehet fel.

* **Bemenet:** $n$ (energiaszint/kvantumszám, $n = 0, 1, 2, \dots$), $\omega$ (sajátfrekvencia [rad/s]).
* **Feladat:** Számítsd ki az oszcillátor energiáját az $n$-edik szinten!
* **Képlet:** $$E_n = \left(n + \frac{1}{2}\right) \hbar \omega$$
* **Konstans:** Redukált Planck-konstans ($\hbar = \frac{h}{2\pi} \approx 1.054 \times 10^{-34}$ Js).
* **Mérnöki megjegyzés:** Figyeld meg, hogy $n=0$ esetén is létezik egy minimális energia ($E_0 = \frac{1}{2}\hbar\omega$), amit zérusponti energiának nevezünk.

---

## IV. Feladatok tömbökkel
*Cél: Az indexelés (0-tól indul!), az adatszerkezetek bejárása és a memória-elrendezés megértése.*

### 1. Feladat: Tömb feltöltése véletlen számokkal
A manuális bevitel helyett automatizáljuk az adatgenerálást!
1. Hozz létre egy 10 elemű egész számokból álló tömböt.
2. Töltsd fel a tömböt véletlen számokkal egy megadott tartományon belül (pl. 1 és 100 között).
3. Írd ki a tömb tartalmát a konzolra egy sorban.

**Tipp (Modern C++):** Használd a `#include <random>` könyvtárat a `std::mt19937` generátorral!

#### Standard C++ megoldás
Standard kód, amivel generálható.

```c++
#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time

int main() {
    int tomb[10];
    
    // Seedelés az aktuális idővel
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Feltöltés és kiíratás
    for (int i = 0; i < 10; ++i) {
        tomb[i] = std::rand() % 100 + 1; // 1 és 100 között
        std::cout << tomb[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

#### Modern C++ megoldás
Modern C++ könyvtári függvények használata.
```c++
#include <iostream>
#include <random> // Modern random library

int main() {
    // Modern tömb definíció
    int tomb[10];

    // Véletlenszám-generátor inicializálása
    std::random_device rd;  // Hardveres entrópia a seedeléshez
    std::mt19937 gen(rd()); // Mersenne Twister motor
    std::uniform_int_distribution<> dist(1, 100); // Egyenletes eloszlás 1-100 között

    // Feltöltés
    for (int& elem : tomb) {
        elem = dist(gen);
    }

    // Kiíratás (range-based for loop)
    for (const int elem : tomb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### 2. Feladat: Minimum és Maximum keresés
Tölts fel egy 10 elemű egész számokból álló tömböt (lehet fix értékekkel vagy bekéréssel)!
* **Feladat:** Találd meg és írd ki a tömb legkisebb és legnagyobb elemét.
* **Algoritmus:** Indulj el az első elemtől, és hasonlítsd össze a többivel (lineáris keresés).

### 3. Feladat: Számtani sorozat ellenőrzése

Egy sorozatot számtani sorozatnak nevezünk, ha bármely két egymást követő tagjának különbsége ($d$) állandó. Ebben a feladatban a véletlenszerűen feltöltött tömbről kell eldöntenünk, hogy teljesül-e rá ez a feltétel.

**Feladat:**
1. Generálj egy 10 elemű tömböt véletlen számokkal.
2. Írj egy logikai függvényt, amely megvizsgálja a tömböt.
3. A függvény adja vissza, hogy a számok számtani sorozatot alkotnak-e a generált sorrendben.

**Pseudocode:**
```text
FUNCTION IsArithmeticProgression(array, n)
    IF n < 2 THEN 
        RETURN true        // A single element or empty array is trivially a progression
    END IF

    difference = array[1] - array[0]

    FOR i = 2 TO n - 1
        IF (array[i] - array[i - 1]) != difference THEN
            RETURN false   // Early return: found a pair with a different gap
        END IF
    END FOR

    RETURN true            // All gaps were identical
END FUNCTION
```

### 4. Feladat: Medián keresése

A medián a statisztikában az a középérték, amelynél az adatok pontosan fele kisebb, fele pedig nagyobb. Egy véletlenszerűen feltöltött tömb esetén a medián megkereséséhez a legfontosabb előfeltétel, hogy a tömb **rendezett** legyen.

**Feladat:**
1. Használd a korábban generált véletlen számokból álló tömböt.
2. Rendezd a tömböt (pl. a korábban megírt `InsertionSort` segítségével).
3. Írj egy függvényt, amely kiszámítja a mediánt:
  - Ha az elemek száma páratlan, a medián a középső elem.
  - Ha az elemek száma páros, a medián a két középső elem átlaga.

**Pseudocode:**
```text
FUNCTION FindMedian(array, n)
    // The array must be sorted before calling this function
    CALL InsertionSort(array, n)

    IF n % 2 != 0 THEN
        // Odd number of elements
        RETURN array[n / 2]
    ELSE
        // Even number of elements
        mid1 = array[(n / 2) - 1]
        mid2 = array[n / 2]
        RETURN (mid1 + mid2) / 2.0
    END IF
END FUNCTION
```

### 5. Feladat: Átlagkereső
Hozz létre egy 5 elemű `double` tömböt!
1.  Kérj be 5 számot a felhasználótól egy ciklus segítségével.
2.  Számold ki az elemek összegét, majd az átlagukat.
3.  Írd ki az átlagot a konzolra.

### 6. Feladat: Körkörös eltolás (Shiftelés)
A feladat egy tömb elemeinek mozgatása balra vagy jobbra úgy, hogy a tömbből „kieső” elem a túlsó oldalon visszakerüljön. Ez az alapművelet elengedhetetlen a kriptográfiában (pl. AES titkosítás eltolási lépései) és a digitális jelfeldolgozásban.

1. __Balra eltolás (Shift Left)__: Minden elem eggyel balra mozog, az első elem pedig az utolsó helyre kerül.

```
PROCEDURE ShiftLeft(array, n)
  temp = array[0]              // Save the first element
  FOR i = 0 TO n - 2           // Move forward
    array[i] = array[i + 1]
  END FOR
  array[n - 1] = temp          // Move the saved element to the end
END PROCEDURE
```
2. __Jobbra eltolás (Shift Right)__: Minden elem eggyel jobbra mozog, az utolsó elem pedig az első helyre kerül.

```
PROCEDURE ShiftRight(array, n)
  temp = array[n - 1]          // Save the last element
  FOR i = n - 1 DOWNTO 1       // Move BACKWARD to avoid overwriting data
    array[i] = array[i - 1]
  END FOR
  array[0] = temp              // Move the saved element to the beginning
END PROCEDURE
```

### 7. Feladat: Beszúrásos rendezés (Insertion Sort)
Rendezd a tömb elemeit növekvő sorrendbe!

**Pszeudokód:**
```text
PROCEDURE InsertionSort(array, n)
    FOR i from 1 to n-1
        key = array[i]
        j = i - 1
        WHILE j >= 0 AND array[j] > key
            array[j + 1] = array[j]
            j = j - 1
        END
        array[j + 1] = key
    END
END PROCEDURE
```
Példa lista:
```
3 9 5 8 6 1 0 2 7 4
```
A példa lista megfelelő rendezése után random generált lista rendezését valósítsuk meg!

### 8. Feladat: Kvantum-regiszter szimuláció
Egy 8-qubites regisztert egy 8 elemű `int` tömbbel reprezentálunk, ahol minden elem csak `0` vagy `1` lehet.
1.  Töltsd fel a tömböt tetszőlegesen (pl. `0, 1, 0, 1, 1, 0, 0, 0`).
2.  Írj egy függvényt, amely végrehajt egy **NOT kaput** (invertálja az összes bitet: 0-ból 1, 1-ből 0).
3.  Számold meg, hány qubit van gerjesztett (`1`) állapotban az invertálás után.


---

## 💡 Segédlet a hallgatóknak
* **Tömb indexelés:** `tomb[0]` az első elem, `tomb[méret-1]` az utolsó.
* **Matematika:** Ne felejtsd el az `#include <cmath>` használatát!
* **Rekurzió:** Mindig ellenőrizd, hogy a függvényed eljut-e az alapesethez, különben `Stack Overflow` hibát kapsz.