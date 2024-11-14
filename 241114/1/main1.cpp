#include <iostream>
using namespace std;

// ���ø� �Լ� getMax ����: �迭���� �ִ밪�� ã��
template <class T>
T getMax(T data[], int n) {
    T maxVal = data[0]; // �迭�� ù ��° ���ҷ� �ʱ�ȭ
    for (int i = 1; i < n; i++) { // �迭�� ��ȸ�Ͽ� �ִ밪 ã��
        if (data[i] > maxVal) {
            maxVal = data[i];
        }
    }
    return maxVal; // �ִ밪 ��ȯ
}

int main() {
    int a[5] = { -5, 10, 30, 20, 6 };          // ���� �迭
    double b[4] = { 3.14, 1.5, -6.0, 0.5 };     // �Ǽ� �迭
    char c[3] = { 'a', 'x', 'p' };              // ���� �迭

    // �� �迭�� �ִ밪�� ���
    cout << "���� �迭�� �ִ밪�� " << getMax(a, 5) << endl;
    cout << "�Ǽ� �迭�� �ִ밪�� " << getMax(b, 4) << endl;
    cout << "���� �迭�� �ִ밪�� " << getMax(c, 3) << endl;

    return 0;
}
