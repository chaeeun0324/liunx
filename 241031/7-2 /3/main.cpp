#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = a - 2; // 파워 객체와 정수 빼기
    a.show();
    b.show();
    return 0;
}
