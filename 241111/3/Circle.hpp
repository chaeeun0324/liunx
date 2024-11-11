#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
private:
    int radius; // ������

public:
    Circle(int x, int y, int radius);
    void show() const override;
    ~Circle();
};

#endif
