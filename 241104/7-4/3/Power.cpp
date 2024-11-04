#include "Power.h"
#include <iostream>
using namespace std;

// 기본 생성자 및 사용자 정의 생성자
Power::Power(int k, int p) : kick(k), punch(p) {}

// 출력 함수 구현
void Power::show() const {
    cout << "kick=" << kick << ", punch=" << punch << endl;
}

// 정수와 Power 객체의 곱셈 연산자 구현
Power Power::operator*(int factor) const {
    return Power(kick * factor, punch * factor);
}

// 정수 * Power 객체의 곱셈을 지원하는 프렌드 함수 구현
Power operator*(int factor, const Power& p) {
    return p * factor; // 멤버 함수 호출하여 구현
}
