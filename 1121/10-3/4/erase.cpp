#include <iostream>
#include <vector>
#include <numeric> // accumulate 함수 사용
using namespace std;

int main() {
    vector<int> numbers; // 정수를 저장할 벡터
    int num;

    // 5개의 정수를 입력받기
    cout << "숫자를 입력하세요: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        numbers.push_back(num); // 벡터에 추가
    }

    // 초기 벡터 원소 출력
    cout << "초기 벡터 원소: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // 음수 제거
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 0) {
            it = numbers.erase(it); // 음수를 삭제하고, 다음 요소를 가리키는 이터레이터 반환
        }
        else {
            ++it; // 음수가 아니면 다음 요소로 이동
        }
    }

    // 음수를 삭제한 후의 벡터 원소 출력
    cout << "음수를 삭제 후 벡터 원소: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // 평균값 계산
    double average = 0.0;
    if (!numbers.empty()) { // 벡터가 비어 있지 않은 경우
        average = static_cast<double>(accumulate(numbers.begin(), numbers.end(), 0)) / numbers.size();
    }

    // 평균값 출력
    cout << "평균값: " << average << endl;

    return 0;
}
