#include "Color1.h"  // Color1.h ��� ���� ����

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;  // ���� ���ϱ�
    c.show();  // ���� ���

    Color fuchsia(255, 0, 255);
    if (c == fuchsia)  // ���� ��
        cout << "����� ����" << endl;
    else
        cout << "����� �ƴ�" << endl;

    return 0;
}
