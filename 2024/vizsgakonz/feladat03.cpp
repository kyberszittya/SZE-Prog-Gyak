//
// Created by keret on 2024. 05. 29..
//
/*

 * Van egy 3 állomásos sportverseny sorozat, amelyben a versenyzők minden megmérettetés
után részpontokat kapnak.
Így a sorozat végén a sportolók mindegyike 3 db részpontszámmal rendelkezik.

Írjon egy string raceResult(int *bR) függvényt, amelynek a visszatérési értéke
a legnagyobb részpontszámot kapó versenyző azonosítója (licence) legyen.
(A feladat könnyítése érdekében tételezzük fel, hogy csak 1 db legnagyobb részpontszám van!)
A célba érkezett versenyzők számát, azonosítójukat (licence) és a részpontokat
egy-egy adatsor tartalmazza, amiket a billentyűzetről kap a függvény.
A legelső adatsorban csak egy pozitív egész szám található, amely a célba érkezettek száma.
A további, mindenegyes adat-sor egy-egy sportolót azonosít a következők szerint:
            licence 1._részpont 2._részpont 3._részpont
Az adatokat szóközök választják el egymástól! Pl.:
            df-572ki 1234 1456 1750
            …
            do-565yy 1500 1550 2000
Az adat-sor elemeit tárolja el egy struktúra-tömbbe, amihez használja a megadott
struct athletes típust!
A struktúra-tömböt a dinamikus memóriába hozza létre!
A versenyzők legjobb részpontjait az int bestScore illetve, hogy ezt melyik versenyen érték el,
azt a int bestRace tagváltozókba mentsék el.
A 2. paraméterben a függvény pedig adja vissza annak az állomásnak a számát, ahol a legjobb
részpontszámot érte el az a versenyző, akinek a licence a visszatérési értékben szerepel.
 */

#include<iostream>

using namespace std;

struct Athletes {
    string lic;
    int race_1, race_2, race_3;
    int best_score, best_race;
};

void buborek(struct Athletes tb[], int lt) {
    string cs;
    int br;
    for(int v=lt-1; v>=1; v--) {
        for(int e=0, csere; e<v; e++) {
            if(tb[e].best_score<tb[e+1].best_score)
            {
                csere=tb[e].best_score; tb[e].best_score=tb[e+1].best_score; tb[e+1].best_score=csere;
                cs=tb[e].lic; tb[e].lic=tb[e+1].lic; tb[e+1].lic=cs;
                br=tb[e].best_race; tb[e].best_race=tb[e+1].best_race; tb[e+1].best_race=br;
            } } }
}

string raceResult(int *b_r) {
    string lc;
    int vk;
    cin >> vk;
    Athletes* athl = new Athletes[vk];
    for(int i=0; i<vk; i++) {
        cin >> athl[i].lic >> athl[i].race_1 >> athl[i].race_2 >> athl[i].race_3;
        if(athl[i].race_1>=athl[i].race_2 && athl[i].race_1>=athl[i].race_3)
        { athl[i].best_score=athl[i].race_1; athl[i].best_race=1; }
        else if(athl[i].race_2>=athl[i].race_1 && athl[i].race_2>=athl[i].race_3)
        { athl[i].best_score=athl[i].race_2; athl[i].best_race=2; }
        else if(athl[i].race_3>=athl[i].race_1 && athl[i].race_3>=athl[i].race_2)
        { athl[i].best_score=athl[i].race_3; athl[i].best_race=3; } }
    buborek(athl,vk);
    lc=athl[0].lic;
    *b_r=athl[0].best_race;
    delete [] athl; athl=0;
    return lc;
}

