# Számítógépes grafikai házi feladat

## Vulkan több-test szimuláció
Készíts egy egyszerű Vulkan alkalmazást, amely szimulálja több test (pl. gömbök) mozgását egy 3D térben. A testeknek legyenek fizikai tulajdonságai (tömeg, sebesség), és legyenek képesek ütközni egymással.

- Grafikus shader-eket kell írni a testek megjelenítéséhez.
- Egy egyszerű kamera vezérlést is implementálni kell, hogy a felhasználó körbejárhassa a szimulációt.
- Opcionálisan egy homogén erőteret is hozzáadhatsz, hogy a testek gyorsuljanak lefelé (gravitáció).

## Vulkan NURBS görbe rajzoló
Készíts egy Vulkan alkalmazást, amely képes NURBS (Non-Uniform Rational B-Splines) görbéket rajzolni. A felhasználó adjon meg vezérlőpontokat, és a program jelenítse meg a görbét ezek alapján.

- Implementálj egy egyszerű GUI-t, ahol a felhasználó hozzáadhat, eltávolíthat vagy módosíthat vezérlőpontokat.
- A görbe megjelenítéséhez használj shader-eket, és biztosítsd, hogy a görbe sima legyen, függetlenül a vezérlőpontok számától.
- Opcionálisan adj hozzá lehetőséget a görbe színének vagy vastagságának módosítására.

## Vulkan geometriai elemek transzformációja
Készíts egy Vulkan alkalmazást, amely képes geometriai elemek (pl. kockák, gömbök) transzformációjára (forgatás, skálázás, eltolás) egy 3D térben.
- Implementálj egy egyszerű GUI-t, ahol a felhasználó kiválaszthatja az elemet,
- Megadhatja a transzformáció típusát és értékét (pl. forgatás szöge, skálázás mértéke, eltol
- Plusz: egy mátrix transzformációs rendszert is implementálhatsz, ahol a felhasználó közvetlenül megadhatja a transzformációs mátrixot, és a program alkalmazza azt az elemre.