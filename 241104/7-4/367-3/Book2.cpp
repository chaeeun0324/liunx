#include "book2.h"  
#include <iostream>
using namespace std;

// 생성자 구현
book2::book2(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

// 책 정보 출력 함수 구현
void book2::show() {
    cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
}

// ! 연산자 오버로딩
bool book2::operator!() {
    return price == 0;
}
