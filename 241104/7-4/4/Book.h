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
    friend Book& operator+=(Book& book, int amount);
    friend Book& operator-=(Book& book, int amount);
};

#endif
