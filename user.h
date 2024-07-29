#ifndef USER_H
#define USER_H

#include <iostream>
#include <iostream>

class User {
public:
    	User(int id, std::string name, int phone_number);
    	int getID();
    	void setID(int id);
    	void printInfo();
    
private:
	int id;
	std::string name;
	int phone_number;
};

#endif // USER_H
