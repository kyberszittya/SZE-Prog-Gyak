//
// Created by keret on 2026. 03. 23..
//

#include <iostream>

struct Point2D {
    float x;
    float y;
};

void add_to_point(Point2D* point, float dx, float dy) {
    point->x += dx;
    point->y += dy;
}

void print_point(Point2D* point) {
    std::cout << "Point (X): " << point->x << ", (Y): "
        << (*point).y << std::endl;
}

int main(int argc, char* argv[]) {
    Point2D point = { 2.5f, 3.0f};
    print_point(&point);
    add_to_point(&point, 1.0f, 2.0f);
    print_point(&point);
}