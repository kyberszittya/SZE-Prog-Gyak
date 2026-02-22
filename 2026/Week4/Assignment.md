# Feladatok (4. hét): Sztringek (szövegláncok)

## I.Feladatok sztringekkel

### 1. Feladat: Szöveg megfordítása (Reverse String)
A sztringek kezelésének alapja az indexelés megértése.

- __Feladat__: Kérj be egy szót, majd írd ki fordítva!
- __Technikai részlet__: Ne használj beépített reverse függvényt! Oldd meg egy ciklussal, amely a sztring végétől halad az eleje felé.
- __Bónusz__: Valósítsd meg a cserét "helyben" (in-place), egy átmeneti változó segítségével a sztring első és utolsó elemeit cserélgetve.

### 2. Feladat: Palindrom ellenőrző
Egy szó akkor palindrom, ha visszafelé olvasva is ugyanaz (pl. "görög", "level").

- __Feladat__: Írj egy bool isPalindrome(string s) függvényt!
- __Logika__: Hasonlítsd össze az első karaktert az utolsóval, a másodikat az utolsó előttivel, és így tovább.

_Pseudocode_:
```
FUNCTION IsPalindrome(text)
    n = length of text
    FOR i = 0 TO (n / 2) - 1
        IF text[i] != text[n - 1 - i] THEN
            RETURN false
        END IF
    END FOR
    RETURN true
END FUNCTION
```

## II. Szöveges statisztika és analízis
### 1. Feladat: Karaktertípus számláló
A szövegbányászat első lépése a tartalom elemzése.

- __Feladat__: Kérj be egy mondatot, és számold meg:
  - Hány magánhangzó van benne?
  - Hány szóköz található benne?
  - Hány írásjel (pont, vessző, felkiáltójel) van benne?
  - Hány számjegy van benne?
  - Hány mássalhangzó van benne?
- __Segédfüggvények__: Készíts külön függvényeket a magánhangzók, szóközök és írásjelek számlálására, hogy a fő logika tiszta maradjon!
  - __Általános tipp__: boolean függvényekkel ellenőrizheted, hogy egy karakter magánhangzó-e, írásjel-e, stb., majd ezeket a függvényeket használhatod a számlálás során.
    - ```bool isVowel(char c)```: Ellenőrzi, hogy a karakter magánhangzó-e.
      - ```C++ kód: if (strchr("aeiouAEIOU", c) != nullptr) { return true; } else { return false; }``` 
      - ```C++ alternatív: char lowerC = tolower(c); if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') { return true; } else { return false; }```
    - ```bool isSpace(char c)```: Ellenőrzi, hogy a karakter szóköz-e.
      - C++ kód: ```return c == ' ';```
      - C++ alternatív: ```return isspace(c);``` (ez a függvény a whitespace karaktereket ismeri fel, beleértve a tabulátorokat és új sorokat is)
    - ```bool isPunctuation(char c)```
      - C++ kód: ```return c == '.' || c == ',' || c == '!';```
      - C++ alternatív: ```return ispunct(c);``` (ez a függvény az összes írásjelet felismeri, nem csak a pontot, vesszőt és felkiáltójelet)
    - ```bool isDigit(char c)```
      - C++ kód: ```return c >= '0' && c <= '9';```
      - C++ alternatív: ```return isdigit(c);``` (ez a függvény a számjegyeket felismeri)
    - ```bool isConsonant(char c)```
      - C++ kód: ```return isalpha(c) && !isVowel(c);``` (ellenőrzi, hogy a karakter egy betű-e és nem magánhangzó)
      - C++ alternatív: ```char lowerC = tolower(c); return (lowerC >= 'a' && lowerC <= 'z') && !isVowel(lowerC);```
  - ```unsigned int countVowels(string s)```: Számolja meg a magánhangzókat (a, e, i, o, u és nagybetűs változataik).
    - __TIPP__: Használj egy karaktertömböt vagy egy stringet a magánhangzók tárolására, és egy ciklussal ellenőrizd, hogy a karakter benne van-e!
    - __TIPP__: Használhatod a tolower() függvényt, hogy ne kelljen külön kezelni a nagybetűket!
    - C++ kód: ```cpp string vowels = "aeiouAEIOU";```
    - C++ kód az ellenőrzéshez: ```if (vowels.find(s[i]) != string::npos) { /* magánhangzó */ }```
    - C++ alternatív: ```if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || ... ) { /* magánhangzó */ }```
    - C++ alternatív 2: ```if (strchr("aeiouAEIOU", s[i]) != nullptr) { /* magánhangzó */ }```
    - C++ alternatív ciklussal: ```for (char v : vowels) { if (tolower(s[i]) == v) { /* magánhangzó */ break; } }```
  - ```unsigned int countSpaces(string s)```: Számolja meg a szóközöket.
    - TIPP: Egyszerűen hasonlítsd össze a karaktert a szóközzel (' ').    
  - ```unsigned int countPunctuation(string s)```: Számolja meg a pontokat, vesszőket és felkiáltójeleket.
    - TIPP: Használj egy karaktertömböt vagy stringet az írásjelek tárolására, és hasonlítsd össze a karaktert ezekkel!
  - ```unsigned int countDigits(string s)```: Számolja meg a számjegyeket (0-9).
    - TIPP: Használhatod az isdigit() függvényt, vagy hasonlítsd össze a karaktert a '0' és '9' közötti tartománnyal!
  - ```unsigned int countConsonants(string s)```: Számolja meg a mássalhangzókat.
    - TIPP: A mássalhangzók azok a karakterek, amelyek nem magánhangzók, nem szóközök, nem írásjelek és nem számjegyek. Használhatod a tolower() függvényt, hogy ne kelljen külön kezelni a nagybetűket, és ellenőrizd, hogy a karakter egy betű-e (isalpha()) és nem magánhangzó!
