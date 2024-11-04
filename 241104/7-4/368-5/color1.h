#pragma once
#ifndef COLOR1_H
#define COLOR1_H

#include <iostream>
using namespace std;

class Color {
    int red, green, blue;  // RGB ��

public:
    // ������
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    // + ������ �����ε� (��� �Լ�)
    Color operator+(const Color& other) {
        return Color(red + other.red, green + other.green, blue + other.blue);
    }

    // == ������ �����ε� (��� �Լ�)
    bool operator==(const Color& other) {
        return (red == other.red && green == other.green && blue == other.blue);
    }

    // ���� ��� �Լ�
    void show() {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

#endif
