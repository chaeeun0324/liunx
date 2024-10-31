#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;

public:
    Power(int k = 0, int p = 0);

    // 뺄셈 연산자 오버로딩
    Power operator-(int value);

    void show() const;
};

#endif
