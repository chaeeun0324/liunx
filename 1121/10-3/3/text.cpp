#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words; // ���ڿ��� ������ ����
    string input;

    // 5���� ���ڿ� �Է� �ޱ�
    for (int i = 0; i < 5; ++i) {
        cout << "���ڿ��� �Է��ϼ���: ";
        cin >> input;
        words.push_back(input); // ���Ϳ� �߰�
    }

    // �������� ���� �ڿ� ������ �ܾ� ã��
    string lastWord = *words.begin(); // ù ��° ��ҷ� �ʱ�ȭ

    for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
        if (*it > lastWord) { // ���� ������ ��
            lastWord = *it;   // �� �ڿ� ������ �ܾ�� ����
        }
    }

    cout << "�������� ���� �ڿ� ������ �ܾ�� " << lastWord << " �Դϴ�." << endl;
    return 0;
}
