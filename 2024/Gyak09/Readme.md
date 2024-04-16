# Gyakorlat 09

## Pascal háromszög
Készítsük el a Pascal-háromszög kiszámítását és jelenítsük meg a képernyőn - nem kell igazítani, formázni a kimenetet, soronként elég kiírni

[Megoldás](main.cpp)

Bemeneti, konzolos argumentumokkal: [megoldás](pascal_arg.cpp)

## Műveletek mátrixokkal
Készítsünk programot, amely nxn mátrixokat ad össze
* Két mátrixot foglaljunk le
* A mátrix feltöltése lehet randomizált vagy user inputról (std::cin)
* Az elemeit töltsük fel random számokkal
* Ha ez meg van szorozzuk össze a maátrixokat

[Megoldás](matrixos.cpp)

## Szorgalmi feladat - Vigniere rejtjelezés
- A Vigenére-rejtjel egy olyan titkosítási módszer, amely egy kódszó betűi alapján tolja el az egyes karaktereket az ábécében (a Caesar-kód továbbfejlesztése). Pl. ha a kódszó CODE, akkor minden k*4+1-edik betűt a C betű ábécé-indexével tol el (2), minden k*4+2-ik betűt az O indexével, stb.
- A kézi kódoláshoz a tabula recta nevű táblázatot használták, ahol minden oszlopban az abc szerepel egyre nagyobb eltolással, így a kódolandó betű sorában a kódszó jelenlegi betűjéhez tartozó oszlopában található a kódolt betű.
- A feladat egy olyan program megírása, ami bekér egy kódszót, majd megjeleníti a kódszó betűihez tartozó oszlopokat.
- A táblázatot egy dinamikusan lefoglalt mátrixban tárolja el!
- Szabadítsa fel a lefoglalt memóriaterületet!
- __Feladat folytatása__: A táblázat megjelenítése után üres sorig kérjen be sorokat, és írja ki a kódolt szöveget a táblázat alapján!
- A program ne tegyen különbséget a kis- és nagybetűk között és hagyja figyelmen kívül a fehér karaktereket!- 
