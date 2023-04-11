#include "../inc/Book.h"
using std::to_string;

Book::Book() : title(""), author(""), year(0) {};
Book::Book(string t, string a, int y) {
    title = t;
    author = a;
    year = y;
}

string Book::getTitle() {
    return title;
}
void Book::setTitle(string t) {
    title = t;
}

string Book::getAuthor() {
    return author;
}
void Book::setAuthor(string a) {
    author = a;
}

int Book::getYear() {
    return year;
}
void Book::setYear(int y) {
    year = y;
}

string Book::getInfo() {
    return title + '\n' + author + '\n' + to_string(year);
}