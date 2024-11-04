#pragma once
#ifndef COLOR1_H
#define COLOR1_H

#include <iostream>
using namespace std;

class Color {
    int red, green, blue;  // RGB 값

public:
    // 생성자
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    // + 연산자 오버로딩 (멤버 함수)
    Color operator+(const Color& other) {
        return Color(red + other.red, green + other.green, blue + other.blue);
    }

    // == 연산자 오버로딩 (멤버 함수)
    bool operator==(const Color& other) {
        return (red == other.red && green == other.green && blue == other.blue);
    }

    // 색상 출력 함수
    void show() {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

#endif
