#include "Shape.hpp"
#include <iostream>

Shape::Shape(int x, int y) : x(x), y(y) {
    std::cout << "Shape ����" << std::endl;
}

Shape::~Shape() {
    std::cout << "Shape �Ҹ�" << std::endl;
}
