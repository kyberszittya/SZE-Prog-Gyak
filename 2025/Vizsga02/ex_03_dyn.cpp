//
// Created by keret on 2025. 05. 30..
//
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Stats {        // a visszatérő érték
    double min;
    double max;
    double avg;
    double sum;
};

Stats vector_stats(const double* v, int n)
{
    double minv = v[0];       // első elemről indulunk,
    double maxv = v[0];       // így nem kell numeric_limits
    double sum  = v[0];

    for (int i = 1; i < n; ++i) {
        if (v[i] < minv) minv = v[i];
        if (v[i] > maxv) maxv = v[i];
        sum += v[i];
    }

    return { minv, maxv, sum / n , sum };
}

int main()
{
    srand(10);
    int n;
    if (!(std::cin >> n) || n < 1) {
        std::cerr << "Hibás elemszám.\n";
        return 1;
    }


    double* data = new double[n];
    for (int i = 0; i < n; ++i) {
        data[i] = rand() % 1000 + 1;
    }

    Stats st = vector_stats(data, n);

    std::cout << st.min << ' ' << st.max << ' ' << st.avg << ' ' << st.sum << '\n';

    delete[] data;   // memória felszabadítása
    return 0;
}