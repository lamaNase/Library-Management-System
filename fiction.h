#ifndef FICTION_H
#define FICTION_H

#include <iostream>
#include "book.h"

class Fiction : public Book {
public:
    Fiction(std::string title, std::string auther);
    std::string getType() override;
};

#endif // FICTION_H

