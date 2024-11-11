#include "Rect.hpp"
#include <iostream>

Rect::Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {
    std::cout << "Rect »ý¼º" << std::endl;
}

void Rect::show() const {
    std::cout << "ÁÂÇ¥ (" << x << "," << y << ")¿¡ Æø" << width << ", ³ôÀÌ" << height << "ÀÎ Á÷»ç°¢Çü" << std::endl;
}

Rect::~Rect() {
    std::cout << "Rect ¼Ò¸ê" << std::endl;
}
