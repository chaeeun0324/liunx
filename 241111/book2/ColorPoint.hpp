#ifndef COLORPOINT_HPP
#define COLORPOINT_HPP

#include "Point.hpp"
#include <string>

class ColorPoint : public Point {
private:
    std::string color;

public:
    ColorPoint(int x = 0, int y = 0, const std::string& color = "BLACK"); // 생성자
    void setColor(const std::string& color); // 색상 설정
    void show() const; // 색상과 좌표 출력
};

#endif
