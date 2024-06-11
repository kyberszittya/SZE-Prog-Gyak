//
// Created by keret on 2024. 05. 29..
//
/*
 * Írjon egy C/C++ programot, amely 2 db felhasználói függvényt használ, amelyeket meg is kell írnia.
Az egyik az int feltoltNagybetu(char szovegTb[]), amely feltölt egy karakter típusú tömböt (1. paraméter)
alfanumerikus karakterekkel / szavakkal az ENTER billentyű leütéséig, vagy maximum 50 db karakterig.
Ha a felhasználó kisbetűt adna meg, azt alakítsa át nagybetűre.
A tömb hosszát szimbolikus állandóval állítsa be.
Szöveges bekérési információk és hibaüzenetek nem kellenek!!!
A függvény visszatérési értéke a feltöltött tömb hossza legyen.
A másik függvény a void cserel(char szovegTb[], int hossz), pedig a feltöltött tömb (1. paraméter),
elemeit cserélje le a következőképpen.
A tömb szavainak a közepét (mediánját) helyettesítse számokkal, 1-től indulva növekvő iránnyal úgy,
hogy a lépésköz 1 legyen.
A páratlan karakterű szavakban csak 1 db, míg a páros karakterűekben 2 db karaktert kell lecserélni!
Pl.:  - Paratlant => PARA1LANT
      - Parost => PA22ST
A programot nem kell felkészíteni a 9-nél több szót tartalmazó szövegekre!
Ezek után, a fentiek szerint módosított tömb tartalmát írja is ki.
A cserel függvény 2. paramétere a feltoltNagybetu függvény visszatérési értéke.
 */

#include<iostream>
#include <cstring>

#define MAX 50

using namespace std;

int feltoltNagybetu(char s_tb[]) {
    int i, h;
    for(i=0; i<MAX; i++) { s_tb[i]='\x0'; }
    i=0;
    do {
        s_tb[i]=cin.get();
        s_tb[i]=toupper(s_tb[i]);
        if(isalnum(s_tb[i]) or isspace(s_tb[i])) i++;
    } while(s_tb[i-1]!='\n' and i<MAX);
    return h=strlen(s_tb);
}

void cserel(char s_tb[], int h) {
    char nb='1';
    for(int i=0, j=0; i<h; i++) {
        if(s_tb[i]==' ' or s_tb[i]=='\n') {
            if((i-j)%2==1) s_tb[j+((i-j)/2)]=nb;
            else { s_tb[j+((i-j)/2)-1]=nb; s_tb[j+((i-j)/2)]=nb; }
            nb++; j=i+1; } }
    cout << s_tb << endl;
}

int main() {
    char s_tb[MAX];
    int n=feltoltNagybetu(s_tb);
    cserel(s_tb,n);
    return 0;
}