#ifndef __LibraryCatalog__
#define __LibraryCatalog__

#include "../inc/Book.h"

#include <iostream>
#include <vector>
using std::string;
using std::vector;

class Book;

class LibraryCatalog {
    private:
        vector<Book> books;
    public:
        LibraryCatalog();

        void addBook(Book b);
        void addBook();

        void searchBook(string search);
        void searchBook();

        void removeBook(string title);
        void removeBook();

        void displayAllBooks();
};

#endif