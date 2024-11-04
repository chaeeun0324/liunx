#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
    string title;
    int price;
    int pages;
public:
    Book(string title = "", int price = 0, int pages = 0);
    void show();
    // 외부 연산자 함수로 사용할 수 있도록 friend 선언
    friend Book& operator+=(Book& book, int amount);
    friend Book& operator-=(Book& book, int amount);
};

#endif
