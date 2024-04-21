# Gyak 10: többmodulos projektek

## 1. feladat: Cégek

- Struktúrák és a hozzátartozó függvények
  - Dátum
    - Struktúratagok:
      - Év
      - Hónap
      - Nap
    - Függvények:
      - Dátum beolvasása
      - Dátum kiírása
      - Két dátum összehasonlítása (-/0/+)
  - Telephely
    - Struktúratagok:
      - Helység neve
      - Alapítás dátuma
      - Utolsó év bevétele (egész)
    - Függvények:
      - Telephely beolvasása
      - Kiírása
  - Cég
    - Struktúratagok:
      - Cégnév (szóközökkel)
      - Alapítás dátuma
      - Telephelyek tömbje (dinamikusan foglalva, bemenetről kapott méretűre)
      - Telephelyek száma
    - Függvények:
      - Cég adatainak beolvasása
      - Éves bevétel kiszámítása (telephelyek adatait összesíti)
      - Kiírása
      - Törlése (dinamikusan foglalt memória felszabadítása)

main.cpp-ben megvalósítandó program:
- 5 cég adatainak beolvasása
- (HF) A legrégebben alapított cég adatainak kiírása (név, dátum, bevétel)
- (HF) Helységnév bekérése után az ott lévő telephelyek adatainak kiírása (bármely cégekből)