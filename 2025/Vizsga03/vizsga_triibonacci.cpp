//
// Created by keret on 2025. 06. 05..
//

#include <iostream>

int tribonacci(int n, int* last)
{
    if (n < 0) {            // védőág – bár a főprogram nem enged negatívat
        if (last) *last = 0;
        return 0;
    }

    int a = 0, b = 0, c = 1;   // a: aktuális tag, b és c: következő kettő
    int sum = 0;

    while (a <= n) {
        sum += a;              // sorozat elemének hozzáadása
        if (last) *last = a;   // utolsó tag frissítése

        int next = a + b + c;  // következő Tribonacci-tag
        a = b;                 // eltoljuk a „triót” eggyel
        b = c;
        c = next;
    }
    return sum;
}



int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    if (!(std::cin >> n) || n < 0 || n > 50) return 1;

    int last;
    int sum = tribonacci(n, &last);
    std::cout << sum << ' ' << last << '\n';
    return 0;
}