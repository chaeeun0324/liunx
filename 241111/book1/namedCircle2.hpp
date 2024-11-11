#ifndef NAMEDCIRCLE2_HPP
#define NAMEDCIRCLE2_HPP

#include "circle2.hpp"
#include <string>

class NamedCircle : public Circle {
private:
    std::string name;

public:
    NamedCircle(int radius, const std::string& name);  // 생성자
    void show() const;  // 이름과 반지름 출력 함수
};

#endif
