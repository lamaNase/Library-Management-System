#ifndef HISTORY_H
#define HISTORY_H

#include <iostream>
#include "book.h"

class History : public Book {
public:
    History(std::string title, std::string auther);
    std::string getType() override;
};

#endif // FICTION_H

