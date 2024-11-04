#include "Complex.h"
#include <iostream>
using namespace std;

// 생성자 구현
Complex::Complex(int r, int i) : real(r), img(i) {
    cout << "복소수 " << real << "+ " << img << "j 생성" << endl;
}

// 복소수 출력 함수 구현
void Complex::show() const {
    cout << real << "+ " << img << "j" << endl;
}

// 전위 증가 연산자 구현 (프렌드 함수)
Complex& operator++(Complex& c) {
    ++c.real;
    ++c.img;
    return c;
}

// 전위 감소 연산자 구현 (프렌드 함수)
Complex& operator--(Complex& c) {
    --c.real;
    --c.img;
    return c;
}
