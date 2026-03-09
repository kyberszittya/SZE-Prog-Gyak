//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

#define TEMPERATURE 22

int main() {
    int temperature = TEMPERATURE;
    std::cout << "Current temperature: " << temperature << "°C" << std::endl;
    std::cout << "Memory address of temperature: " << &temperature << std::endl;
    // Pointer to temperature
    int* temp_ptr = &temperature;
    std::cout << "Value at temp_ptr: " << *temp_ptr << "°C" << std::endl;
    std::cout << "Memory address stored in temp_ptr: " << temp_ptr << std::endl;
    // Change temperature using pointer
    *temp_ptr = 25;
    std::cout << "Updated temperature: " << temperature << "°C" << std::endl;
    return 0;
}