//
// Created by keret on 2024. 03. 20..
//
/*
 * Mutatók, tömbök

Olvasson be egy hatelemű tömböt, amely egész számokat tárol és
 töltse fel értékekkel!
Hozzon létre egy 10 elemű tömböt, amely mutatókat tárol!
Olvasson be tíz számot a képernyőről! Ha a szám szerepel
 a hatelemű tömbben, tárolja el annak a címét,
 ellenkező esetben tároljon el egy nullaértékű címet!
Jelenítse meg a 10 elemű tömb által mutatott értékeket
 és hozzájuk tartozó memóriacímeket!
(Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény)
 */
#include <iostream>

#define N 6
#define MUTATO_TOMB 10

int main() {
    int tomb[N];
    int* mutatok[MUTATO_TOMB];
    // Beolvasunk 6 értéket
    for (int i = 0; i < N; i++){
        std::cout << (i + 1) << ". ertek: ";
        std::cin >> tomb[i];
    }
    // Mutatokat tarolunk
    for (int i = 0; i < MUTATO_TOMB; i++) {
        int x;
        std::cout << "Uj szam: "; std::cin >> x;
        /// Keressuk meg az x erteket a tombunkben
        for (int j = 0; j < N; j++){
            if (x == tomb[j]){
                mutatok[i] = &tomb[j];
                break;
            }
            else {
                mutatok[i] = nullptr;
            }
        }
    }
    // Kiirjuk az értékeket
    for (int i = 0; i < MUTATO_TOMB; i++){
        std::cout << (i + 1) << "Memoriacim: " << mutatok[i] << '\n';
        if (mutatok[i] != nullptr){
            std::cout << "Ertek: " << *mutatok[i] << '\n';
        }
    }
    return 0;
}