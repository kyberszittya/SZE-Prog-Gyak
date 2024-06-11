//
// Created by keret on 2024. 05. 29..
//

/*
Írjon függvényt, ami ellenőrzi, hogy egy négyzetes mátrix háromszög mátrix-e! A függvény visszatérési értéke egy unsigned int a k, ami a következőképpen alakulhat:
 - 0: Nem háromszög mátrix
 - 1: Felső-háromszög mátrix
 - 2: Alsó-háromszög mátrix

Segítségképpen megadtuk a függvény fejlécét.

 */

#include <iostream>
#include <cmath>

unsigned int is_triangular_matrix(int** mtx, unsigned int n);
bool is_lower_triangular_matrix(int** mtx, unsigned int n);
bool is_upper_triangular_matrix(int** mtx, unsigned int n);

bool is_lower_triangular_matrix(int** mtx, unsigned int n) {
    for (unsigned int i = 1; i < n; i++){
        for (unsigned int j = 0; j < i; j++){
            if (mtx[n - i][n - j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool is_upper_triangular_matrix(int** mtx, unsigned int n) {
    for (unsigned int i = 1; i < n; i++){
        for (unsigned int j = 0; j < i; j++){
            if (mtx[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

unsigned int is_triangular_matrix(int** mtx, unsigned int n) {
    if (is_upper_triangular_matrix(mtx, n)){
        return 1;
    }
    else if (is_lower_triangular_matrix(mtx, n)){
        return 2;
    }
    return 0;
}



void test1() {
    int** mtx = new int*[3];
    mtx[0] = new int[3]; mtx[1] = new int[3]; mtx[2] = new int[3];
    mtx[0][0] = 1; mtx[0][1] = 1; mtx[0][2] = 1;
    mtx[1][0] = 0; mtx[1][1] = 1; mtx[1][2] = 1;
    mtx[2][0] = 0; mtx[2][1] = 0; mtx[2][2] = 1;
    std::cout << is_upper_triangular_matrix(mtx, 3) << '\n';
    for (int i = 0; i < 3; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test2() {
    int** mtx = new int*[4];
    mtx[0] = new int[4]; mtx[1] = new int[4];
    mtx[2] = new int[4]; mtx[3] = new int[4];

    mtx[0][0] = 1; mtx[0][1] = 1; mtx[0][2] = 1; mtx[0][3] = 1;
    mtx[1][0] = 0; mtx[1][1] = 1; mtx[1][2] = 1; mtx[1][3] = 1;
    mtx[2][0] = 0; mtx[2][1] = 0; mtx[2][2] = 1; mtx[2][3] = 1;
    mtx[3][0] = 0; mtx[3][1] = 0; mtx[3][2] = 0; mtx[3][3] = 1;
    std::cout << is_upper_triangular_matrix(mtx, 4) << '\n';
    for (int i = 0; i < 4; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test3() {
    int** mtx = new int*[4];
    mtx[0] = new int[4]; mtx[1] = new int[4];
    mtx[2] = new int[4]; mtx[3] = new int[4];

    mtx[0][0] = 1; mtx[0][1] = 1; mtx[0][2] = 1; mtx[0][3] = 1;
    mtx[1][0] = 0; mtx[1][1] = 1; mtx[1][2] = 1; mtx[1][3] = 1;
    mtx[2][0] = 0; mtx[2][1] = 0; mtx[2][2] = 1; mtx[2][3] = 1;
    mtx[3][0] = 0; mtx[3][1] = 2; mtx[3][2] = 0; mtx[3][3] = 1;
    std::cout << is_upper_triangular_matrix(mtx, 4) << '\n';
    for (int i = 0; i < 4; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test4() {
    int** mtx = new int*[4];
    mtx[0] = new int[4]; mtx[1] = new int[4];
    mtx[2] = new int[4]; mtx[3] = new int[4];

    mtx[0][0] = 1; mtx[0][1] = 0; mtx[0][2] = 0; mtx[0][3] = 0;
    mtx[1][0] = 1; mtx[1][1] = 1; mtx[1][2] = 0; mtx[1][3] = 0;
    mtx[2][0] = 1; mtx[2][1] = 1; mtx[2][2] = 1; mtx[2][3] = 0;
    mtx[3][0] = 1; mtx[3][1] = 2; mtx[3][2] = 1; mtx[3][3] = 1;
    std::cout << is_upper_triangular_matrix(mtx, 4) << '\n';
    std::cout << is_lower_triangular_matrix(mtx, 4) << '\n';
    for (int i = 0; i < 4; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test5() {
    int** mtx = new int*[3];
    mtx[0] = new int[3]; mtx[1] = new int[3]; mtx[2] = new int[3];
    mtx[0][0] = 1; mtx[0][1] = 0.0; mtx[0][2] = 0.0;
    mtx[1][0] = 1; mtx[1][1] = 1; mtx[1][2] = 0.0;
    mtx[2][0] = 1; mtx[2][1] = 1; mtx[2][2] = 1;
    std::cout << is_lower_triangular_matrix(mtx, 3) << '\n';
    for (int i = 0; i < 3; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test6() {
    int** mtx = new int*[3];
    mtx[0] = new int[3]; mtx[1] = new int[3]; mtx[2] = new int[3];
    mtx[0][0] = 1; mtx[0][1] = 0; mtx[0][2] = 0;
    mtx[1][0] = 1; mtx[1][1] = 1; mtx[1][2] = 0;
    mtx[2][0] = 1; mtx[2][1] = 1; mtx[2][2] = 1;
    std::cout << is_lower_triangular_matrix(mtx, 3) << '\n';
    std::cout << is_triangular_matrix(mtx, 3) << '\n';
    for (int i = 0; i < 3; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test7() {
    int** mtx = new int*[3];
    mtx[0] = new int[3]; mtx[1] = new int[3]; mtx[2] = new int[3];
    mtx[0][0] = 1; mtx[0][1] = 0; mtx[0][2] = 2;
    mtx[1][0] = 1; mtx[1][1] = 1; mtx[1][2] = 7;
    mtx[2][0] = 1; mtx[2][1] = 1; mtx[2][2] = 1;
    std::cout << is_triangular_matrix(mtx, 3) << '\n';
    for (int i = 0; i < 3; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    test7();
    return 0;
}