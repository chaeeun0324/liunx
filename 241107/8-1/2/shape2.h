#pragma once
#ifndef SHAPE2_H
#define SHAPE2_H

#include <iostream>
using namespace std;

class Shape {
protected:
    int x, y; // À§Ä¡ ÁÂÇ¥

public:
    Shape(int x = 0, int y = 0);
    void setPosition(int x, int y);
    void showPosition() const;
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int x = 0, int y = 0, int radius = 1);
    void setCircle(int x, int y, int radius);
    void show() const;
};

class Rect : public Shape {
private:
    int width, height;

public:
    Rect(int x = 0, int y = 0, int width = 1, int height = 1);
    void setRect(int x, int y, int width, int height);
    void show() const;
};

class Triangle : public Shape {
private:
    int base, height;

public:
    Triangle(int x = 0, int y = 0, int base = 1, int height = 1);
    void setTriangle(int x, int y, int base, int height);
    void show() const;
};

#endif
