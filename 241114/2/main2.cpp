#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; } // ������ �ʱ�ȭ
    int getRadius() const { return radius; }          // ������ ��ȯ

    // > ������ �����ε�: �������� �������� ��
    bool operator>(const Circle& other) const {
        return this->radius > other.radius;
    }
};

template <class T>
T bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b); // int�� �� ��
    cout << "20�� 50�� ū ���� " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza); // Circle ��ü ��
    cout << "donut�� pizza�� ū �������� " << y.getRadius() << endl;

    return 0;
}
