#include <iostream>
using namespace std;

int main() {
    // 2���� �迭 �ʱ�ȭ
    int matrix[3][3] = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    int maxVal = matrix[0][0]; // �ִ밪 �ʱ�ȭ
    int maxRow = 0, maxCol = 0; // �ִ밪�� ��ġ �ʱ�ȭ

    // 2���� �迭�� ��ȸ�ϸ� �ִ밪�� ��ġ ã��
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // ��� ���
    cout << "�ִ밪�� " << maxVal << " ��ġ�� " << maxRow + 1 << "�� " << maxCol + 1 << "��" << endl;

    return 0;
}

