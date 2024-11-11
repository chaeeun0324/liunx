#ifndef RECT_HPP
#define RECT_HPP

#include "Shape.hpp"

class Rect : public Shape {
private:
    int width, height; // Æø, ³ôÀÌ

public:
    Rect(int x, int y, int width, int height);
    void show() const override;
    ~Rect();
};

#endif
