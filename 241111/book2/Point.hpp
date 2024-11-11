#ifndef POINT_HPP
#define POINT_HPP

class Point {
protected:
    int x, y;

public:
    Point(int x = 0, int y = 0); // 기본 생성자
    void setPoint(int x, int y); // 좌표 설정
    void show() const; // 좌표 출력
};

#endif
