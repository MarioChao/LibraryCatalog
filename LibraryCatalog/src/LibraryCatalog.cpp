#include "../inc/Book.h"
#include "../inc/SafeCin.h"

#include "../inc/LibraryCatalog.h"
using std::cin;
using std::cout;
using std::swap;

LibraryCatalog::LibraryCatalog() {
    books.clear();
}

void LibraryCatalog::addBook(Book b) {
    books.push_back(b);
}
void LibraryCatalog::addBook() {
    string title, author;
    int year;
    // Input title
    do {
        cout << "What is the title?\n";
        getline(cin, title);
    } while (!isCinSafe());
    // Input author
    do {
        cout << "Who is the author?\n";
        getline(cin, author);
    } while (!isCinSafe());
    // Input year
    do {
        cout << "What is the year of publication?\n";
        cin >> year;
        clearCin();
    } while (!isCinSafe());

    // Call the addBook that accepts a Book object
    addBook(Book(title, author, year));
}

void LibraryCatalog::searchBook(string search) {
    // Display all books in the catalog that match the search term
    cout << "Searching for book with title or author \"" << search << "\":\n";
    cout << "- - - - - - - - - -\n";
    for (Book book : books) {
        if (book.getAuthor() == search || book.getTitle() == search) {
            cout << book.getInfo() << '\n';
            cout << "- - - - - - - - - -\n";
        }
    }
}
void LibraryCatalog::searchBook() {
    string search;
    // Input search term
    do {
        cout << "Enter a search term (title or author)\n";
        cout << "> ";
        getline(cin, search);
    } while (!isCinSafe());
    // Call the searchBook that accepts a string
    searchBook(search);
}

void LibraryCatalog::removeBook(string title) {
    // Remove the book (if any) from the catalog
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getTitle() == title) {
            swap(books[i], books.back());
            books.pop_back();
            break;
        }
    }
}
void LibraryCatalog::removeBook() {
    string title;
    // Input title
    do {
        cout << "Enter the title of the book you want to remove\n";
        cout << "> ";
        getline(cin, title);
    } while (!isCinSafe());
    // Call the removeBook that accepts a string
    removeBook(title);
}

void LibraryCatalog::displayAllBooks() {
    // Display the title, author, and year of publication for each book in the catalog
    cout << "- - - - - - - - - -\n";
    for (Book book : books) {
        cout << book.getInfo() << '\n';
        cout << "- - - - - - - - - -\n";
    }
}