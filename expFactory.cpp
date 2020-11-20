#include "expFactory.hpp"
#include <string>
expFactory::expFactory(string s){
	root = nullptr;
	userInput = s;
}


expFactory::expFactory(){
	root = nullptr;
	userInput = "";
}


void expFactory::createTree();


void expFactory::infix();
}

