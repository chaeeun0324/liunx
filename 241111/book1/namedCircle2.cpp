
#include "namedCircle2.hpp"
#include <iostream>

NamedCircle::NamedCircle(int radius, const std::string& name) : Circle(radius), name(name) {}

void NamedCircle::show() const {
    std::cout << "�������� " << getRadius() << "�� " << name << std::endl;
}
