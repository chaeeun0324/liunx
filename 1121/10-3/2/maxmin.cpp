#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // ������ ������ ����
    int num;

    cout << "���� 4���� �Է��Ͻÿ�: ";
    for (int i = 0; i < 4; ++i) {
        cin >> num;       // ���� �Է�
        numbers.push_back(num); // ���Ϳ� �߰�
    }

    // �ִ밪�� �ּҰ� ���
    int maxVal = *numbers.begin(); // ù ��° ��ҷ� �ʱ�ȭ
    int minVal = *numbers.begin(); // ù ��° ��ҷ� �ʱ�ȭ

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it > maxVal) maxVal = *it; // �ִ밪 ����
        if (*it < minVal) minVal = *it; // �ּҰ� ����
    }

    cout << "�ִ밪�� " << maxVal << ", �ּҰ��� " << minVal << "�Դϴ�" << endl;
    return 0;
}
