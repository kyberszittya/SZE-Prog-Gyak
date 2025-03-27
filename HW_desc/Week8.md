# Week 8 Homeworks

Témák: mutatók, memóriafoglalás, dinamikus memóriakezelés

## Feladatok

Ez a feladatsor **fokozatosan nehezedő C++ feladatokat** tartalmaz, melyek célja a **dinamikus memóriafoglalás és pointerek** gyakorlása. Minden feladat egy új koncepciót vezet be, építve az előzőekre.

---

## 1. feladat – Egyszerű dinamikus változó

**Cél:** `new` és `delete` használata alap szinten.

**Feladat:**

Írj egy programot, amely:

- Dinamikusan foglal egy `int` típusú változót,
- Bekéri a felhasználótól az értékét,
- Kiírja a dupláját,
- Felszabadítja a memóriát `delete` használatával.

---

## 2. feladat – Dinamikus tömb

**Cél:** Dinamikus tömb létrehozása és felszabadítása.

**Feladat:**

- Kérd be a felhasználótól egy `n` értéket.
- Dinamikusan foglalj egy `n` elemű `int` tömböt.
- Töltsd fel a tömböt `n` egész számmal.
- Számítsd ki és írd ki az elemek átlagát.
- Szabadítsd fel a memóriát `delete[]` használatával.

---

## 3. feladat – Tömb másolása

**Cél:** Mély másolat készítése dinamikus tömbök között.

**Feladat:**

- Kérd be a tömb méretét és elemeit.
- Dinamikusan hozz létre egy második tömböt.
- Másold át az értékeket.
- A második tömb minden elemét növeld meg 10-zel.
- Írd ki mindkét tömböt.
- Felszabadítás `delete[]` használatával.

---

## 4. feladat – Dinamikus struktúrapéldány

**Cél:** Struktúra dinamikus példányosítása és pointerrel való elérése.

**Feladat:**

- Hozz létre egy `struct Szemely` típust: `string nev`, `int eletkor`.
- Dinamikusan hozz létre egy `Szemely` objektumot.
- Kérd be az adatokat, és írd ki őket.
- Szabadítsd fel a memóriát `delete` használatával.

---

## 5. feladat – Tömb struktúrákkal

**Cél:** Dinamikus tömb struktúratagokkal.

**Feladat:**

- Hozz létre egy `struct Konyv` típust: `string cim`, `string szerzo`, `int ev`.
- Kérd be, hány könyvet szeretne a felhasználó tárolni.
- Dinamikusan hozz létre egy tömböt.
- Töltsd fel az adatokat.
- Írd ki az összes könyvet.
- Szabadítsd fel a memóriát.

---

## 6. feladat – Tömb átméretezése

**Cél:** Átméretezhető tömb (dinamikus újrafoglalás).

**Feladat:**

- Hozz létre egy kezdetben 3 elemű tömböt.
- Engedd meg, hogy a felhasználó újabb elemeket adjon hozzá.
- Minden új elemnél:
  - Hozz létre új, nagyobb tömböt,
  - Másold át a régit,
  - Szabadítsd fel a régit.
- Addig folytasd, amíg a felhasználó nem ír be negatív számot.

---

## 7. feladat – Dinamikus mátrix

**Cél:** Két dimenziós dinamikus tömb kezelése (`int**` mátrix).

**Feladat:**

- Kérd be egy mátrix méretét (`m x n`).
- Dinamikusan hozz létre egy `int**` mátrixot.
- Töltsd fel a mátrixot,
- Számítsd ki:
  - az elemek összegét,
  - soronként az átlagot.
- Szabadítsd fel:
  - minden sort (`delete[]`),
  - a fő pointert is (`delete[]`).

---

## 8. feladat – Memóriaszivárgás keresés

**Cél:** Hibás kódrészlet javítása, memória visszaadása.

**Feladat:**

- Kapsz egy hibás kódrészletet, amely több `new`-t tartalmaz, de nem minden `delete` van benne.
- Azonosítsd a memóriaszivárgásokat.
- Javítsd a kódot úgy, hogy minden lefoglalt memória felszabadításra kerüljön.