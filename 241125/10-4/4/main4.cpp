#include <iostream>
#include <vector>
#include <algorithm> // max_element
using namespace std;

// Student 클래스 정의
class Student {
private:
    string name; // 이름
    int score;   // 점수

public:
    // 생성자
    Student(string name, int score) : name(name), score(score) {}

    // 점수 반환 함수
    int getScore() const { return score; }

    // 이름 반환 함수
    string getName() const { return name; }

    // < 연산자 오버로딩 (점수 비교)
    bool operator<(const Student& other) const {
        return this->score < other.score;
    }
};

int main() {
    vector<Student> students; // Student 객체를 저장하는 벡터
    string name;
    int score;

    // 3명의 학생 정보 입력받기
    for (int i = 0; i < 3; i++) {
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;
        students.emplace_back(name, score); // 벡터에 Student 객체 추가
    }

    // 최우수 학생 찾기
    auto bestStudent = max_element(students.begin(), students.end());

    // 결과 출력
    cout << "최우수학생은" << endl;
    cout << "이름: " << bestStudent->getName() << endl;
    cout << "성적: " << bestStudent->getScore() << "점" << endl;

    return 0;
}
