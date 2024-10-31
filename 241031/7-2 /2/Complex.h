#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    int real; // 실수부
    int img;  // 허수부

public:
    Complex(int r = 0, int i = 0);

    // 곱셈 연산자 오버로딩
    Complex operator*(const Complex& other);

    void show() const;
};

#endif
