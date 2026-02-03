//
// Created by keret on 2024. 06. 13..
//
/*
Készíts függvényt, ami egy bemeneti négyzetes mátrixról eldönti, hogy diagonális mátrix-e!

 Segítségképpen megadtuk a függvény fejlécét.
 */

#include <iostream>

bool isDiagonalMatrix(double **mtx, double n);

bool isDiagonalMatrix(double **mtx, double n) {
    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (i != j && mtx[i][j] != 0.0) {
                return false;
            }
        }
    }
    return true;
}

void freeMatrix(double** mtx, unsigned int n) {
    for (unsigned int i = 0; i < n; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test1() {
    unsigned int n = 3;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = 1.0; mtx[0][1] = 0.0; mtx[0][2] = 0.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 1.0; mtx[1][2] = 0.0;
    mtx[2] = new double[n];
    mtx[2][0] = 0.0; mtx[2][1] = 0.0; mtx[2][2] = 1.0;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}

void test2() {
    unsigned int n = 3;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = 1.0; mtx[0][1] = 0.0; mtx[0][2] = 1.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 1.0; mtx[1][2] = 0.0;
    mtx[2] = new double[n];
    mtx[2][0] = 0.0; mtx[2][1] = 0.0; mtx[2][2] = 1.0;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}

void test3() {
    unsigned int n = 3;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = 7.6; mtx[0][1] = 0.0; mtx[0][2] = 0.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 8.2; mtx[1][2] = 0.0;
    mtx[2] = new double[n];
    mtx[2][0] = 0.0; mtx[2][1] = 0.0; mtx[2][2] = 4.7;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}


void test4() {
    unsigned int n = 2;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = -47.6; mtx[0][1] = 0.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 28.2;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}

void test5() {
    unsigned int n = 5;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = -47.6; mtx[0][1] = 0.0; mtx[0][2] = -47.6; mtx[0][3] = 0.0; mtx[0][4] = 0.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 28.2; mtx[1][2] = 0.0; mtx[1][3] = 0.2; mtx[1][4] = 0.2;
    mtx[2] = new double[n];
    mtx[2][0] = 0.0; mtx[2][1] = 0.0; mtx[2][2] = 3.0; mtx[2][3] = 0.0; mtx[2][4] = 0.0;
    mtx[3] = new double[n];
    mtx[3][0] = 0.0; mtx[3][1] = 0.0; mtx[3][2] = 0.0; mtx[3][3] = 8.3; mtx[3][4] = 0.0;
    mtx[4] = new double[n];
    mtx[4][0] = 0.0; mtx[4][1] = 0.0; mtx[4][2] = 0.0; mtx[4][3] = 0.0; mtx[4][4] = -5.0;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}

void test6() {
    unsigned int n = 5;
    double** mtx = new double*[n];
    mtx[0] = new double[n];
    mtx[0][0] = -47.6; mtx[0][1] = 0.0; mtx[0][2] = 0.0; mtx[0][3] = 0.0; mtx[0][4] = 0.0;
    mtx[1] = new double[n];
    mtx[1][0] = 0.0; mtx[1][1] = 28.2; mtx[1][2] = 0.0; mtx[1][3] = 0.0; mtx[1][4] = 0.0;
    mtx[2] = new double[n];
    mtx[2][0] = 0.0; mtx[2][1] = 0.0; mtx[2][2] = 3.0; mtx[2][3] = 0.0; mtx[2][4] = 0.0;
    mtx[3] = new double[n];
    mtx[3][0] = 0.0; mtx[3][1] = 0.0; mtx[3][2] = 0.0; mtx[3][3] = 8.3; mtx[3][4] = 0.0;
    mtx[4] = new double[n];
    mtx[4][0] = 0.0; mtx[4][1] = 0.0; mtx[4][2] = 0.0; mtx[4][3] = 0.0; mtx[4][4] = -5.0;
    std::cout << isDiagonalMatrix(mtx, n) << std::endl;
    freeMatrix(mtx, n);
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
}