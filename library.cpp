#include "library.h"

void Library::addBook(Book* book) {
    	books.push_back(book);
}

bool Library::bookExist(int id) {
    	for (auto book : books) {
    	    if (id == book->getID()) {
    	        return true;
    	    }
    	}
    	return false;
}

void Library::removeBook(int id) {
    	for (auto it = books.begin(); it != books.end(); ++it) {
        	if (id == (*it)->getID()) {
        	    delete *it;
        	    books.erase(it);
        	    break;
        	}
    	}
}

std::vector<Book*> Library::searchBook(std::string title) {
    	std::vector<Book*> books_returned;
    	for (auto book : books) {
    	    if (title == book->getTitle()) {
    	        books_returned.push_back(book);
    	    }
    	}
    	return books_returned;
}

void Library::addUser(User& user) {
    	users.push_back(user);
}

bool Library::userExist(int id) {
    	for (auto& user : users) {
        	if (id == user.getID()) {
        	    return true;
        	}
    	}
    	return false;
}

void Library::removeUser(int id) {
    	for (auto it = users.begin(); it != users.end(); ++it) {
        	if (id == it->getID()) {
        	    users.erase(it);
        	    break;
        	}
    	}
}

void Library::displayAllBooks() {
	std::cout << "\n=================================" << std::endl;
	if (books.size() == 0)
		std::cout << "No books added yet...\n";
	else {
		for (auto book : books) {
        		book->displayInfo();
    		}
    	}
    	std::cout << "=================================" << std::endl;
}

