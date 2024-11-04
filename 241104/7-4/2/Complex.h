#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    int real;
    int img;

public:
    // 생성자
    Complex(int r, int i);

    // 복소수 출력 함수
    void show() const;

    // 프렌드 함수로 선언한 연산자 함수 (전위 증가/감소)
    friend Complex& operator++(Complex& c); // 전위 증가 연산자
    friend Complex& operator--(Complex& c); // 전위 감소 연산자
};

#endif
