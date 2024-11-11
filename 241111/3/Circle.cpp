#include "Circle.hpp"
#include <iostream>

Circle::Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {
    std::cout << "Circle ����" << std::endl;
}

void Circle::show() const {
    std::cout << "��ǥ (" << x << "," << y << ")�� ������ " << radius << "�� ��" << std::endl;
}

Circle::~Circle() {
    std::cout << "Circle �Ҹ�" << std::endl;
}
