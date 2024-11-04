#include "Color1.h"  // Color1.h 헤더 파일 포함

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;  // 색상 더하기
    c.show();  // 색상 출력

    Color fuchsia(255, 0, 255);
    if (c == fuchsia)  // 색상 비교
        cout << "보라색 맞음" << endl;
    else
        cout << "보라색 아님" << endl;

    return 0;
}
