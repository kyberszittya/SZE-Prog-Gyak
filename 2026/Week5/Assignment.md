# Gyakorlati Feladatok (5. hét): Haladó Függvények és Struktúrák (Struct)

## Függvények témaköre

### 1. Feladat: Szinusz függvény közelítése Taylor-sorral
A számítógépek a trigonometrikus függvényeket alapvetően polinomokkal közelítik. Ennek egyik klasszikus matematikai eszköze a Maclaurin-sorba (nulla körüli Taylor-sorba) fejtés.



* **Feladat:** Írj egy `double taylorSine(double x, int terms)` függvényt, amely kiszámítja a $\sin(x)$ értékét a megadott tagok számáig!
* **Képlet:**
  $$\sin(x) \approx x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + \dots = \sum_{n=0}^{terms-1} \frac{(-1)^n}{(2n+1)!} x^{2n+1}$$
* **Segédfüggvény:** Szükséged lesz egy `double factorial(int n)` függvényre.
* **Mérnöki megjegyzés:** A faktoriális nagyon gyorsan nő, ezért a `double` visszatérési típus kötelező a túlcsordulás (integer overflow) elkerülése érdekében. Az $x$ értékét szigorúan radiánban kell megadni!

### 2. Feladat: Exponenciális függvény ($e^x$) közelítése Taylor-sorral
Az Euler-féle szám alapú exponenciális függvény Maclaurin-sora (nulla körüli Taylor-sora) az egyik legelegánsabb matematikai sorfejtés.



* **Feladat:** Írj egy `double taylorExp(double x, int terms)` függvényt, amely kiszámítja az $e^x$ értékét a megadott tagok számáig!
* **Képlet:**
  $$e^x \approx 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots = \sum_{n=0}^{terms-1} \frac{x^n}{n!}$$
* **Mérnöki megjegyzés (Optimalizáció):** Bár használhatod a beépített `pow()` és a saját `factorial()` függvényedet, egy igazi mérnök tudja, hogy ez lassú és hamar memóriatúlcsordulást (overflow) okoz. Próbáld meg az aktuális tagot az előzőből kiszámítani! Ha az előző tag $\frac{x^{n-1}}{(n-1)!}$, akkor a következő tagot megkapod, ha egyszerűen megszorzod $\frac{x}{n}$-nel. Ez az $O(n)$ komplexitású megoldás a professzionális út.

### 3. Feladat: Koszinusz függvény közelítése Taylor-sorral
A koszinusz függvény Maclaurin-sora (nulla körüli Taylor-sora) nagyon hasonlít a szinuszéra, de itt a páros kitevők és faktoriálisok dominálnak.



* **Feladat:** Írj egy `double taylorCosine(double x, int terms)` függvényt, amely kiszámítja a $\cos(x)$ értékét a megadott tagok számáig!
* **Képlet:**
  $$\cos(x) \approx 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + \dots = \sum_{n=0}^{terms-1} \frac{(-1)^n}{(2n)!} x^{2n}$$
* **Mérnöki megjegyzés (Optimalizáció):** Ahogy az előző feladatokban láttuk, a naiv megközelítés (`pow` és `factorial` hívása minden lépésben) lassú és hamar túlcsordul. Egy igazi mérnök itt is iteratívan számol: az $n$-edik tagot megkapod az előző tagból, ha megszorzod azt $\frac{-x^2}{(2n-1)(2n)}$-nel. Ezzel a módszerrel egyetlen egyszerű ciklussal, minimális műveletigénnyel kapod meg a precíz eredményt. (Ne feledd: az $x$ itt is radiánt jelent!)

---

## Struktúrák

### 1. Feladat: 2D Pont és Euklideszi távolság
Ebben a feladatban újraírjuk a korábbi távolságszámítást, de most már adatorientált megközelítéssel. Nincs többé négy különálló paraméter egy függvényben!



* **Adatszerkezet:** Definiálj egy `struct Point2D` típust, amely két `double` adattagot tartalmaz: `x` és `y`.
* **Feladat:** 1. A `main` függvényben hozz létre két `Point2D` típusú változót (`p1` és `p2`), és kérd be a koordinátáikat a felhasználótól.
    2. Írj egy `double distance2D(Point2D a, Point2D b)` függvényt, amely kiszámítja a két pont távolságát!
* **Képlet:**
  $$d = \sqrt{(b.x - a.x)^2 + (b.y - a.y)^2}$$
* **Mérnöki megjegyzés:** Figyeld meg, mennyivel tisztább a függvény szignatúrája, ha logikai egységeket (struktúrákat) adsz át paraméterként egyszerű számok helyett!


### 2. Feladat: 3D Pont és origótól mért távolság
Lépjünk ki a síkból a térbe! A 3D modellezés alapja a z-tengely bevezetése.



* **Adatszerkezet:** Definiálj egy `struct Point3D` típust, amely három `double` adattagot tartalmaz: `x`, `y` és `z`.
* **Feladat:**
    1. Hozz létre egy 3D pontot, és adj neki kezdeti értékeket.
    2. Írj egy `double distanceFromOrigin(Point3D p)` függvényt, amely kiszámítja a pont távolságát az origótól $(0, 0, 0)$.
* **Képlet (vektor hossza):**
  $$d = \sqrt{p.x^2 + p.y^2 + p.z^2}$$
* **Kihívás:** Próbáld meg az adatokat már a deklarációkor inicializálni (pl. `Point3D p1 = {3.0, 4.0, 5.0};`), elkerülve a felesleges bekéréseket!

### 3. Feladat: Komplex számok modellezése (Struct)
A kvantummechanikában és a jelfeldolgozásban elengedhetetlen a komplex számok használata. C++-ban ezt az összetett adatot egyetlen struktúrába zárhatjuk.

* **Feladat:** Definiálj egy `struct Complex` típust, amely két `double` adattagot tartalmaz: `real` (valós rész) és `imag` (képzetes rész).
* **Függvények:**
    1. Írj egy `Complex add(Complex a, Complex b)` függvényt, amely elvégzi az összeadást: $(a_1 + b_1) + (a_2 + b_2)i$.
    2. Írj egy `void printComplex(Complex c)` függvényt, amely formázottan kiírja az eredményt (pl. $3.5 + 2.1i$).

---

### 4. Feladat: Exobolygó katalógus (Struct tömbök)
Az adatbázisok kezelésének alapja, hogy a logikailag összetartozó adatokat (rekordokat) egyetlen egységként kezeljük és tömbösítjük.

* **Feladat:** Hozz létre egy `struct Exoplanet` típust a következő adattagokkal:
    * `name` (sztring, a bolygó neve)
    * `mass` (Föld-tömeg, double)
    * `distance` (távolság fényévben, double)
* **Logika:**
    1. A `main` függvényben hozz létre egy 3 elemű tömböt a struktúrából, és inicializáld fix adatokkal.
    2. Írj egy `void printClosestPlanet(Exoplanet planets[], int size)` függvényt, amely megkeresi és kiírja a Földhöz legközelebbi (legkisebb `distance` értékű) exobolygó minden adatát!