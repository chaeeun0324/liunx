#include "Rect.hpp"
#include <iostream>

Rect::Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {
    std::cout << "Rect ����" << std::endl;
}

void Rect::show() const {
    std::cout << "��ǥ (" << x << "," << y << ")�� ��" << width << ", ����" << height << "�� ���簢��" << std::endl;
}

Rect::~Rect() {
    std::cout << "Rect �Ҹ�" << std::endl;
}
