#include "book2.h"  
#include <iostream>
using namespace std;

// ������ ����
book2::book2(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

// å ���� ��� �Լ� ����
void book2::show() {
    cout << title << ' ' << price << "�� " << pages << "������" << endl;
}

// ! ������ �����ε�
bool book2::operator!() {
    return price == 0;
}
