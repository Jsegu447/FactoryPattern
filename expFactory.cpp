#include "expFactory.hpp"
#include <vector>

Base* expFactory::parse(char** input, int length){
vector<string> tree;

for (int i = 1; i < length; i++){
	tree.push_back(input[i]);
}

//special case
Base* lhs;
if(tree.at(1) == "+"){
   Add* add = new Add(tree.at(0), tree.at(2);
   lhs = add;
}
else if(tree.at(1) == "-"){
   Sub* sub = new Sub(tree.at(0), tree.at(2);
   lhs = sub;
}
else if(tree.at(1) == "*"){
   Mult* mult = new Mult(tree.at(0), tree.at(2);
   lhs = mult;
}
else if(tree.at(1) == "/"){
   Div* div = new Div(tree.at(0), tree.at(2);
   lhs = div;
}
else if(tree.at(1) == "**"){
   Pow* pow = new Pow(tree.at(0), tree.at(2);
   lhs = pow;
}
else{
  Rand* rand = new Rand();
  lhs = rand;
  //not sure how rand works 
}

tree.erase(tree.begin(), tree.begin()+3);

while(tree.size!=0){
if(tree.at(0) == "+"){
   lhs = new Add(lhs, tree.at(1);
}
else if(tree.at(0) == "-"){
   Sub* sub2 = new Sub(lhs, tree.at(1);
   lhs = sub2;
}
else if(tree.at(0) == "*"){
   lhs = new Mult(lhs, tree.at(1);
}
else if(tree.at(0) == "/"){
   lhs = new Div(lhs, tree.at(1);
}
else if(tree.at(0) == "**"){
   lhs = new Pow(lhs, tree.at(1);
}
else{
  lhs = new Rand();
  //not sure how rand works
}
tree.erase(tree.begine(); tree.begin()+2);
}


"5" "+" "3"
[0] [1]	[2]
if (tree.at(1)){
Add* add = new Add (tree.at(0), tree.at(2
--> ans = 8
}
for (int i = 0; i < 3; i++){
tree.erase(tree.at(i)
}


int i= ans = 8

for/while size!=0{
operator = tree.at(0)
if (tree.at(0) == '')
sub* sub = sub(add, tree.at(1))
for (i - 0; i < 2; i++){
		tree.erase(tree.at(i))
}
}
