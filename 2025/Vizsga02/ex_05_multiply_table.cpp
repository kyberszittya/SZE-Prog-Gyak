#include <iostream>
#include <iomanip>   // csak a kiíráshoz (main-ben)

int** make_mult_table(int k)
{
    if (k < 1) return nullptr;
    int** m = new int*[k];
    for (int i = 0; i < k; ++i)
        m[i] = new int[k];

    for (int i = 0; i < k; ++i)
        for (int j = 0; j < k; ++j)
            m[i][j] = (i + 1) * (j + 1);

    return m;
}



void print_table(int** a, int k)
{
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
}

void free_table(int** a, int k)
{
    for (int i = 0; i < k; ++i)
        delete[] a[i];
    delete[] a;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    if (!(std::cin >> k) || k < 1) return 1;

    int** tbl = make_mult_table(k);
    if (!tbl) return 1;

    print_table(tbl, k);
    free_table(tbl, k);
    return 0;
}