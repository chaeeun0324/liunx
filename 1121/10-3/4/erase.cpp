#include <iostream>
#include <vector>
#include <numeric> // accumulate �Լ� ���
using namespace std;

int main() {
    vector<int> numbers; // ������ ������ ����
    int num;

    // 5���� ������ �Է¹ޱ�
    cout << "���ڸ� �Է��ϼ���: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        numbers.push_back(num); // ���Ϳ� �߰�
    }

    // �ʱ� ���� ���� ���
    cout << "�ʱ� ���� ����: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // ���� ����
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 0) {
            it = numbers.erase(it); // ������ �����ϰ�, ���� ��Ҹ� ����Ű�� ���ͷ����� ��ȯ
        }
        else {
            ++it; // ������ �ƴϸ� ���� ��ҷ� �̵�
        }
    }

    // ������ ������ ���� ���� ���� ���
    cout << "������ ���� �� ���� ����: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // ��հ� ���
    double average = 0.0;
    if (!numbers.empty()) { // ���Ͱ� ��� ���� ���� ���
        average = static_cast<double>(accumulate(numbers.begin(), numbers.end(), 0)) / numbers.size();
    }

    // ��հ� ���
    cout << "��հ�: " << average << endl;

    return 0;
}
