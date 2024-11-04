#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;

public:
    // 생성자
    Power(int k = 0, int p = 0);

    // 복사 생성자 및 할당 연산자 사용 기본 구현

    // 출력 함수
    void show() const;

    // 정수와 Power 객체의 곱셈 연산자 오버로딩 (멤버 함수로 구현)
    Power operator*(int factor) const;

    // 정수 * Power 객체의 곱셈을 지원하는 프렌드 함수
    friend Power operator*(int factor, const Power& p);
};

#endif