- __Tipp__: Használd a std::string .length() metódusát és a karakterek ASCII értékét vagy a tolower() függvényt az összehasonlításhoz!

### 2. Feladat: Szavak száma egy mondatban
A szavak számlálása egy alapvető szövegelemzési feladat.
- __Feladat__: Kérj be egy mondatot, és számold meg, hány szó van benne! (Szavak elválasztása szóközzel)
- __Technikai részlet__: Használj egy ciklust a sztring karakterein, és számold meg a szóközök számát, majd adj hozzá 1-et a végén (ha a mondat nem üres).
- __Bónusz__: Kezeld a több szóközt egymás után, és a mondat elején vagy végén lévő szóközöket is!

## III. Komplex feladatok sztringekkel

###

### 2. Feladat: Anagramma ellenőrzése (Anagram Checker)
Az anagramma két szónak vagy kifejezésnek az a tulajdonsága, hogy ugyanazokat a karaktereket tartalmazzák, ugyanabban a mennyiségben, de más sorrendben.

__Példák anagrammákra__: "listen" és "silent", "evil" és "vile", "triangle" és "integral".

__Feladat__: Kérj be két szót, majd ellenőrizd, hogy anagrammák-e!

__Technikai részlet__: Használj egy karaktertömböt vagy egy szótárat a karakterek számolásához, majd hasonlítsd össze a két sztring karaktereloszlását.

### 3. Feladat - Nemzetközi Rendszámellenőrző
A szoftverfejlesztésben gyakran kell adatokat (telefonszám, rendszám, e-mail) ellenőrizni. Ebben a feladatban egy olyan modult kell írnod, amely felismeri és validálja a különböző országok rendszámformátumait.

1. __Magyar rendszámok__: Régi formátum: 3 betű, egy kötőjel, majd 3 szám (pl. ABC-123). 
  - __Validálás__: Hossza pontosan 7, az első 3 karakter isalpha, a 4. -, az utolsó 3 isdigit.
2. __Új magyar formátum (2022-től)__: 2 betű, 2 betű, kötőjel, 3 szám (pl. AA-AA-111).
  - __Validálás__: Hossza pontosan 9, a 3. és 6. karakter -, a többi a megadott típus.
3. __Bónusz: Finn és Német formátum__
  - __Finnország__: 3 betű, kötőjel, 3 szám (pl. ABC-123). 
    - Mérnöki megjegyzés: Szerkezetileg azonos a régi magyarral, de a finn rendszámok nem kezdődhetnek P vagy W betűvel bizonyos típusoknál.
  - __Németország__: 1-3 betű (városkód), szóköz, 1-2 betű, szóköz, 1-4 szám (pl. M AB 1234).
    - __Kihívás__: A változó hosszúság miatt itt a szóközök pozíciója a kulcs!
4. __Szorgalmi__: Japán rendszám (Nihon no nánbápurēto): A japán rendszámok feldolgozása haladó szintű feladat, mivel Unicode karaktereket is tartalmaznak.
    - __Formátum__: Településnév (Kanji), egy 3 jegyű osztálykód, egy Hiragana karakter, és egy 1-4 jegyű sorozatszám (pl. 品川 300 あ 12-34).
    - __Feladat__: Ellenőrizd a formátumot! (Feltételezzük, hogy a bemenet UTF-8 kódolású).
#### Tippek a megoldáshoz:
__Helper függvények__: Ne írj óriási if ágakat! Készíts segédfüggvényeket, például:
  - ```bool isAllAlpha(string s)```
  - ```bool isAllDigit(string s)```

__ASCII vs Unicode__: A magyar vagy német betűknél elég az ```isalpha()```, de a japán karaktereknél a std::string hossza nem egyezik meg a karakterek számával (egy Kanji több bájtot foglal).
  - __Konzisztencia__: A rendszámokat érdemes a validálás előtt toupper() függvénnyel nagybetűssé alakítani, hogy a felhasználó kisbetűs bemenetét is elfogadjuk. 

__Matematikai megközelítés__: A lehetséges variációk száma egy régi magyar rendszámnál ($26^3 \cdot 10^3 = 17\,576\,000$), míg az újnál ($26^4 \cdot 10^3 = 456\,976\,000$). Látható, miért volt szükség a váltásra.