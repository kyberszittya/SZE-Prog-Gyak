# Feladatok (8. gyakorlat)

## 1. feladat: mySin

Készítsük el a matematikai függvénykönyvtár mintájára a saját szinusz függvényünket, melynek prototípusa legyen a következő: double mySin(double x) Számítsa ki a függvény értékét annak Taylor-sorával! Ennek minél több tagját kiszámítja és összegzi, annál pontosabban fogja megkapni a keresett értéket. Mivel a gyakorlatban a végtelen sok tag kiszámítása lehetetlen, ezért az eredmény pontosításával álljon le akkor, amikor egy újabb tag előállításával már 10-9-nél nem nagyobb mértékben változik a tagok összege.

$
\( \textrm{sin} x = \sum_{n=0}^\infty \frac{(-1)^n}{(2n+1)!}x^{2n+1} \, \textrm{ahol} \, x \in \mathbb{R} \)$

## 2. feladat: myCos

Önálló feladat

Az előző feladat mintájára definiálja a double myCos(double x) függvényt is! Álljon ellen a kísértésnek, és ne vezesse vissza most a koszinusz függvény működését a már létező szinusz függvényre, hanem implementálja a függvény saját Taylor-sorát, ami nagyon hasonló a szinusz függvényéhez, azaz 

$\( \textrm{cos}x = \sum_{n=0}^\infty \frac{(-1)^n}{(2n)!}x^{2n} \, \textrm{ahol} \, x \in \mathbb{R} \)$

## 3. feladat: Struktúra személyek

Készítsen programot, amely személyek születési évét, hónapját, napját és nevét képes tárolni! Olvassa be 5 személy adatait a standard bemenetről, majd rendezze a tömböt a személyek kora szerinti növekvő sorrendbe! Végül jelenítse is meg ennek elemeit!

## Github repo
https://github.com/kyberszittya/SZE-Prog-Gyak