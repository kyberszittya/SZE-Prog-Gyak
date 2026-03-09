//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

void apply_calibration(double* value, double offset) {
    *value += offset; // Adjust the value by adding the calibration factor
}

int main() {
    double sensor_value = 100; // Original sensor reading
    double calibration_offset = -5.5; // Calibration factor to adjust the reading

    std::cout << "Original sensor value: " << sensor_value << std::endl;

    apply_calibration(&sensor_value, calibration_offset); // Pass the address

    std::cout << "Calibrated sensor value: " << sensor_value << std::endl;
}