//
// Created by keret on 2024. 04. 10..
//
/*
 * Keszitsunk programot, amely nxn mátrixokat ad összes
 * Két mátrixot foglaljunk le
 * Az elemeit töltsük fel random számokkal
 * Ha ez meg van szorozzuk össze a maátrixokat
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

void matrix_letrehozas(double** A, unsigned int n){
    for (unsigned int i = 0; i < n; i++) {
        A[i] = new double[n];
    }
}

void matrixfeltoltes(double** A, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            A[i][j] = (static_cast<double>(rand() % 1000))/10.0;
        }
    }
}

void matrixkiiras(double** A, unsigned int n) {
    std::cout << "Matrix: \n";
    for (unsigned int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void matrixosszeadas(double** A, double** B, double** res, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            res[i][j] = A[i][j] + B[i][j];
        }
    }
}

void free_matrix(double** mtx, unsigned int n) {
    for (unsigned int i = 0; i < n; i++){
        delete[] mtx[i];
    }
}

int main() {
    // Random számok generálása
    srand(time(NULL));
    int n;
    std::cout << "N meret: ";
    std::cin >> n;
    // Tömbök
    double ** A = new double*[n];
    double ** B = new double*[n];
    double ** res = new double*[n];
    matrix_letrehozas(A, n);
    matrix_letrehozas(B, n);
    matrix_letrehozas(res, n);

    matrixfeltoltes(A, n);
    matrixfeltoltes(B, n);
    ///
    matrixkiiras(A, n);
    matrixkiiras(B, n);
    /// Osszeadas

    matrixosszeadas(A, B, res, n);
    matrixkiiras(res, n);

    /// Felszabaditas
    free_matrix(A, n);
    free_matrix(B, n);
    free_matrix(res, n);
    delete[] res;
    delete[] A;
    delete[] B;

}