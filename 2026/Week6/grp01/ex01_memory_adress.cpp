//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

#define VEHICLE_SPEED 120

int main() {
    int vehicle_speed = VEHICLE_SPEED;
    std::cout << "Vehicle speed: " << vehicle_speed << std::endl;
    std::cout << "Memory address of vehicle_speed: " << &vehicle_speed << std::endl;
    return 0;
}