#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(int r, int i) : real(r), img(i) {}

Complex Complex::operator*(const Complex& other) {
    int real_part = real * other.real - img * other.img;
    int img_part = real * other.img + img * other.real;
    return Complex(real_part, img_part);
}

void Complex::show() const {
    cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
}
