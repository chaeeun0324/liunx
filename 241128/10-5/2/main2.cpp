#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3; // 학생 수
    const int NUM_SUBJECTS = 3; // 과목 수: 국어, 영어, 수학

    string studentNames[NUM_STUDENTS] = { "1번째 학생", "2번째 학생", "3번째 학생" };
    int scores[NUM_STUDENTS][NUM_SUBJECTS];
    double averages[NUM_STUDENTS] = { 0 };

    // 학생 성적 입력받기
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << studentNames[i] << "의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cin >> scores[i][j];
        }
    }

    // 각 학생의 평균 계산
    double highestAverage = 0.0; // 최고 평균
    int topStudentIndex = 0;     // 최우수 학생 인덱스

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        double sum = 0.0;
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            sum += scores[i][j];
        }
        averages[i] = sum / NUM_SUBJECTS;

        // 최고 평균 점수와 학생 인덱스 업데이트
        if (averages[i] > highestAverage) {
            highestAverage = averages[i];
            topStudentIndex = i;
        }
    }

    // 결과 출력
    cout << "최우수 학생은 " << studentNames[topStudentIndex] << "이고 평균점수는 "
        << highestAverage << "점이다" << endl;

    return 0;
}
