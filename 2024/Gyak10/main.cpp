#include <iostream>

#include "ceg.h"

#define N 1

int main() {
    Ceg ceg[N];
    for (int i = 0; i < N; i++){
        ceg[i] = ceg_beolvasas();
    }
    for (int i = 0; i < N; i++) {
        ceg_kiirasa(&ceg[i]);
    }
    for (int i = 0; i < N; i++) {
        ceg_torles(&ceg[i]);
    }
    return 0;
}
