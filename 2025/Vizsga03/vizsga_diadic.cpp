#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


double** outer_product(int n, double u[], double v[])
{
    if (n <= 0 || !u || !v) return nullptr;

    double** M = new double*[n];
    for (int i = 0; i < n; ++i) {
        M[i] = new double[n];
        for (int j = 0; j < n; ++j)
            M[i][j] = u[i] * v[j];
    }
    return M;
}
void free_matrix(double** M, int n)
{
    if (!M) return;
    for (int i = 0; i < n; ++i) delete[] M[i];
    delete[] M;
}


void print_matrix(double** A, int n, int width = 4)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j)
            std::cout <<  A[i][j] << " ";
        std::cout <<  A[n-1][n-1];
        std::cout << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::srand(5);

    int n;
    std::cout << "n = ";
    if (!(std::cin >> n) || n < 1 || n > 10) return 1;

    double* u = new double[n];
    double* v = new double[n];

    for (int i = 0; i < n; ++i) u[i] = std::rand() % 10;
    for (int i = 0; i < n; ++i) v[i] = std::rand() % 10;

    double** M = outer_product(n, u, v);
    if (!M) return 1;

    print_matrix(M, n);

    free_matrix(M, n);
    delete[] u;
    delete[] v;
    return 0;
}