#include "user.h"

User::User(int id, std::string name, int phone_number){
    	this->id = id;
    	this->name = name;
    	this->phone_number = phone_number;
}
    	
int User::getID(){
    	return this->id;
}
    	
void User::setID(int id){
    	this->id = id;
}
    	
void User::printInfo(){
    	std::cout << "User #" << this->id << std::endl;
    	std::cout << "\tName: " << this->name << std::endl;
    	std::cout << "\tPhone number: " << this->phone_number << std::endl;
    	std::cout << std::endl;
}
    

