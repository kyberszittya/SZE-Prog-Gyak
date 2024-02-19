//
// Created by keret on 2024. 02. 14..
//

#include <iostream>
#include <limits>

// Kérjünk be számokat,
// míg egymás után kétszer ugyanazt a számot nem kapjuk

int main(){
   int x, x_elozo = std::numeric_limits<int>::max();
   // Beolvasott szamok szamlalasa
   int cnt = 0;
   int cnt_paros = 0;
   bool egyenlo_e = false;
   do {
       std::cout << "Kerek egy szamot be: ";
       std::cin >> x;
       // Ellenőrizzük, hogy paros-e
       if (x % 2 == 0){
           cnt_paros++;
       }
       // Előző szám elmentése
       if (x == x_elozo) {
           egyenlo_e = true;
       }
       x_elozo = x;
       cnt++;
   }while(!egyenlo_e);
   std::cout << "Szamok beolvasva: " << cnt << '\n';
   std::cout << "Paros szamok szama: " << cnt_paros << '\n';
   std::cout << "A ket szam egyenlo: BYE" << '\n';
}