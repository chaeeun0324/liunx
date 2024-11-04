#pragma once
#ifndef COLOR2_H
#define COLOR2_H

#include <iostream>
using namespace std;

class Color {
    int red, green, blue;  // RGB 값

public:
    // 생성자
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    // + 연산자 오버로딩 (프렌드 함수)
    friend Color operator+(const Color& a, const Color& b) {
        return Color(a.red + b.red, a.green + b.green, a.blue + b.blue);
    }

    // == 연산자 오버로딩 (프렌드 함수)
    friend bool operator==(const Color& a, const Color& b) {
        return (a.red == b.red && a.green == b.green && a.blue == b.blue);
    }

    // 색상 출력 함수
    void show() {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

#endif
