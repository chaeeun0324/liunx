#ifndef NAMEDCIRCLE2_HPP
#define NAMEDCIRCLE2_HPP

#include "circle2.hpp"
#include <string>

class NamedCircle : public Circle {
private:
    std::string name;

public:
    NamedCircle(int radius, const std::string& name);  // ������
    void show() const;  // �̸��� ������ ��� �Լ�
};

#endif
