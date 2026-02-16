//
// Created by keret on 2026. 02. 16..
//

#include <iostream>
#include <cmath>
#include <chrono>

double pythagoras(double a, double b) {
    return sqrt(a * a + b * b);
}

int main(int argc, char *argv[]){
    double a, b;
    std::cout << "Kérem az első befogót (a): ";
    std::cin >> a;
    std::cout << "Kérem a második befogót (b): ";
    std::cin >> b;

    auto start = std::chrono::high_resolution_clock::now();
    double result1 = pythagoras(a, b);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << "A háromszög átfogója: " << result1 << '\n';
    std::cout << "Pythagoras időtartam: " << duration1.count() << " ns\n";

    start = std::chrono::high_resolution_clock::now();
    double result2 = std::hypot(a, b);
    end = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << "std::hypot használatával: " << result2 << '\n';
    std::cout << "std::hypot időtartam: " << duration2.count() << " ns\n";
    return 0;

}