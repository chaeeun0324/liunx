#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

int main() {
    vector<int> numbers(4); // ���� 4���� ���� ����
    cout << "���� 4���� �Է��Ͻÿ�: ";
    for (int i = 0; i < 4; i++) {
        cin >> numbers[i]; // ����ڷκ��� �Է¹���
    }

    // �ִ밪�� �ּҰ��� ã��
    int maxValue = *max_element(numbers.begin(), numbers.end());
    int minValue = *min_element(numbers.begin(), numbers.end());

    // �ִ밪�� �ּҰ��� ���� ��ġ ���ϱ�
    int maxIndex = distance(numbers.begin(), max_element(numbers.begin(), numbers.end())) + 1;
    int minIndex = distance(numbers.begin(), min_element(numbers.begin(), numbers.end())) + 1;

    // �������� ����
    vector<int> ascending = numbers;
    sort(ascending.begin(), ascending.end());

    // �������� ����
    vector<int> descending = numbers;
    sort(descending.begin(), descending.end(), greater<int>());

    // ��� ���
    cout << "�ִ밪�� " << maxIndex << "��° �� " << maxValue << endl;
    cout << "�ּҰ��� " << minIndex << "��° �� " << minValue << endl;

    cout << "�������� ����� ";
    for (size_t i = 0; i < ascending.size(); i++) {
        cout << ascending[i];
        if (i < ascending.size() - 1) cout << ", ";
    }
    cout << endl;

    cout << "�������� ����� ";
    for (size_t i = 0; i < descending.size(); i++) {
        cout << descending[i];
        if (i < descending.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
