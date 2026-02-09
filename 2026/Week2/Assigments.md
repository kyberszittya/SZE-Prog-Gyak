# Feladatok - 2. hét

## I. Algoritmikus Bemelegítés (Ismétlés)

### 1. Feladat: Intelligens Stop-feltétel
Írj egy programot, amely egész számokat kér be a felhasználótól egy ciklusban. A program álljon le, ha a felhasználó **ugyanazt a számot adja meg kétszer egymás után**.

### 2. Feladat: Konzol-lépcső
Kérj be egy `N` természetes számot, majd rajzolj ki a konzolra egy `N` magas lépcsőt `#` karakterekből.
*Példa (N=3):*

### 3. Feladat: Pascal-háromszög
Írasd ki a Pascal-háromszög első `N` sorát. Ügyelj a számok közötti távolságra a megfelelő formázáshoz.

---

## Elméleti áttekintő feladatok

### Faktoriális Számoló (Rekurzió)
__Feladat__: Írj egy rekurzív függvényt, amely kiszámolja egy adott szám faktoriálisát (n!). Kérj be egy számot a felhasználótól, és írd ki a faktoriálisát.
- __Fókusz__: Rekurzív függvények, alapvető matematikai műveletek.


### 1-től N-ig terjedő számok (Függvények és ciklusok)
__Feladat__: Írj egy programot, amely bekér egy számot N, majd kiírja az összes számot 1-től N-ig.
- __Fókusz__: Függvények definiálása és hívása, ciklusok használata.

### 1-től N-ig terjedő páros számok (Függvények és ciklusok)
__Feladat__: Írj egy programot, amely bekér egy számot N, majd kiírja az összes páros számot 1-től N-ig.
- __Fókusz__: Függvények definiálása és hívása, ciklusok használata.

### 1-től N-ig terjedő prímszámok (Függvények és ciklusok)
__Feladat__: Írj egy programot, amely bekér egy számot N, majd kiírja az összes prímszámot 1-től N-ig.
- __Fókusz__: Függvények definiálása és hívása, ciklusok használata.

### Fibonacci Sorozat (Függvények és rekurzió)
__Feladat__: Írj egy rekurzív függvényt, amely visszaadja a Fibonacci sorozat N-edik elemét. Kérj be egy számot a felhasználótól, és írd ki a megfelelő Fibonacci számot.
- __Fókusz__: Rekurzió, függvények.

---

## II. Alapozó Függvények (Modularitás)

### 1. Feladat: Abszolút érték számítása

**Bemenet (std::cin):**
- `n` — valós szám

**Feladat:**
Írj egy `double absoluteValue(double n)` függvényt, amely visszaadja a szám abszolút értékét (távolságát a nullától). Ne használd a beépített `abs()` függvényt!

A matematikai definíció:
$$
|n| =
\begin{cases}
n, & \text{ha } n \ge 0 \\
-n, & \text{ha } n < 0
\end{cases}
$$

**Kimenet:**
- a szám abszolút értéke (mindig nemnegatív)

---

### 2. Feladat: Előjel (Signum) függvény

**Bemenet (std::cin):**
- `n` — valós szám

**Feladat:**
Készíts egy `int signum(double n)` függvényt, amely megadja a szám előjelét. Ez a függvény gyakran használt fizikai szimulációkban az irányok meghatározására.

A definíció:
$$
sgn(n) =
\begin{cases}
-1, & \text{ha } n < 0 \\
0, & \text{ha } n = 0 \\
1, & \text{ha } n > 0
\end{cases}
$$

**Kimenet:**
- `-1`, `0` vagy `1` a szám előjelétől függően


### 3. Feladat: Hőmérséklet Konverter
Készíts egy `double toFahrenheit(double celsius)` függvényt. A `main` függvényben kérj be egy értéket, és hívd meg a konvertert.

### 4. Másodfokú egyenlet megoldása

**Bemenet (std::cin):**
- `a, b, c` — valós számok, `a ≠ 0`

