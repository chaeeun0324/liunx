#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show() {
    cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
}

Book& operator+=(Book& book, int amount) {
    book.price += amount;
    return book;
}

Book& operator-=(Book& book, int amount) {
    book.price -= amount;
    return book;
}
