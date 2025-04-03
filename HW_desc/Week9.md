# Week 8 Homeworks

Témák: memóriafoglalás, dinamikus memóriakezelés, többdimenziós tömbök, mátrixok

## Feladatok


### 1. Kétdimenziós tömb foglalása és inicializálása

Feladat:
- Írj egy programot, amely bekéri a sorok és oszlopok számát a felhasználótól!
- Dinamikusan foglalj le egy kétdimenziós tömböt.
- Töltsd fel a tömböt úgy, hogy az egyes elemek értéke a sorindex és az oszlopindex összege legyen.
- Írd ki a tömb tartalmát a képernyőre, majd szabadítsd fel a lefoglalt memóriát.

### 2. Véletlenszerűen inicializált kétdimenziós tömb

Feladat:
- Hozz létre egy előre megadott méretű (pl. 5x5) kétdimenziós tömböt dinamikus foglalással!
- Töltsd fel a tömböt véletlenszerűen generált számokkal (például 0 és 99 között).
-Írd ki a tömb tartalmát, majd gondoskodj a memória felszabadításáról.
- Kiegészítés: kérjünk be 1-1000-ig számot a szélességre és a magasságra, a tömbök dimenzióit (sorok és oszlopok számát)

### 3. Háromdimenziós tömb dinamikus foglalása

Feladat:
- Írj egy programot, amely dinamikusan foglal egy háromdimenziós tömböt (például méretek: X, Y, Z).
- Inicializáld a tömb elemeit úgy, hogy minden elem értéke legyen a megfelelő indexek (sor, oszlop, mélység) összege, vagy bármilyen más, általad választott logika alapján. (akár randomizált módon)
- Írd ki a tömb tartalmát, majd szabadítsd fel a lefoglalt memóriát a megfelelő sorrendben!

### 4. Kétdimenziós tömb struktúrában

Feladat:
- Structure definition
  - Definiálj egy strukturát, amely tartalmaz:
  - Egy pointert, ami a dinamikusan foglalt kétdimenziós tömbre mutat.
  - Két egész számot a sorok és oszlopok számának tárolására.
- Program
  - Írj egy programot, amely:
  - Létrehoz egy példányt az adott struktúrából.
  - A struktúrában tárolt méretek alapján dinamikusan foglalja le a kétdimenziós tömböt.
  - Feltölti a tömböt valamilyen mintázat szerint (például sor- és oszlopindexek szorzata vagy összege).
  - Kiírja a tömb tartalmát, majd felszabadítja a lefoglalt memóriát.

### 5. Diákok jegyeinek tárolása struktúrával és kétdimenziós tömbbel

Feladat:
- Hozz létre egy Diak nevű struktúrát, amely tartalmaz:
- Egy karaktertömböt a diák nevének tárolására.
- Egy kétdimenziós tömb pointert, amely az egyes tantárgyakhoz tartozó jegyeket tárolja.
- Változókat a tantárgyak (sorok) és az egyes tantárgyakon belüli vizsgák (oszlopok) számának megőrzésére.
- A program kérje be a diák nevét, a tantárgyak számát és minden tantárgy esetén a vizsgák számát!
- Dinamikusan foglald le a jegyek tárolására szolgáló kétdimenziós tömböt, és töltsd fel véletlenszerű (például 1–5 közötti) jegyekkel.
- Számold ki és írd ki a diák átlagos jegyét!
- Ne feledd a lefoglalt memória felszabadítását!



# Nagy házi feladat

## 1. feladat
- A Vigenére-rejtjel egy olyan titkosítási módszer, amely egy kódszó betűi alapján tolja el az egyes karaktereket az ábécében (a Caesar-kód továbbfejlesztése).
  - Pl. ha a kódszó CODE, akkor minden k*4+1-edik betűt a C betű ábécé-indexével tol el (2), minden k*4+2-ik betűt az O indexével, stb.
- A kézi kódoláshoz a tabula recta nevű táblázatot használták, ahol minden oszlopban az abc szerepel egyre nagyobb eltolással, így a kódolandó betű sorában a kódszó jelenlegi betűjéhez tartozó oszlopában található a kódolt betű.
- A feladat egy olyan program megírása, ami bekér egy kódszót, majd megjeleníti a kódszó betűihez tartozó oszlopokat.
- A táblázatot egy dinamikusan lefoglalt mátrixban tárolja el!
- Szabadítsa fel a lefoglalt memóriaterületet!
- Feladat folytatása: A táblázat megjelenítése után üres sorig kérjen be sorokat, és írja ki a kódolt szöveget a táblázat alapján!
  - A program ne tegyen különbséget a kis- és nagybetűk között és hagyja figyelmen kívül a fehér karaktereket!

## 2. feladat
- Tölts fel két kétdimenziós tömböt random számokkal. A dimenziók egyezzenek meg!
- Végezd el a következő művleteket!
  - Mátrix összeadás
  - Mátrix kivonás
  - Mátrix szorzás (elemenként)

## 3. feladat
- Tölts fel két kétdimenziós tömböt random számokkal (2x2 dimenzióval)
- Számítsd ki a sajátértékeket és a sajátvektorokat!