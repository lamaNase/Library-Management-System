#ifndef BOOK_FACTORY_H
#define BOOK_FACTORY_H

#include <iostream>
#include <string.h>
#include "book.h"
#include "fiction.h"
#include "history.h"

class BookFactory {
public:
    static Book* createBook(std::string type, std::string title, std::string auther);
};

#endif // BOOK_FACTORY_H

