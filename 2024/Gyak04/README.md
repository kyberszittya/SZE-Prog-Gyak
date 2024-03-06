# Gyakorlat 04

## Szinusz görbe ascii art stílusban

Vizualizálja karakteres felületen a szinusz függvényt! Ha úgy könnyebb, az x tengely állhat függőlegesen is, azaz 90 fokkal el lehet forgatni az ábrát.

## Másodfokú egyenlet

Olvassunk be `a` `b` és `c` együtthatókat szabvány bemenetről

Amennyiben az értékek alapján alkotott másodfokú egyenletnek (`ax2+bx+c=0`) van valós gyöke írja ki az eredményt, különben pedig `Az egyenletenek nincs valos gyoke` szöveget.

Megjegyzés: Az egyenletnek akkor van valós gyöke, ha a négyzetgyökjel alatt álló diszkrimináns nemnegatív.

Jelezzük ki a megoldást
Segítség: a `4x2+8x−5=0`
egyenlet megoldásai: `x1=0.5,x2=−2.5`

__Plusz feladat__: amennyiben a diszkrimináns 0 és csak 1 megoldás van, akkor ezt külön jelezze!

## Rendszám ellenőrző

Írjon C++ programot, amely egy string validációját végzi el. 

A formátum egyezzen meg a leggyakoribb magyar rendszámtábla formátumával. Eszerint 7 karakter hosszúságú legyen, ennek elején három (nagy vagy kis) betű után egy kötőjel és végül három szám következzen!

A program `k` betűre lépjen ki!

Plusz feladat: Fejlessze tovább az előző feladatot, úgy, hogy a 3 betű, kötőjel, 3 szám mellett a 3 betű, három szám és a 3 betű, space, 3 szám formátumot is fogadja el. Pl. `SZE-001`, `SZE 001`, `SZE001`