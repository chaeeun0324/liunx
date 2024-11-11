#include "ColorPoint.hpp"
#include <iostream>

int main() {
    ColorPoint zeroPoint;
    zeroPoint.show();

    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();

    return 0;
}
