#include "Shape.hpp"
#include <iostream>

Shape::Shape(int x, int y) : x(x), y(y) {
    std::cout << "Shape »ý¼º" << std::endl;
}

Shape::~Shape() {
    std::cout << "Shape ¼Ò¸ê" << std::endl;
}
