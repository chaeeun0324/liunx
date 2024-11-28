#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3; // �л� ��
    const int NUM_SUBJECTS = 3; // ���� ��: ����, ����, ����

    string studentNames[NUM_STUDENTS] = { "1��° �л�", "2��° �л�", "3��° �л�" };
    int scores[NUM_STUDENTS][NUM_SUBJECTS];
    double averages[NUM_STUDENTS] = { 0 };

    // �л� ���� �Է¹ޱ�
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << studentNames[i] << "�� ����, ����, ���� ������ �Է�: ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cin >> scores[i][j];
        }
    }

    // �� �л��� ��� ���
    double highestAverage = 0.0; // �ְ� ���
    int topStudentIndex = 0;     // �ֿ�� �л� �ε���

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        double sum = 0.0;
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            sum += scores[i][j];
        }
        averages[i] = sum / NUM_SUBJECTS;

        // �ְ� ��� ������ �л� �ε��� ������Ʈ
        if (averages[i] > highestAverage) {
            highestAverage = averages[i];
            topStudentIndex = i;
        }
    }

    // ��� ���
    cout << "�ֿ�� �л��� " << studentNames[topStudentIndex] << "�̰� ��������� "
        << highestAverage << "���̴�" << endl;

    return 0;
}
