#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
public:
    static int bookID;
    Book();
    virtual std::string getType() = 0;
    int getID();
    std::string getTitle();
    std::string getAuther();
    void setTitle(std::string title);
    void setAuther(std::string auther);
    void setID(int id);
    void displayInfo();

protected:
    std::string title;
    std::string auther;
    int id;
};

#endif // BOOK_H

