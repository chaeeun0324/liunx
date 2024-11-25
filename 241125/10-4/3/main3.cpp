#include <iostream>
#include <vector>
#include <algorithm> // sort
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

    // ���������� ����
    sort(words.begin(), words.end());

    // ���� ��� ���
    cout << "�������� ������ ����" << endl;
    for (const string& word : words) {
        cout << word << endl;
    }

    return 0;
}
