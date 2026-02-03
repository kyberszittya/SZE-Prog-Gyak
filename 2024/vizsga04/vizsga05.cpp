//
// Created by keret on 2024. 06. 13..
//

/*
Írj egy függvényt, ami két mátrix elemeit összeszorozza elemek szerint (Hadamard szorzás)! Az eredmény mátrix dimenzionalitása feleljen meg a bemeneti mátrixok dimenzióinak.

A fejlécben, r jelölje a sorok számát, c az oszlopok számát!
 Pl.:

Segítségképpen megadtuk a függvény fejlécét.
 */

#include <iostream>

double** hadamardProduct(double** mtx0, double** mtx1, unsigned int r, unsigned int c);

double** hadamardProduct(double** mtx0, double** mtx1, unsigned int r, unsigned int c) {
    double **res = new double*[r];
    for (unsigned int i = 0; i < r; i++){
        res[i] = new double[c];
        for (unsigned int j = 0; j < c; j++){
            res[i][j] = mtx0[i][j] * mtx1[i][j];
        }
    }
    return res;
}

void printMatrix(double** mtx, unsigned int r, unsigned c){
    for (unsigned int i = 0; i < r; i++){
        for (unsigned int j = 0; j < c; j++){
            std::cout << mtx[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void freeMatrix(double** mtx, unsigned int r){
    for (unsigned int i = 0; i < r; i++){
        delete[] mtx[i];
    }
    delete[] mtx;
}

void test1() {
    unsigned int r = 2;
    unsigned int c = 3;
    double** mtx0 = new double*[r];
    mtx0[0] = new double[3];
    mtx0[0][0] = 2; mtx0[0][1] = 3; mtx0[0][2] = 1;
    mtx0[1] = new double[3];
    mtx0[1][0] = 0; mtx0[1][1] = 8; mtx0[1][2] = -2;

    double** mtx1 = new double*[r];
    mtx1[0] = new double[3];
    mtx1[0][0] = 3; mtx1[0][1] = 1; mtx1[0][2] = 4;
    mtx1[1] = new double[3];
    mtx1[1][0] = 7; mtx1[1][1] = 9; mtx1[1][2] = 5;

    double **res = hadamardProduct(mtx0, mtx1, r, c);
    printMatrix(res, r, c);
    freeMatrix(mtx0, r);
    freeMatrix(mtx1, r);

}

void test2() {
    unsigned int r = 2;
    unsigned int c = 3;
    double** mtx0 = new double*[r];
    mtx0[0] = new double[3];
    mtx0[0][0] = 2; mtx0[0][1] = 0; mtx0[0][2] = 9;
    mtx0[1] = new double[3];
    mtx0[1][0] = 0; mtx0[1][1] = 8; mtx0[1][2] = -4;

    double** mtx1 = new double*[r];
    mtx1[0] = new double[3];
    mtx1[0][0] = 0; mtx1[0][1] = 1; mtx1[0][2] = 3;
    mtx1[1] = new double[3];
    mtx1[1][0] = 7; mtx1[1][1] = 0; mtx1[1][2] = 5;

    double **res = hadamardProduct(mtx0, mtx1, r, c);
    printMatrix(res, r, c);
    freeMatrix(mtx0, r);
    freeMatrix(mtx1, r);

}

void test3() {
    unsigned int r = 2;
    unsigned int c = 2;
    double** mtx0 = new double*[r];
    mtx0[0] = new double[2];
    mtx0[0][0] = 2; mtx0[0][1] = 0;
    mtx0[1] = new double[2];
    mtx0[1][0] = 0; mtx0[1][1] = 8;

    double** mtx1 = new double*[r];
    mtx1[0] = new double[2];
    mtx1[0][0] = 5; mtx1[0][1] = 1;
    mtx1[1] = new double[2];
    mtx1[1][0] = 7; mtx1[1][1] = 6;

    double **res = hadamardProduct(mtx0, mtx1, r, c);
    printMatrix(res, r, c);
    freeMatrix(mtx0, r);
    freeMatrix(mtx1, r);

}


void test4() {
    unsigned int r = 2;
    unsigned int c = 2;
    double** mtx0 = new double*[r];
    mtx0[0] = new double[2];
    mtx0[0][0] = 2; mtx0[0][1] = -1;
    mtx0[1] = new double[2];
    mtx0[1][0] = -1; mtx0[1][1] = 8;

    double** mtx1 = new double*[r];
    mtx1[0] = new double[2];
    mtx1[0][0] = 5; mtx1[0][1] = 56;
    mtx1[1] = new double[2];
    mtx1[1][0] = 67; mtx1[1][1] = 6;

    double **res = hadamardProduct(mtx0, mtx1, r, c);
    printMatrix(res, r, c);
    freeMatrix(mtx0, r);
    freeMatrix(mtx1, r);

}

void test5() {
    unsigned int r = 3;
    unsigned int c = 2;
    double** mtx0 = new double*[r];
    mtx0[0] = new double[c];
    mtx0[0][0] = 2; mtx0[0][1] = -1;
    mtx0[1] = new double[c];
    mtx0[1][0] = -1; mtx0[1][1] = 8;
    mtx0[2] = new double[c];
    mtx0[2][0] = 7; mtx0[2][1] = 6;

    double** mtx1 = new double*[r];
    mtx1[0] = new double[c];
    mtx1[0][0] = 5; mtx1[0][1] = 9;
    mtx1[1] = new double[c];
    mtx1[1][0] = 3; mtx1[1][1] = 6;
    mtx1[2] = new double[c];
    mtx1[2][0] = 2; mtx1[2][1] = 6;

    double **res = hadamardProduct(mtx0, mtx1, r, c);
    printMatrix(res, r, c);
    freeMatrix(mtx0, r);
    freeMatrix(mtx1, r);

}

int main(){
    test1();
    test2();
    test3();
    test4();
    std::cout << '\n';
    test5();
}