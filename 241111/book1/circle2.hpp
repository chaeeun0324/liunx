#ifndef CIRCLE2_HPP
#define CIRCLE2_HPP

class Circle {
protected:
    int radius;

public:
    Circle(int radius = 1);  // 기본 생성자
    int getRadius() const;
    void setRadius(int radius);
    double getArea() const;
};

#endif
