#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {
    std::cout << "Triangle »ý¼º" << std::endl;
}

void Triangle::show() const {
    std::cout << "ÁÂÇ¥ (" << x << "," << y << ")¿¡ ¹Øº¯ " <<
        base << ", ³ôÀÌ " << height << "ÀÎ »ï°¢Çü" << std::endl;
}

Triangle::~Triangle() {
    std::cout << "Triangle ¼Ò¸ê" << std::endl;
}
