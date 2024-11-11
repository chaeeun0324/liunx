#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {
    std::cout << "Triangle ����" << std::endl;
}

void Triangle::show() const {
    std::cout << "��ǥ (" << x << "," << y << ")�� �غ� " <<
        base << ", ���� " << height << "�� �ﰢ��" << std::endl;
}

Triangle::~Triangle() {
    std::cout << "Triangle �Ҹ�" << std::endl;
}
