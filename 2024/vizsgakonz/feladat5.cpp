//
// Created by keret on 2024. 05. 29..
//

/*
 * Írjon egy double** befogoTetel() függvényt, amelynek a visszatérési értéke egy
 5 x 2-es dinamikus mátrix, amely 5 db derékszögű háromszög befogóit tartalmazza,
a lenti meghatározások alapján.
A befogók kiszámításához szükséges adatokat soronként a felhasználó gépeli be.
Az adatok egy-egy sora, egy derékszögű háromszög kettő adatát tartalmazza, ezek:
            az_egyik_befogó_merőleges_vetülete_(p)  a_másik_befogó_merőleges_vetülete_(q)
Az adatokat szóköz választja el egymástól! Pl.:
            40 80

            . . .

            40 5
A soronkénti bemeneti adat-párokat szintén egy 5 x 2-es dinamikus mátrixba tárolja el
és ezen adatokból számítsa ki a befogókat, az ábrán is látható képletek segítségével:
 - a = (p * c) a 2. gyök alatt,
 - b = (q * c) a 2. gyök alatt.
A befogókat ebben a sorrendben kell tárolni a visszatérési értékként kezelt double mátrixban!
A dinamikus tömbök méretét szimbolikus állandókkal állítsa be.
A befogók tizedespontosságának a meghatározását bízzák a fordítóra.
 */
#include<iostream>
#include<cmath>

#define SR 5
#define OP 2

using namespace std;

double** befogoTetel() {
    int c;
    int** vetul=new int*[SR];
    double** bef=new double*[SR];
    for(int i=0; i<SR; i++) {
        vetul[i]=new int[OP];
        cin >> vetul[i][0] >> vetul[i][1];
        bef[i]=new double[OP];
        c=vetul[i][0]+vetul[i][1];
        bef[i][0]=sqrt(vetul[i][0]*c);
        bef[i][1]=sqrt(vetul[i][1]*c);
    }
    for(int i=0; i<SR; i++) { delete[] vetul[i]; vetul[i]=0; }
    delete [] vetul; vetul=0;
    return bef;
}