
#include "namedCircle2.hpp"
#include <iostream>

NamedCircle::NamedCircle(int radius, const std::string& name) : Circle(radius), name(name) {}

void NamedCircle::show() const {
    std::cout << "반지름이 " << getRadius() << "인 " << name << std::endl;
}
