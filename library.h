#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include "book.h"
#include "user.h"

class Library {
public:
    static Library& getInstance() {
        static Library instance;
        return instance;
    }
    void addBook(Book* book);
    bool bookExist(int id);
    void removeBook(int id);
    std::vector<Book*> searchBook(std::string title);
    void addUser(User& user);
    bool userExist(int id);
    void removeUser(int id);
    void displayAllBooks();

private:
    Library() {} // making constructor private to prevent more than one instantiation
    // remove any another copy made
    Library(const Library&) = delete;
    Library& operator=(const Library&) = delete;
    // define set of books and users belong to this library
    std::vector<Book*> books;
    std::vector<User> users;
};

#endif // LIBRARY_H

