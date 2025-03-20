# Week 7 homeworks

Témák: mutatók, mutatótömbök, struktúratömbök

## Homeworks

1. Alapmutatók – Egyszerű értékadás és dereferálás
  - Feladat: Írj egy programot, amely:
    - Deklarál egy int változót és egy mutatót (int*).
    - A mutatóval módosítja az int változó értékét.
    - Kiírja az eredményt.
    - Elvárt output például: ```
        Eredeti érték: 10  
        Módosított érték mutatón keresztül: 20```
2. Tömbök és mutatók kapcsolata
    - Feladat: Deklarálj egy int tömböt 5 elemmel.
      - Írj egy függvényt, amely egy int* mutatón keresztül bejárja a tömböt és kiírja az elemeket.
      - Mintaoutput: ```Tömb elemei: 1 2 3 4 5```
3. Mutatók és dinamikus memóriafoglalás
    - Feladat: Foglalj dinamikusan egy int értéket a new (C++) vagy malloc (C) használatával.
       - Állítsd be az értékét, majd írasd ki.
       - Felszabadítás után próbáld meg kiírni az értéket (figyelj a dangling pointer problémára!).
4. Pointerek és függvények (Call by Reference)
    - Feladat: Írj egy függvényt, amely két számot kap paraméterként mutatók segítségével, és kicseréli az értékeiket.
    - Példaoutput:
```
A csere előtt: a = 5, b = 10  
A csere után: a = 10, b = 5
```
5. Pointerek és karaktertömbök (String kezelés)
    - Feladat: Írj egy függvényt, amely egy karaktertömböt (char* típus) fogad paraméterként, és megfordítja a benne lévő karaktereket mutatómanipulációval.
```
Bemenet: "hello"
Kimenet: "olleh"
```
6. Többdimenziós tömbök és pointerek
    - Feladat: Hozz létre egy 3×3 méretű mátrixot.
    - Írj egy függvényt, amely mutatón keresztül kiírja a mátrixot.
7. Pointerek és dinamikusan foglalt tömbök
    - Feladat: Kérd be a felhasználótól, hány számot szeretne tárolni.
    - Foglalj dinamikusan megfelelő méretű memóriát.
    - Töltsd fel a tömböt random számokkal, majd írasd ki.
8. Pointerek és struktúrák
    - Feladat: Hozz létre egy struct típust, amely egy személy nevét és életkorát tárolja.
    - Készíts egy függvényt, amely egy mutató segítségével inicializálja az adatokat.
    - Írasd ki az értékeket.
9. Pointerek és függvénymutatók
    - Feladat: Írj egy programot, amely egy függvénymutató segítségével több műveletet (összeadás, kivonás) hajt végre két szám között.
    - Mintaoutput:
```
Összeadás: 10 + 5 = 15  
Kivonás: 10 - 5 = 5
```
10. Pointerek és láncolt lista
    - Feladat:
    - Hozz létre egy egyszerű láncolt listát struct és mutatók segítségével.
    - Írj egy függvényt az elemek hozzáadására és kiíratására.
