// **********************************************
// �� �� : �Ǽ��� ����� ���� �� �� ���ϱ� 
// �� ¥ : 2024�� 10��28 ��
// �ۼ��� : 2101073 ��ä��
// **********************************************
#include <iostream>   // ������� ���� ��� ���� ����
using namespace std;
//1-1
/*
#include <iostream>   // ������� ���� ��� ���� ����
using namespace std;  

class Complex {
private:
    int real;          // �Ǽ� 
    int img;           // ���

public:
    // �⺻ ������: �Ǽ��ο� ����θ� 0���� �ʱ�ȭ
    Complex() : real(0), img(0) {}

    // �Ű������� �ִ� ������: �Ǽ��ο� ����� �ʱ�ȭ
    Complex(int r, int i) : real(r), img(i) {}

    // ���Ҽ� ���
    void show() const {
        cout << real << " + " << img << "j" << endl;   // ���Ҽ� �������� ���
    }

    // ���Ҽ� ���� ������ ���� private ��� ���� ���� ���
    friend Complex ComplexAdd(const Complex& c1, const Complex& c2);
};

// ���� �Լ�: �� ���Ҽ��� ���ϰ� ��� ��ȯ
Complex ComplexAdd(const Complex& c1, const Complex& c2) {
    // �Ǽ��γ���, ����γ��� ���� �� ���Ҽ� ��ȯ
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main() {
    Complex x(2, 3);   // ���Ҽ� x �ʱ�ȭ 
    Complex y(-5, 10); // ���Ҽ� y �ʱ�ȭ 
    Complex sum;       // ���� ������ ���Ҽ� sum ����

    sum = ComplexAdd(x, y); // x�� y�� �� ��� �� sum�� ����

    cout << "�� ���Ҽ��� ���� "; // ��� ���
    sum.show();               

    return 0;
}
*/
//1-2
/*
lass Complex {
private:
    int real;          // �Ǽ��� 
    int img;           // ����� 

public:
    // �Ǽ��ο� ����θ� 0���� �ʱ�ȭ
    Complex() : real(0), img(0) {}

    // �Ǽ��ο� ����� �ʱ�ȭ
    Complex(int r, int i) : real(r), img(i) {}

    // ���Ҽ� ��� 
    void show() const {
        cout << real << " + " << img << "j" << endl;   // ���Ҽ� �������� ���
    }

    // ComplexManager Ŭ������ ��� �Լ��� private ����� ���� �����ϵ��� friend ����
    friend class ComplexManager;
};

class ComplexManager {
public:
    // ComplexAdd: �� ���� Complex ��ü�� ���� ��� ��ȯ
    Complex ComplexAdd(const Complex& c1, const Complex& c2) {
        // ���ο� Complex ��ü ��ȯ
        return Complex(c1.real + c2.real, c1.img + c2.img);
    }
};

int main() {
    Complex x(2, 3);   // ���Ҽ� x �ʱ�ȭ
    Complex y(-5, 10); //���Ҽ� y �ʱ�ȭ 
    ComplexManager manager; // ComplexManager ��ü ����
    Complex sum;       // �� ����

    sum = manager.ComplexAdd(x, y); // x�� y�� �� ��

    cout << "�� ���Ҽ��� ���� "; // ��� ���
    sum.show();                // sum ���

    return 0; // ���α׷� ���� ����
}
*/
//1-3
/*
#include <iostream>   // ����� ó���� ���� ��� ���� ����
using namespace std;   // ǥ�� ���ӽ����̽� ���

// Complex Ŭ���� ����: ���Ҽ��� ǥ���ϱ� ���� Ŭ����
class Complex {
private:
    int real;          // �Ǽ��� ��� ����
    int img;           // ����� ��� ����

public:
    // �⺻ ������: �Ǽ��ο� ����θ� 0���� �ʱ�ȭ
    Complex() : real(0), img(0) {}

    // �Ű������� �ִ� ������: �Ǽ��ο� ����θ� ���޹޾� �ʱ�ȭ
    Complex(int r, int i) : real(r), img(i) {}

    // ���Ҽ��� ���� ����ϴ� �Լ�
    void show() const {
        cout << real << " + " << img << "j" << endl;   // ���Ҽ� �������� ���
    }

    // ComplexManager Ŭ������ private ����� ���� �����ϵ��� friend ����
    friend class ComplexManager;
};

// ComplexManager Ŭ���� ����: ���Ҽ� ������ ���� Ŭ����
class ComplexManager {
public:
    // ComplexAdd �Լ�: �� ���Ҽ��� ���� ����� ��ȯ
    Complex ComplexAdd(const Complex& c1, const Complex& c2) {
        return Complex(c1.real + c2.real, c1.img + c2.img); // �Ǽ��ο� ����� ���� ���� ���ο� Complex ��ü ��ȯ
    }

    // ComplexSub �Լ�: �� ���Ҽ��� ���� ���� ����� ��ȯ
    Complex ComplexSub(const Complex& c1, const Complex& c2) {
        return Complex(c1.real - c2.real, c1.img - c2.img); // �Ǽ��ο� ����� ���� ���� ���ο� Complex ��ü ��ȯ
    }
};

int main() {
    Complex x(5, 5);   // ù ��° ���Ҽ� x �ʱ�ȭ (5 + 5j)
    Complex y(2, 2);   // �� ��° ���Ҽ� y �ʱ�ȭ (2 + 2j)
    ComplexManager man; // ���Ҽ� ������ ���� ComplexManager ��ü ����
    Complex sum, sub;  // ������ ���� ����� ������ ���Ҽ� ��ü ����

    // �� ���Ҽ��� �� ���
    sum = man.ComplexAdd(x, y);
    cout << "�� ���Ҽ��� ���� "; // ���� ��� ���
    sum.show();                // ���� ����ϴ� show() �Լ� ȣ��

    // �� ���Ҽ��� �� ���
    sub = man.ComplexSub(x, y);
    cout << "�� ���Ҽ��� ���� "; // ���� ��� ���
    sub.show();                 // ���� ����ϴ� show() �Լ� ȣ��

    return 0; // ���α׷� ���� ����
}
*/
