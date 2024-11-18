#include <iostream>
using namespace std;

// 템플릿 클래스 정의
template <class T>
class Container {
    T* p;       // T 타입의 동적 배열 포인터
    int size;   // 배열의 크기를 저장하는 변수

public:
    // 생성자
    Container(int n) {
        size = n;           // 배열 크기 설정
        p = new T[size];    // 동적 배열 생성
    }

    // 소멸자
    ~Container() {
        delete[] p;         // 동적 배열 메모리 해제
    }

    // 배열의 특정 위치에 값을 설정하는 함수
    void set(int index, T value) {
        if (index >= 0 && index < size) { // 유효한 인덱스인지 확인
            p[index] = value;
        }
    }

    // 배열의 특정 위치의 값을 반환하는 함수
    T get(int index) {
        if (index >= 0 && index < size) { // 유효한 인덱스인지 확인
            return p[index];
        }
        return T(); // 기본값 반환 (잘못된 인덱스일 경우)
    }
};

// main 함수
int main() {
    Container<char> c(26); // 크기가 26인 char 타입의 Container 객체 생성

    // 알파벳 소문자 'a'부터 'z'까지 저장
    for (int i = 0; i < 26; i++) {
        c.set(i, 'a' + i);
    }

    // 알파벳을 역순으로 출력
    for (int i = 25; i >= 0; i--) {
        cout << c.get(i);
    }
    cout << endl;

    return 0;
}
