#include <iostream>

#define N 1000

int even_sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i * 2;
    }
    return sum;
}

int main()
{

    std::cout <<  even_sum(-10) << std::endl;

    return 0;
}
