#include "Book.h"

int main() {
    Book a("û��", 20000, 300), b("�̷�", 30000, 500);
    a += 500;   // a�� price�� 500�� ����
    b -= 500;   // b�� price���� 500�� ��
    a.show();
    b.show();
    return 0;
}