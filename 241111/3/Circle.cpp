#include "Circle.hpp"
#include <iostream>

Circle::Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {
    std::cout << "Circle 생성" << std::endl;
}

void Circle::show() const {
    std::cout << "좌표 (" << x << "," << y << ")에 반지름 " << radius << "인 원" << std::endl;
}

Circle::~Circle() {
    std::cout << "Circle 소멸" << std::endl;
}
