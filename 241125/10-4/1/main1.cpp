#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

int main() {
    vector<int> numbers(4); // 정수 4개를 담을 벡터
    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; i++) {
        cin >> numbers[i]; // 사용자로부터 입력받음
    }

    // 최대값과 최소값을 찾기
    int maxValue = *max_element(numbers.begin(), numbers.end());
    int minValue = *min_element(numbers.begin(), numbers.end());

    // 최대값과 최소값의 원래 위치 구하기
    int maxIndex = distance(numbers.begin(), max_element(numbers.begin(), numbers.end())) + 1;
    int minIndex = distance(numbers.begin(), min_element(numbers.begin(), numbers.end())) + 1;

    // 오름차순 정렬
    vector<int> ascending = numbers;
    sort(ascending.begin(), ascending.end());

    // 내림차순 정렬
    vector<int> descending = numbers;
    sort(descending.begin(), descending.end(), greater<int>());

    // 결과 출력
    cout << "최대값은 " << maxIndex << "번째 값 " << maxValue << endl;
    cout << "최소값은 " << minIndex << "번째 값 " << minValue << endl;

    cout << "오름차순 결과는 ";
    for (size_t i = 0; i < ascending.size(); i++) {
        cout << ascending[i];
        if (i < ascending.size() - 1) cout << ", ";
    }
    cout << endl;

    cout << "내림차순 결과는 ";
    for (size_t i = 0; i < descending.size(); i++) {
        cout << descending[i];
        if (i < descending.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
