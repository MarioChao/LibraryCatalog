#ifndef __Book__
#define __Book__

#include <iostream>
using std::string;

class Book {
    private:
        string title, author;
        int year;
    public:
        Book();
        Book(string t, string a, int y);
        
        string getTitle();
        void setTitle(string t);

        string getAuthor();
        void setAuthor(string a);

        int getYear();
        void setYear(int y);

        string getInfo();
};

#endif