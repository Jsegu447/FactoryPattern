#include "div.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "add.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "base.hpp"

class expFactory(){
private:
	string userInput;
	Base* root;
public:
	void createTree();
	void infix();
	expFactory();
	expFactory(string s);
}

