//
// Created by keret on 2026. 02. 16..
//

#include <iostream>

double bmi_index(double weight, double height) {
    return weight / (height * height);
}

int main(int argc, char *argv[]) {
    double weight, height;
    std::cout << "Add meg a magasságodat (cm): ";
    std::cin >> height;
    height /= 100.0;
    std::cout << "Add meg a testsúlyodat: ";
    std::cin >> weight;
    double bmi = bmi_index(weight, height);
    std::cout << "BMI: " << bmi << "\n";
    if (bmi < 18.5) {
        std::cout << "Alultáplált vagy!\n";
    } else if (bmi >= 18.5 && bmi < 25) {
        std::cout << "Normál testsúly!\n";
    } else if (bmi >= 25 && bmi < 30){
        std::cout << "Túlsúly!\n";
    } else {
        std::cout << "Elhízás!\n";
    }
}