#include "fiction.h"

Fiction::Fiction(std::string title, std::string auther){
	setTitle(title);
    	setAuther(auther);
}
    
std::string Fiction::getType(){
    	return "Fiction book";
}

