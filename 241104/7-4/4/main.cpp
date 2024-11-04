#include "Book.h"

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500;   // a의 price에 500을 더함
    b -= 500;   // b의 price에서 500을 뺌
    a.show();
    b.show();
    return 0;
}
