#include <iostream>
#include <vector>
#include <algorithm> // sort, max_element
using namespace std;

int main() {
    vector<string> words; // ���ڿ� ���� ����
    string input;

    // 5���� ���ڿ� �Է� �ޱ�
    cout << "5���� ���ڿ��� �Է��ϼ���:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "���ڿ��� �Է��ϼ���: ";
        cin >> input;
        words.push_back(input); // ���Ϳ� ���ڿ� ����
    }

    // ���������� ���� �ڿ� ���� �ܾ� ã��
    string maxWord = *max_element(words.begin(), words.end());

    // ��� ���
    cout << "�������� ���� �ڿ� ������ �ܾ�� " << maxWord << endl;

    return 0;
}
