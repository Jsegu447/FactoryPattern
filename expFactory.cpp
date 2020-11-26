#include "expFactory.hpp"
#include <stack>

Base* expFactory::parse(char** input, int length){
stack <Base*> expression;
stack <char*> ops;
stack <char*> erands;
Base* root == nullptr;
if(length == 1 ){
return root;
}

for( int i = 1; i < length; i++ ){
	if(is_digit(input[i]){
		ops.push(input[i]);
	}

	else if(input[i] == "*" || input[i] == "-" || input[i] == "/" || input[i] == "**" || input[i] == "+" ){
		erands.push(input[i];
	}
}

int a = atoi(ops.top());
op.pop();
int b = atoi(ops.top());
op.pop();




  
               

