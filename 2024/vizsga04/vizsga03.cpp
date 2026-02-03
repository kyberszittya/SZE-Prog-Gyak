//
// Created by keret on 2024. 06. 13..
//
/*
Bioinformaitkában gyakori, hogy a FASTA formátumban (példák itt: https://www.bioinformatics.nl/tools/crab_fasta.html) megadott genómokban keresünk vagy szűkítünk mintákat. A génszekvencia egy karaktersorozat, ahol minden egyes betű egy aminosavat jelöl.
Készítsd el az alábbi függvényt, ami egy bemeneti génszekvenciában (szövegként megadott) a paraméterként megadott karaktert (aminosavat) kiszűri és visszatér az új szekvenciával.
 Vagyis az eredményszekvencia nem tartalmazza a paraméterként megadott karaktert (filterSequence függvény).
 Ügyeljen a megfelelő hosszra, ehhez implementáld a függvényt, ami összeszámolja a bemeneti minta előfordulási számát. (cntAmino függvény)
 Kezelje a függvények azt, ha az adott aminosav nem található!

 Segítségképpen megadtuk a függvények fejlécét!

 TIPP: hozd létre először egy karaktertömbként a szöveget, majd használd a visszatéréskor a new string() eljárást!
 */

#include <iostream>
#include <string>

unsigned int cntAmino(std::string& sequence, char pattern);
std::string* filterSequence(std::string& sequence, char pattern);

unsigned int cntAmino(std::string& sequence, char pattern) {
    unsigned int cnt = 0;
    for (unsigned int i = 0; i < sequence.length(); i++) {
        if (sequence[i] == pattern) {
            cnt++;
        }
    }
    return cnt;
}

std::string* filterSequence(std::string& sequence, char pattern) {
    unsigned int n = sequence.length();
    unsigned int new_length = n - cntAmino(sequence, pattern);
    char* new_sequence = new char[new_length];
    unsigned int last_n = 0;
    for (unsigned int i = 0; i < n; i++) {
        if (sequence[i] != pattern) {
            new_sequence[last_n] = sequence[i];
            last_n++;
        }
    }
    std::string* res = new std::string(new_sequence, new_length);
    delete[] new_sequence;
    return res;
}


void test1() {
    std::string text1("MDITIHNPLVRRPLF");
    std::cout << cntAmino(text1, 'M') << '\n';
    std::string* seq = filterSequence(text1, 'M');
    std::cout << *seq << '\n';
    std::cout << text1.length() << ' ' << seq->length() << '\n';
    delete seq;
}

void test2() {
    std::string text("IPADVDPLAITSSLSS");
    std::cout << cntAmino(text, 'S') << '\n';
    std::string* seq = filterSequence(text, 'S');
    std::cout << *seq << '\n';
    std::cout << text.length() << ' ' << seq->length() << '\n';
    delete seq;
}

void test3() {
    std::string text("MDITIHNPLVRRPLFSWLTPSRIFDQIFGEHLQESELLPTSPSLSPFLMRSPFFRMPSWLETGLSEMRLEKDKFSVNLDVKHFSPEELKVKVLGDMIEIHGKHEERQDEHGFIAREFSRKYRIPADVDPLTITSSLSLDGVLTVSAPRKQSDVPERSIPITREEKPAIAGSQRK");
    std::cout << cntAmino(text, 'E') << '\n';
    std::string* seq = filterSequence(text, 'E');
    std::cout << *seq << '\n';
    std::cout << text.length() << ' ' << seq->length() << '\n';
    delete seq;
}

void test4() {
    std::string text("RMGAPMARMPSWAQTGLSELRLDKDKFAIHLDVKHFTPEELRVKILGDFI");
    std::cout << cntAmino(text, 'A') << '\n';
    std::string *seq = filterSequence(text, 'A');
    std::cout << *seq << '\n';
    std::cout << text.length() << ' ' << seq->length() << '\n';
    delete seq;
}


/*
MDIAIHHPWIRRPFFPFHSPSRLFDQFFGEHLLESDLFSTATSLSPFYLRPPSFLRAPSWIDTGLSEMRMEKDRFSVNLDVKHFSPEELKVKVLGDVVEVHGKHEERQDEHGFISREFHRKYRIPADVDPLTITSSLSSDGVLTVNGPRKQASGPERTIPITREEKPAVTAAPKK
MDIAIHHPWIRRPFFPFHSPSRLFDQFFGHLLSDLFSTATSLSPFYLRPPSFLRAPSWIDTGLSMRMKDRFSVNLDVKHFSPLKVKVLGDVVVHGKHRQDHGFISRFHRKYRIPADVDPLTITSSLSSDGVLTVNGPRKQASGPRTIPITRKPAVTAAPKK
MDIAIHHPWIRRPFFPFHSPSRLFDQFFGHLLSDLFSTATSLSPFYLRPPSFLRAPSWIDTGLSMRMKDRFSVNLDVKHFSPLKVKVLGDVVVHGKHRQDHGFISRFHRKYRIPADVDPLTITSSLSSDGVLTVNGPRKQASGPRTIPITRKPAVTAAPKKQIFGHLQ\xd1\x00\x00
*/
void test5() {
    std::string text("MDIAIHHPWIRRPFFPFHSPSRLFDQFFGEHLLESDLFSTATSLSPFYLRPPSFLRAPSWIDTGLSEMRMEKDRFSVNLDVKHFSPEELKVKVLGDVVEVHGKHEERQDEHGFISREFHRKYRIPADVDPLTITSSLSSDGVLTVNGPRKQASGPERTIPITREEKPAVTAAPKK");
    std::cout << cntAmino(text, 'E') << '\n';
    std::string *seq = filterSequence(text, 'E');
    std::cout << *seq << '\n';
    std::cout << text.length() << ' ' << seq->length() << '\n';
    delete seq;
}

void test6() {
    std::string text("MDIAIHHPWIRRPFFPFHSPSRLFDQFFGEHLLESDLFSTATSLSPFYLRPPSFLRAPSWIDTGLSEMRMEKDRFSVNLDVKHFSPEELKVKVLGDVVEVHGKHEERQDEHGFISREFHRKYRIPADVDPLTITSSLSSDGVLTVNGPRKQASGPERTIPITREEKPAVTAAPKK");
    std::cout << cntAmino(text, 'X') << '\n';
    std::string *seq = filterSequence(text, 'X');
    std::cout << *seq << '\n';
    std::cout << text.length() << ' ' << seq->length() << '\n';
    delete seq;
}

int main() {
    test1();
    std::cout << '\n';
    test2();
    std::cout << '\n';
    test3();
    std::cout << '\n';
    test4();
    std::cout << '\n';
    test5();
    std::cout << '\n';
    test6();
}