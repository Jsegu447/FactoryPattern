#include "expFactory.hpp"
#include <vector>
#include <stdlib.h>
Base* expFactory::parse(char** input, int length){
vector<string> tree;

if(length < 4){
return nullptr;
}

for (int i = 1; i < length; i++){
	tree.push_back(input[i]);
}

//special case
Base* lhs;
  int a = stoi(tree.at(0));
  int b = stoi(tree.at(2));
  Base* l = new Op(a);
  Base* r = new Op(b); 
if(tree.at(1) == "+"){
   Add* add = new Add(l,r);
   lhs = add;
}
else if(tree.at(1) == "-"){
   Sub* sub = new Sub(l,r);
   lhs = sub;
}
else if(tree.at(1) == "*"){
   Mult* mult = new Mult(l,r);
   lhs = mult;
}
else if(tree.at(1) == "/"){
   Div* div = new Div(l,r);
   lhs = div;
}
else if(tree.at(1) == "**"){
   Pow* pow = new Pow(l,r);
   lhs = pow;
}
else{
  Rand* rand = new Rand();
  lhs = rand;
  //not sure how rand works 
}

tree.erase(tree.begin(), tree.begin()+3);

while(tree.size()!=0){
int c = stoi(tree.at(1));
Base* r2 = new Op(c);
if(tree.at(0) == "+"){
   lhs = new Add(lhs,r2);
}
else if(tree.at(0) == "-"){
   Sub* sub2 = new Sub(lhs,r2);
   lhs = sub2;
}
else if(tree.at(0) == "*"){
   lhs = new Mult(lhs,r2);
}
else if(tree.at(0) == "/"){
   lhs = new Div(lhs,r2);
}
else if(tree.at(0) == "**"){
   lhs = new Pow(lhs,r2);
}
else{
  lhs = new Rand();
  //not sure how rand works
}
tree.erase(tree.begin(), tree.begin()+2);
}

return lhs;
}
