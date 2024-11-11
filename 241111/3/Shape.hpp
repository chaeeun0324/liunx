#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
protected:  // private에서 protected로 변경
    int x, y; // 위치좌표

public:
    Shape(int x = 0, int y = 0); // 생성자
    virtual void show() const = 0; // 순수 가상 함수
    virtual ~Shape(); // 가상 소멸자
};

#endif
