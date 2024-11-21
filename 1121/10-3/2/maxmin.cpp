#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // 정수를 저장할 벡터
    int num;

    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; ++i) {
        cin >> num;       // 정수 입력
        numbers.push_back(num); // 벡터에 추가
    }

    // 최대값과 최소값 계산
    int maxVal = *numbers.begin(); // 첫 번째 요소로 초기화
    int minVal = *numbers.begin(); // 첫 번째 요소로 초기화

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it > maxVal) maxVal = *it; // 최대값 갱신
        if (*it < minVal) minVal = *it; // 최소값 갱신
    }

    cout << "최대값은 " << maxVal << ", 최소값은 " << minVal << "입니다" << endl;
    return 0;
}