**Feladat:**
Oldd meg:
$
ax^2+bx+c=0
$
Diszkrimináns:
$
\Delta=b^2-4ac
$

- ha $(\Delta<0)$: nincs valós megoldás
- ha $(\Delta=0)$: 1 valós gyök
- ha $(\Delta>0)$: 2 valós gyök:
  $
  x_{1,2}=\frac{-b\pm\sqrt{\Delta}}{2a}
  $

**Kimenet:**
- a valós gyök(ök), vagy jelzés, hogy nincs valós megoldás

**Példa bemenet:**
- `a = 1`
- `b = -3`
- `c = 2`

**Példa kimenet:**
- `x1 = 1`
- `x2 = 2`

### 5. Feladat: Háromszög-ellenőr
Írj egy `bool isValidTriangle(double a, double b, double c)` függvényt, amely a háromszög-egyenlőtlenség alapján eldönti, megszerkeszthető-e az alakzat.

### 6. Feladat: Gömb térfogatának kiszámítása

**Bemenet (std::cin):**
- `R` — a gömb sugara (valós szám, `R > 0`)

**Feladat:**
Számítsd ki a gömb térfogatát: $V =\frac{4}{3}\pi R^3$


**Kimenet:**
- `V` — a gömb térfogata

**Példa bemenet:**
- `R = 2.5`

**Példa kimenet (kb.):**
- `V ≈ 65.4498`

### 7. Feladat: Henger térfogatának kiszámítása

**Bemenet (std::cin):**
- `r` — a henger sugara (valós szám, `r > 0`)
- `h` — a henger magassága (valós szám, `h > 0`)

**Feladat:**
Számítsd ki a henger térfogatát:
$
V=\pi r^2 h
$

**Kimenet:**
- `V` — a henger térfogata

**Példa bemenet:**
- `r = 1.8`
- `h = 4.2`

**Példa kimenet (kb.):**
- `V ≈ 42.7527`



### 8. feladat: Ellipszoid térfogatának kiszámítása

Az ellipszoidot a fél-főtengelyek adják: `a`, `b`, `c`.

**Bemenet (std::cin):**
- `a, b, c` — fél-főtengelyek (valós számok, mind > 0)

**Feladat:**
Számítsd ki az ellipszoid térfogatát:
$
V=\frac{4}{3}\pi abc
$

**Kimenet:**
- `V` — az ellipszoid térfogata

**Példa bemenet:**
- `a = 2.0`
- `b = 1.5`
- `c = 3.0`

**Példa kimenet (kb.):**
- `V ≈ 37.6991`

##  9. feladat: Komplex forma térfogata — Steinmetz-test (két merőleges henger metszete)

