#include "Point.hpp"
#include <iostream>

Point::Point(int x, int y) : x(x), y(y) {}

void Point::setPoint(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::show() const {
    std::cout << "(" << x << "," << y << ")�� ��ġ�� ���Դϴ�." << std::endl;
}
