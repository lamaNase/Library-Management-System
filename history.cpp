#include "history.h"

History::History(std::string title, std::string auther){
    	setTitle(title);
    	setAuther(auther);
}
    
std::string History::getType(){
	return "History book";
}