![steinmetz](https://upload.wikimedia.org/wikipedia/commons/thumb/0/05/Steinmetz-solid.svg/1280px-Steinmetz-solid.svg.png)

Ez egy klasszikusan „furcsa” test: két azonos sugarú henger metszi egymást derékszögben.
A hengerek sugara legyen `r`. A metszettest térfogata:

$
V=\frac{16}{3}r^3
$

**Bemenet (std::cin):**
- `r` — a hengerek sugara (valós szám, `r > 0`)

**Feladat:**
Számítsd ki a Steinmetz-test térfogatát a fenti képlet alapján.

**Kimenet:**
- `V` — a metszettest térfogata

**Példa bemenet:**
- `r = 2.0`

**Példa kimenet (kb.):**
- `V ≈ 42.6667`

### 10. Feladat: Egyszerű numerikus közelítés — négyzetgyök (Babiloni / Newton-módszer)

**Cél:** közelítsd $(\sqrt{S})$-t iterációval (nagyon alap, 2–3 képlet).

**Bemenet (std::cin):**
- `S` — pozitív valós szám (`S > 0`)
- `k` — iterációk száma (pl. 5–20)

**Módszer (Babiloni/Newton):**
Válassz kezdőértéket, pl. $(x_0 = S)$ (vagy $(x_0 = 1)$).

Iteráció:
$[
x_{n+1} = \frac{1}{2}\left(x_n + \frac{S}{x_n}\right)
]$

**Feladat:**
- Számold ki $(x_k)$-t.
- Írd ki a közelítést, és (opcionálisan) a hibát is: $(|x_k^2 - S|)$.

**Kimenet:**
- `sqrt_approx` — $(\sqrt{S})$ közelítése
- (opcionális) `error = |sqrt_approx^2 - S|`

**Példa bemenet:**
- `S = 10`
- `k = 6`

**Példa kimenet (kb.):**
- `sqrt_approx ≈ 3.16227766`
- `error ≈ 0.00000000...`

### 11. Feladat: Monte-Carlo közelítés — $(\pi)$ becslése (negyedkör a négyzetben)

**Cél:** becsüld meg \(\pi\)-t véletlen mintavételezéssel.

**Geometriai ötlet:**
Vegyünk egy egységnégyzetet: $([0,1]\times[0,1])$, benne egy negyedkört sugárral $(r=1)$,
$[
x^2 + y^2 \le 1
]$
A negyedkör területe: $(\frac{\pi r^2}{4} = \frac{\pi}{4})$.
A négyzet területe: $(1)$.

Ezért:
$[
\frac{\text{bent}}{\text{összes}} \approx \frac{\pi}{4}
\quad\Rightarrow\quad
\pi \approx 4 \cdot \frac{N_{\text{bent}}}{N}
]$

**Bemenet (std::cin):**
- `N` — mintaszám (pl. 100000…5000000)

**Monte-Carlo algoritmus:**
1. Ismételd $(N)$-szer:
    - generálj véletlen $(x,y)$-t egyenletesen $([0,1])$-ben
    - ha $(x^2+y^2 \le 1)$, akkor `bent++`
2. Számold:
   $[
   \pi_{\text{mc}} = 4 \cdot \frac{N_{\text{bent}}}{N}
   ]$

**Kimenet:**
- `pi_mc` — a $(\pi)$ közelítése
- (opcionális) `abs_err = |pi_mc - 3.141592653589793|`

**Példa bemenet:**
- `N = 1000000`

**Példa kimenet (tipikusan, kb.):**
- `pi_mc ≈ 3.1410 ... 3.1425` (random, szórni fog)
- `abs_err ≈ 0.0001 ... 0.0015`

--- 
## III. Rekurzió (Az önhasonló logika)

### 1. Feladat: Rekurzív összegzés (A sorozat alapja)
Valósíts meg egy függvényt, amely kiszámítja az első `N` természetes szám összegét rekurzív módon!
* **Matematikai modell:** $S(n) = n + S(n-1)$, ahol $S(1) = 1$.
* **Fókusz:** Az alapeset (base case) azonosítása, ahol a rekurzió "visszafordul".
* **Kihívás:** Mi történik, ha `N = 0` értéket adunk meg?

### 2. Feladat: Legnagyobb Közös Osztó (Euklideszi algoritmus)
Készíts egy rekurzív `gcd(a, b)` függvényt, amely megkeresi két szám legnagyobb közös osztóját! Ez az RSA titkosítás és a Shor-algoritmus egyik legfontosabb matematikai építőköve.
* **Logika:** $gcd(a, b) = gcd(b, a \pmod b)$, az alapeset pedig az, amikor a maradék nulla.
* **Fókusz:** A maradékos osztás (%) használata rekurzív hívásban.

### 3. Feladat: Rekurzív hatványozás ($a^n$)
A hatványozás folyamata önhasonló módon is leírható: $a^n = a \cdot a^{n-1}$.

**Feladat:**
Valósítsd meg az `int power(int base, int exp)` függvényt rekurzióval!

* **Alapeset:** Bármely szám a nulladikon = 1 ($a^0 = 1$).
* **Kihívás (Optimális hatványozás):** Próbáld meg hatékonyabbá tenni! Ha az `exp` páros, akkor $a^n = (a^{n/2})^2$. Ezzel jelentősen csökkenthető a függvényhívások száma.

### 4. Feladat: Decimális-Bináris átalakító (Rekurzív)
A kvantumbiteket (qubiteket) gyakran bináris láncként ábrázoljuk. Alakítsunk át egy tizes számrendszerbeli számot kettes számrendszerbe!

**Feladat:**
Írj egy `void printBinary(int n)` függvényt, amely rekurzió segítségével írja ki a szám bináris alakját!

* **Logika:** A függvény hívja meg magát `n / 2` értékkel, majd írja ki az `n % 2` maradékot.
* **Fókusz:** Figyeld meg a kiíratás helyét! A `std::cout` a rekurzív hívás **előtt** vagy **után** szerepeljen, hogy a bitek sorrendje helyes legyen? (A verem/stack sorrend megértése).

---

## IV. Kvantummechanikai és Informatikai Szimulációk

### 1. Feladat: Born-szabály
A kvantummechanikában a mérési valószínűség az amplitúdó négyzete ($P = | \psi |^2$). Készíts egy `double bornRule(double amplitude)` függvényt, amely százalékos formában adja vissza az eredményt.

### 2. Feladat: Qubit Állapot-számláló
Egy $n$ qubitből álló regiszter $2^n$ állapotot képes lefedni. Írj egy függvényt, amely kiszámítja ezt az értéket tetszőleges $n$ bemenetre.

### 3. Feladat: Dekoherencia Szimulátor
Szimuláld a kvantumállapot szétesését! Írj egy függvényt, amely egy bemeneti állapotot és egy hibaarányt kap. Egy belső logikai vizsgálat alapján döntse el, hogy az információ megmaradt-e vagy elveszett.

---

## V. Szorgalmi Feladat (nehéz)

### 1. Feladat
Ellenőrizd a II.9. feladatot **Monte Carlo** közelítéssel:
- vegyél sok véletlen pontot egy $([-r,r]\times[-r,r]\times[-r,r])$ kockában,
- számold meg, hány pont esik a metszetbe:
    - $(x^2+y^2\le r^2)$ **és** $(x^2+z^2\le r^2)$,
- a térfogat közelítése: $(V \approx V_{\text{kocka}}\cdot \frac{N_{\text{bent}}}{N})$, ahol $(V_{\text{kocka}}=(2r)^3)$.

**Példa paraméter:**
- `r = 2.0`, `N = 1_000_000` (nagy N → jobb közelítés)

### 2. Feladat: Nemlineáris geometriai feladat — körszelet sugara adott területből (numerikus)

Egy körszeletet (körsegment) definiál a kör sugara `R` és a szelet magassága `h` (0 < h < 2R).
A körszelet területe:
$
A(R)=R^2\arccos\!\left(\frac{R-h}{R}\right)-(R-h)\sqrt{2Rh-h^2}
$

**Bemenet (std::cin):**
- `h` — a körszelet magassága (valós szám, `h > 0`)
- `A_target` — a körszelet területe (valós szám, `A_target > 0`)

**Feladat:**
Találd meg `R`-t **numerikusan** (pl. felezéses módszerrel), hogy:
$
A(R)=A_{target}
$

**Javaslat a numerikus megoldáshoz (felezés):**
- válassz kezdeti intervallumot:
    - `R_low = h/2 + ε` (pl. ε = 1e-6)
    - `R_high` elég nagy (pl. indulásnak `10*h`, és ha még mindig `A(R_high) < A_target`, akkor duplázd, amíg nem lesz elég nagy)
- iterálj, amíg `|A(R_mid) - A_target| < tol` (pl. `tol = 1e-6`)

**Kimenet:**
- `R` — a sugár közelítő értéke

**Példa bemenet:**
- `h = 2.0`
- `A_target = 11.1416`

**Példa kimenet (kb.):**
- `R ≈ 3.0000`

*(Megjegyzés: a példában az `A_target` olyan érték, ami nagyjából `R = 3`-hoz tartozik, így ellenőrizhető.)*

