#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex x(2, 3), y(-5, 10), product;
    product = x * y;
    cout << "두 복소수의 곱은 ";
    product.show();
    return 0;
}
