#include <iostream>
using namespace std;

// ���ø� Ŭ���� ����
template <class T>
class Container {
    T* p;       // T Ÿ���� ���� �迭 ������
    int size;   // �迭�� ũ�⸦ �����ϴ� ����

public:
    // ������
    Container(int n) {
        size = n;           // �迭 ũ�� ����
        p = new T[size];    // ���� �迭 ����
    }

    // �Ҹ���
    ~Container() {
        delete[] p;         // ���� �迭 �޸� ����
    }

    // �迭�� Ư�� ��ġ�� ���� �����ϴ� �Լ�
    void set(int index, T value) {
        if (index >= 0 && index < size) { // ��ȿ�� �ε������� Ȯ��
            p[index] = value;
        }
    }

    // �迭�� Ư�� ��ġ�� ���� ��ȯ�ϴ� �Լ�
    T get(int index) {
        if (index >= 0 && index < size) { // ��ȿ�� �ε������� Ȯ��
            return p[index];
        }
        return T(); // �⺻�� ��ȯ (�߸��� �ε����� ���)
    }
};

// main �Լ�
int main() {
    Container<char> c(26); // ũ�Ⱑ 26�� char Ÿ���� Container ��ü ����

    // ���ĺ� �ҹ��� 'a'���� 'z'���� ����
    for (int i = 0; i < 26; i++) {
        c.set(i, 'a' + i);
    }

    // ���ĺ��� �������� ���
    for (int i = 25; i >= 0; i--) {
        cout << c.get(i);
    }
    cout << endl;

    return 0;
}
