#include "shape2.h"

// Shape Ŭ���� ��� �Լ� ����
Shape::Shape(int x, int y) : x(x), y(y) {}

void Shape::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}

void Shape::showPosition() const {
    cout << "��ǥ (" << x << "," << y << ")";
}

// Circle Ŭ���� ��� �Լ� ����
Circle::Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {}

void Circle::setCircle(int x, int y, int radius) {
    setPosition(x, y);
    this->radius = radius;
}

void Circle::show() const {
    showPosition();
    cout << "�� ������ " << radius << "�� ��" << endl;
}

// Rect Ŭ���� ��� �Լ� ����
Rect::Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {}

void Rect::setRect(int x, int y, int width, int height) {
    setPosition(x, y);
    this->width = width;
    this->height = height;
}

void Rect::show() const {
    showPosition();
    cout << "�� ��" << width << ", ����" << height << "�� ���簢��" << endl;
}

// Triangle Ŭ���� ��� �Լ� ����
Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {}

void Triangle::setTriangle(int x, int y, int base, int height) {
    setPosition(x, y);
    this->base = base;
    this->height = height;
}

void Triangle::show() const {
    showPosition();
    cout << "�� �غ�" << base << ", ����" << height << "�� �ﰢ��" << endl;
}
