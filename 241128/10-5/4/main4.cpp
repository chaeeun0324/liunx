#include <iostream>
using namespace std;

int main() {
    // 2���� �迭 �ʱ�ȭ
    int matrix[3][3] = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    // �迭 ����: ������ 0, ����� 255�� ����
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] < 0)
                matrix[i][j] = 0; // ������ 0����
            else
                matrix[i][j] = 255; // ����� 255��
        }
    }

    // ��� ���
    cout << "���� ���:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
