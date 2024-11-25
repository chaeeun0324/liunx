#include <iostream>
#include <vector>
#include <algorithm> // max_element
using namespace std;

// Student Ŭ���� ����
class Student {
private:
    string name; // �̸�
    int score;   // ����

public:
    // ������
    Student(string name, int score) : name(name), score(score) {}

    // ���� ��ȯ �Լ�
    int getScore() const { return score; }

    // �̸� ��ȯ �Լ�
    string getName() const { return name; }

    // < ������ �����ε� (���� ��)
    bool operator<(const Student& other) const {
        return this->score < other.score;
    }
};

int main() {
    vector<Student> students; // Student ��ü�� �����ϴ� ����
    string name;
    int score;

    // 3���� �л� ���� �Է¹ޱ�
    for (int i = 0; i < 3; i++) {
        cout << "�̸��� ������ �Է�: ";
        cin >> name >> score;
        students.emplace_back(name, score); // ���Ϳ� Student ��ü �߰�
    }

    // �ֿ�� �л� ã��
    auto bestStudent = max_element(students.begin(), students.end());

    // ��� ���
    cout << "�ֿ���л���" << endl;
    cout << "�̸�: " << bestStudent->getName() << endl;
    cout << "����: " << bestStudent->getScore() << "��" << endl;

    return 0;
}
