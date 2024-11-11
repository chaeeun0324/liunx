#include "ColorPoint.hpp"
#include <iostream>

ColorPoint::ColorPoint(int x, int y, const std::string& color) : Point(x, y), color(color) {}

void ColorPoint::setColor(const std::string& color) {
    this->color = color;
}

void ColorPoint::show() const {
    std::cout << color << " ������ (" << x << "," << y << ")�� ��ġ�� ���Դϴ�." << std::endl;
}
