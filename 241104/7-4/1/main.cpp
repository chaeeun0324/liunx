#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex x(2, 3);
    ++x;
    cout << "증가결과 ";
    x.show();

    --x;
    cout << "감소결과 ";
    x.show();

    return 0;
}
