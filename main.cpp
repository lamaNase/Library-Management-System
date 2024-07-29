#include <iostream>
#include "library.h"
#include "book_factory.h"
#include "user.h"

bool check_valid_choice(std::string,int*);
void addBook(Library&);
void searchBook(Library&);

int Book::bookID = 0;
int main() {
    Library& library = Library::getInstance();
    
    std::cout << "Welcome to our Library MAnagement System\n" << std::endl;
    
    while (true) {
    	std::string choice;
    	int* numPtr;
    	int num;
    	numPtr = &num;
    	//main menue
    	std::cout << "1- Display all books" << std::endl;
    	std::cout << "2- Add new book" << std::endl;
    	std::cout << "3- Search for a book" << std::endl;
    	std::cout << "4- Exit" << std::endl;
    	std::cout << "Enter your choice: ";
    	std::cin >> choice;
    	if (check_valid_choice(choice,numPtr) == false){
    		std::cout << "\nInvalid number, try again\n" << std::endl;
    		continue;
    	} switch (num){
    		case 1:
    			library.displayAllBooks();
    			break;
    		case 2:
    			addBook(library);
    			break;
    		case 3:
    			searchBook(library);
    			break;
    		case 4:
    			std::cout << "\nThank you...\n";
    			exit(1);
    		default:
    			std::cout << "\nChoose between 1 and 4 only...\n";
    	}
    }
}

bool check_valid_choice(std::string choice,int* num){
	try {
		*num = std::stoi(choice);
		return true;
	} catch (const std::invalid_argument& e){
		return false;
	} catch (const std::out_of_range& e) {
		return false;
	}
}

void addBook(Library& library) {
	int num;
	std::string type, title, auther;
	std::cout << "===================================" << std::endl;
	std::cout << "Choose book type:\n";
	std::cout << "1- Fiction book" << std::endl;
	std::cout << "2- History book" << std::endl;
	std::cin >> num;
	switch (num){
		case 1:
			type = "Fiction book";
			break;
		case 2:
			type = "History book";
			break;
		default:
			std::cout << "Invalid input\n";
	}
	
	std::cout << "Enter book's title: ";
	std::cin >> title;
	std::cout << "Enter book's auther: ";
	std::cin >> auther;
	
	Book* book = BookFactory::createBook(type, title, auther);
    	library.addBook(book);
    	
    	std::cout << "Book added sunccessfully...\n";
    	std::cout << "===================================\n" << std::endl;
}

void searchBook(Library& library) {
	std::cout << "\n===================================" << std::endl;
	std::string title;
	std::vector<Book*> books;
	std::cout << "Enter book title: ";
	std::cin >> title;
	books = library.searchBook(title);
	if (books.size() == 0)
		std::cout << "No book with this title" << std::endl;
	else {
		for (auto book : books)
    		    book->displayInfo();
    	}
	std::cout << "===================================\n" << std::endl;
}

