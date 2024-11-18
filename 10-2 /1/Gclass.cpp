#include <iostream>
using namespace std;

// ���ø� Ŭ���� ����
template <class T1, class T2>
class GClass {
    T1 data1;
    T2 data2;
public:
    GClass(); // �⺻ ������
    void set(T1 a, T2 b); // ������ ����
    void get(T1& a, T2& b); // ������ ��������
    void swap(); // ������ ��ȯ
};

// ���ø� ��� �Լ� ����
template <class T1, class T2>
GClass<T1, T2>::GClass() : data1(0), data2(0) {}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

template <class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1;
    data1 = static_cast<T1>(data2); // Ÿ�� ĳ����
    data2 = static_cast<T2>(temp); // Ÿ�� ĳ����
}

// ���� �Լ�
int main() {
    // ������ ��ü
    int a, b;
    GClass<int, int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    // �Ǽ��� ��ü
    double c, d;
    GClass<double, double> y;
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    y.swap();
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    // �ٸ� Ÿ�� ��ü
    int e;
    double f;
    GClass<int, double> z;
    z.set(2, 0.5);
    z.get(e, f);
    cout << "e=" << e << '\t' << "f=" << f << endl;

    char g;
    float h;
    GClass<char, float> w;
    w.set('m', 12.5f);
    w.get(g, h);
    cout << "g=" << g << '\t' << "h=" << h << endl;

    return 0;
}
