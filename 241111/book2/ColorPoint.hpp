#ifndef COLORPOINT_HPP
#define COLORPOINT_HPP

#include "Point.hpp"
#include <string>

class ColorPoint : public Point {
private:
    std::string color;

public:
    ColorPoint(int x = 0, int y = 0, const std::string& color = "BLACK"); // ������
    void setColor(const std::string& color); // ���� ����
    void show() const; // ����� ��ǥ ���
};

#endif
