#include "book_factory.h"

Book* BookFactory::createBook(std::string type, std::string title, std::string auther){
	if (type == "Fiction book") {
        	return new Fiction(title, auther);
    	} else if (type == "History book")
        	return new History(title, auther);
    	return nullptr;
}

