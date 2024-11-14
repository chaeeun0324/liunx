#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; } // 반지름 초기화
    int getRadius() const { return radius; }          // 반지름 반환

    // > 연산자 오버로딩: 반지름을 기준으로 비교
    bool operator>(const Circle& other) const {
        return this->radius > other.radius;
    }
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b); // int형 값 비교
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza); // Circle 객체 비교
    cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl;

    return 0;
}
