#include "book2.h"  

int main() {
    book2 book("�������", 0, 50);
    if (!book) {
        cout << "��¥��" << endl;
    }
    else {
        cout << "�����" << endl;
    }
    return 0;
}
