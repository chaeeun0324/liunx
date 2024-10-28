// **********************************************
// 제 목 : 실수부 허수부 구성 후 합 구하기 
// 날 짜 : 2024년 10월28 일
// 작성자 : 2101073 이채은
// **********************************************
#include <iostream>   // 입출력을 위한 헤더 파일 포함
using namespace std;
//1-1
/*
#include <iostream>   // 입출력을 위한 헤더 파일 포함
using namespace std;  

class Complex {
private:
    int real;          // 실수 
    int img;           // 허수

public:
    // 기본 생성자: 실수부와 허수부를 0으로 초기화
    Complex() : real(0), img(0) {}

    // 매개변수가 있는 생성자: 실수부와 허수부 초기화
    Complex(int r, int i) : real(r), img(i) {}

    // 복소수 출력
    void show() const {
        cout << real << " + " << img << "j" << endl;   // 복소수 형식으로 출력
    }

    // 복소수 덧셈 연산을 위해 private 멤버 변수 접근 허용
    friend Complex ComplexAdd(const Complex& c1, const Complex& c2);
};

// 전역 함수: 두 복소수를 더하고 결과 반환
Complex ComplexAdd(const Complex& c1, const Complex& c2) {
    // 실수부끼리, 허수부끼리 더한 새 복소수 반환
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main() {
    Complex x(2, 3);   // 복소수 x 초기화 
    Complex y(-5, 10); // 복소수 y 초기화 
    Complex sum;       // 합을 저장할 복소수 sum 선언

    sum = ComplexAdd(x, y); // x와 y의 합 계산 후 sum에 저장

    cout << "두 복소수의 합은 "; // 결과 출력
    sum.show();               

    return 0;
}
*/
//1-2
/*
lass Complex {
private:
    int real;          // 실수부 
    int img;           // 허수부 

public:
    // 실수부와 허수부를 0으로 초기화
    Complex() : real(0), img(0) {}

    // 실수부와 허수부 초기화
    Complex(int r, int i) : real(r), img(i) {}

    // 복소수 출력 
    void show() const {
        cout << real << " + " << img << "j" << endl;   // 복소수 형식으로 출력
    }

    // ComplexManager 클래스의 멤버 함수가 private 멤버에 접근 가능하도록 friend 선언
    friend class ComplexManager;
};

class ComplexManager {
public:
    // ComplexAdd: 두 개의 Complex 객체를 더해 결과 반환
    Complex ComplexAdd(const Complex& c1, const Complex& c2) {
        // 새로운 Complex 객체 반환
        return Complex(c1.real + c2.real, c1.img + c2.img);
    }
};

int main() {
    Complex x(2, 3);   // 복소수 x 초기화
    Complex y(-5, 10); //복소수 y 초기화 
    ComplexManager manager; // ComplexManager 객체 생성
    Complex sum;       // 합 저장

    sum = manager.ComplexAdd(x, y); // x와 y의 합 장

    cout << "두 복소수의 합은 "; // 결과 출력
    sum.show();                // sum 출력

    return 0; // 프로그램 정상 종료
}
*/
//1-3
/*
#include <iostream>   // 입출력 처리를 위한 헤더 파일 포함
using namespace std;   // 표준 네임스페이스 사용

// Complex 클래스 정의: 복소수를 표현하기 위한 클래스
class Complex {
private:
    int real;          // 실수부 멤버 변수
    int img;           // 허수부 멤버 변수

public:
    // 기본 생성자: 실수부와 허수부를 0으로 초기화
    Complex() : real(0), img(0) {}

    // 매개변수가 있는 생성자: 실수부와 허수부를 전달받아 초기화
    Complex(int r, int i) : real(r), img(i) {}

    // 복소수의 값을 출력하는 함수
    void show() const {
        cout << real << " + " << img << "j" << endl;   // 복소수 형식으로 출력
    }

    // ComplexManager 클래스가 private 멤버에 접근 가능하도록 friend 선언
    friend class ComplexManager;
};

// ComplexManager 클래스 정의: 복소수 연산을 위한 클래스
class ComplexManager {
public:
    // ComplexAdd 함수: 두 복소수를 더해 결과를 반환
    Complex ComplexAdd(const Complex& c1, const Complex& c2) {
        return Complex(c1.real + c2.real, c1.img + c2.img); // 실수부와 허수부 각각 더해 새로운 Complex 객체 반환
    }

    // ComplexSub 함수: 두 복소수의 차를 구해 결과를 반환
    Complex ComplexSub(const Complex& c1, const Complex& c2) {
        return Complex(c1.real - c2.real, c1.img - c2.img); // 실수부와 허수부 각각 빼서 새로운 Complex 객체 반환
    }
};

int main() {
    Complex x(5, 5);   // 첫 번째 복소수 x 초기화 (5 + 5j)
    Complex y(2, 2);   // 두 번째 복소수 y 초기화 (2 + 2j)
    ComplexManager man; // 복소수 연산을 위한 ComplexManager 객체 생성
    Complex sum, sub;  // 덧셈과 뺄셈 결과를 저장할 복소수 객체 선언

    // 두 복소수의 합 계산
    sum = man.ComplexAdd(x, y);
    cout << "두 복소수의 합은 "; // 덧셈 결과 출력
    sum.show();                // 합을 출력하는 show() 함수 호출

    // 두 복소수의 차 계산
    sub = man.ComplexSub(x, y);
    cout << "두 복소수의 차는 "; // 뺄셈 결과 출력
    sub.show();                 // 차를 출력하는 show() 함수 호출

    return 0; // 프로그램 정상 종료
}
*/
