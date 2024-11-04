#ifndef BOOK2_H
#define BOOK2_H

#include <iostream>
#include <string>
using namespace std;

class book2 {
    string title;
    int price;
    int pages;
public:
    book2(string title = "", int price = 0, int pages = 0);
    void show();
    string getTitle();

    // ! 연산자 오버로딩
    bool operator!();
};

#endif
