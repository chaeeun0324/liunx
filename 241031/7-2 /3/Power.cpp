#include <iostream>
#include "Power.h"
using namespace std;

Power::Power(int k, int p) : kick(k), punch(p) {}

Power Power::operator-(int value) {
    return Power(kick - value, punch - value);
}

void Power::show() const {
    cout << "kick=" << kick << ", punch=" << punch << endl;
}
