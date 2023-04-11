#include "../inc/SafeCin.h"
#include "../inc/LibraryCatalog.h"

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::pair;
using std::make_pair;

void runProgram();

vector< pair<string, string> > commandList;
void setCommands();
void showCommands();

int main() {
    runProgram();
}

void runProgram() {
    LibraryCatalog myLibrary;
    // Runs until user quits
    setCommands();
    while (true) {
        string command;
        do {
            cout << "\nEnter a command (\"help\" for a list of commands)\n";
            cout << "> ";
            getline(cin, command);
        } while (!isCinSafe());
        cout << '\n';
        
        if (command == "add") {
            myLibrary.addBook();
        } else if (command == "search") {
            myLibrary.searchBook();
        } else if (command == "remove") {
            myLibrary.removeBook();
        } else if (command == "display") {
            myLibrary.displayAllBooks();
        } else if (command == "help") {
            showCommands();
        } else if (command == "quit") {
            break;
        }
    }
}

void setCommands() {
    commandList.clear();
    commandList.push_back(make_pair("add", "Add a book."));
    commandList.push_back(make_pair("search", "Search for a book."));
    commandList.push_back(make_pair("remove", "Remove a book."));
    commandList.push_back(make_pair("display", "Display all books."));
    commandList.push_back(make_pair("help", "Show this list."));
    commandList.push_back(make_pair("quit", "Quit the program."));
}
void showCommands() {
    cout << "Command list:\n";
    for (pair<string, string> i : commandList) {
        cout << "\"" << i.first << "\": " << i.second << '\n';
    }
}