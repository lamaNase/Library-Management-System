#include "book.h"

Book::Book() {
	id = bookID;
	bookID += 1;
}

int Book::getID(){
    	return this->id;
}
    	
std::string Book::getTitle(){
    	return this->title;
}
    	
std::string Book::getAuther(){
    	return this->auther;
}
    	
void Book::setTitle(std::string title){
    	this->title = title;
}
    	
void Book::setAuther(std::string auther){
    	this->auther = auther;
}

void Book::setID(int id){
	this->id = id;
}

void Book::displayInfo() {
	std::cout << "Book #" << this->id << std::endl;
	std::cout << "\tType: " << getType() << std::endl;
	std::cout << "\tTitle:" << this->title << std::endl;
	std::cout << "\tAuther: " << this->auther << std::endl;
	std::cout << std::endl;
}
