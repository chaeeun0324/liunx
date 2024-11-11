#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
private:
    int base, height; // �غ�, ����

public:
    Triangle(int x, int y, int base, int height);
    void show() const override;
    ~Triangle();
};

#endif
