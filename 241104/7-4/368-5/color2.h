#pragma once
#ifndef COLOR2_H
#define COLOR2_H

#include <iostream>
using namespace std;

class Color {
    int red, green, blue;  // RGB ��

public:
    // ������
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    // + ������ �����ε� (������ �Լ�)
    friend Color operator+(const Color& a, const Color& b) {
        return Color(a.red + b.red, a.green + b.green, a.blue + b.blue);
    }

    // == ������ �����ε� (������ �Լ�)
    friend bool operator==(const Color& a, const Color& b) {
        return (a.red == b.red && a.green == b.green && a.blue == b.blue);
    }

    // ���� ��� �Լ�
    void show() {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

#endif
