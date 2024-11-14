#include <iostream>
using namespace std;

// 템플릿 함수 getMax 정의: 배열에서 최대값을 찾음
template <class T>
T getMax(T data[], int n) {
    T maxVal = data[0]; // 배열의 첫 번째 원소로 초기화
    for (int i = 1; i < n; i++) { // 배열을 순회하여 최대값 찾기
        if (data[i] > maxVal) {
            maxVal = data[i];
        }
    }
    return maxVal; // 최대값 반환
}

int main() {
    int a[5] = { -5, 10, 30, 20, 6 };          // 정수 배열
    double b[4] = { 3.14, 1.5, -6.0, 0.5 };     // 실수 배열
    char c[3] = { 'a', 'x', 'p' };              // 문자 배열

    // 각 배열의 최대값을 출력
    cout << "정수 배열의 최대값은 " << getMax(a, 5) << endl;
    cout << "실수 배열의 최대값은 " << getMax(b, 4) << endl;
    cout << "문자 배열의 최대값은 " << getMax(c, 3) << endl;

    return 0;
}
