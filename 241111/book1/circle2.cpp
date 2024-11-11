#include "circle2.hpp"

Circle::Circle(int radius) {
    this->radius = radius;
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

double Circle::getArea() const {
    return 3.14 * radius * radius;
}
