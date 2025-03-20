# SZE-Prog-Gyak
SZE prog gyak in C/C++ and C#

# 2022/2023

Video recordings (2023):
- Prog I. 6 (2023.03.14): https://youtu.be/MajsfcvWVD4
- Prog I. 7 (2023.03.28): https://youtu.be/7M-g8LzUr9o
- Prog I. 8 (2023.04.11): https://youtu.be/Zjhtrq5nNsI
- Prog I. 9 (2023.04.18): https://youtu.be/zQbcqX0PQ1I

# Codes
- Lecture codes in [2024](./2024/)
- Lecture codes in [2025](./2025/)

# Homeworks

## Week 6 (2025)
Separate description [here](HW_desc/Week6.md)
### Small homeworks
1. Alap struktúra
   - __Feladat__: Készíts egy Diak struktúrát, amely tartalmazza egy diák nevét, életkorát és átlagát. A program kérje be egy diák adatait a felhasználótól, majd írja ki őket.
2. Struktúratömb használata
   - __Feladat__: Hozz létre egy 5 elemű tömböt, amely Diak struktúrákat tartalmaz. Kérd be minden diák adatait, majd írd ki a legjobb átlaggal rendelkező diák nevét.
   - Keresd meg a legfiatalabb diákot.
   - Számold ki az összes diák átlagának átlagát.
3. Struktúra visszatérési értékként függvényben
   - __Feladat__: Írj egy függvényt, amely egy diák adatait fogadja paraméterként, és visszaad egy módosított struktúrát, ahol az átlaghoz hozzáadunk 0.5-et (de max. 5.0 lehet).
4. Struktúra tömbbel és függvényekkel
   - __Feladat__: Készíts egy programot, amely egy maximum 10 diákot tartalmazó tömböt kezel. Írj függvényeket a következőkre:
       - Diák adatainak bekérése
       - A diákok adatainak kiírása
       - A legjobb átlaggal rendelkező diák keresése

### Large homework
Feladat leírása:
Készíts egy programot, amely egy egyetemi hallgatók adatait tárolja és kezeli. A programnak a következő funkciókat kell tartalmaznia:

- Struktúra létrehozása
  - Tantargy: tartalmazza a tantárgy nevét és jegyét.
    - __nev__: a tantárgy neve
    - __neptunKod__: a tantargy kodja
  - Hozz létre egy Hallgato struktúrát, amely tartalmazza a következő adatokat:
    - __nev__ (hallgató neve, maximum 50 karakter)
    - __neptunKod__ (6 karakterből álló egyedi azonosító)
    - __kor__ (hallgató életkora, egész szám)
    - __tantargyak__ (egy tömb, amely maximum 5 tantárgyat tárol, minden tantárgy neve egy string)
    - __jegyek__ (egy tömb, amely az előző tantárgyakhoz tartozó jegyeket tárolja, minden jegy 1 és 5 között lehet)
- Felhasználói interakciók
  - Kérd be a felhasználótól, hány hallgató adatait szeretné megadni (maximum 10).
  - Minden hallgatóhoz kérd be a fenti adatokat (név, Neptun-kód, életkor, tantárgyak és jegyek).
- Függvények létrehozása
  - __bekerHallgatok()__ – Bekéri a hallgatók adatait.
  - __kiirHallgatok()__ – Kiírja az összes hallgató adatait.
  - __legjobbAtlag()__ – Megkeresi azt a hallgatót, akinek a legmagasabb a jegyek átlaga.
  - __legtobbTargy()__ – Megkeresi azt a hallgatót, aki a legtöbb tantárgyat vette fel.
  - __keresNeptunKodAlapjan()__ – Megkeresi egy hallgató adatait egy megadott Neptun-kód alapján.
- Kimenet formázása
  - Az adatok kiírása táblázatos formában történjen.
  - Ha egy hallgatónak nincs öt jegye, akkor csak annyi oszlop jelenjen meg, amennyit felvett.

## Week 7 (2025)
Separate description [here](HW_desc/Week7.md)
