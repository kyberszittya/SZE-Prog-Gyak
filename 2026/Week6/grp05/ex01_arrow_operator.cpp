//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

#define TEMPERATURE_START 22.5

struct Sensor {
    int id;
    double temperature;
};



int main() {
    Sensor s{1, TEMPERATURE_START};

    // Using the arrow operator to access members of a struct through a pointer
    Sensor* ptr = &s;
    std::cout << "Sensor ID: " << ptr->id << std::endl;
    std::cout << "Mem. add. of Sensor: " << ptr << std::endl;
    std::cout << "Temperature: " << ptr->temperature << std::endl;
    // Modifying the temperature using the arrow operator
    ptr->temperature += 2.5;
    std::cout << "Updated Temperature: " << ptr->temperature << std::endl;
    std::cout << "Mem. add. of Sensor: " << ptr << std::endl;

    return 0;
}