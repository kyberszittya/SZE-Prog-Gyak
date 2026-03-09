//
// Created by keret on 2026. 03. 09..
//

#include <iostream>

struct Particle {
    double x, y, z; // Position
};

void print_particle(Particle* p) {
    // Output the initial state of the particle
    std::cout << "Initial Position: (" << p->x << ", " << p->y << ", " << p->z << ")\n";
}

int main() {
    // Dynamically allocate a Particle
    Particle* p = new Particle{0.0, 0.0, 0.0};
    print_particle(p);
    // Update the particle's position
    p->x += 1.0;
    p->y += 2.0;
    p->z += 3.0;
    // Output the updated state of the particle
    std::cout << "Updated Position: (" << p->x << ", " << p->y << ", " << p->z << ")\n";

    // Clean up memory
    delete p;

    return 0;
}