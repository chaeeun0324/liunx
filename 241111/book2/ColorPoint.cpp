#include "ColorPoint.hpp"
#include <iostream>

ColorPoint::ColorPoint(int x, int y, const std::string& color) : Point(x, y), color(color) {}

void ColorPoint::setColor(const std::string& color) {
    this->color = color;
}

void ColorPoint::show() const {
    std::cout << color << " 색으로 (" << x << "," << y << ")에 위치한 점입니다." << std::endl;
}
