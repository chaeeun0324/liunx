#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(int r, int i) : real(r), img(i) {}

Complex Complex::operator+(const Complex& other) {
    return Complex(real + other.real, img + other.img);
}

void Complex::show() const {
    cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
}
