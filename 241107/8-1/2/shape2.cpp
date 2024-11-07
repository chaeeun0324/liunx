#include "shape2.h"

// Shape 클래스 멤버 함수 정의
Shape::Shape(int x, int y) : x(x), y(y) {}

void Shape::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}

void Shape::showPosition() const {
    cout << "좌표 (" << x << "," << y << ")";
}

// Circle 클래스 멤버 함수 정의
Circle::Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {}

void Circle::setCircle(int x, int y, int radius) {
    setPosition(x, y);
    this->radius = radius;
}

void Circle::show() const {
    showPosition();
    cout << "에 반지름 " << radius << "인 원" << endl;
}

// Rect 클래스 멤버 함수 정의
Rect::Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {}

void Rect::setRect(int x, int y, int width, int height) {
    setPosition(x, y);
    this->width = width;
    this->height = height;
}

void Rect::show() const {
    showPosition();
    cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

// Triangle 클래스 멤버 함수 정의
Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {}

void Triangle::setTriangle(int x, int y, int base, int height) {
    setPosition(x, y);
    this->base = base;
    this->height = height;
}

void Triangle::show() const {
    showPosition();
    cout << "에 밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}
