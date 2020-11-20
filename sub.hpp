#ifndef SUB_HPP
#define SUB_HPP
#include "base.hpp"
#include <string>
using namespace std;

class Sub: public Base {
private:
Base* Object1;
Base* Object2;
public:
	 Sub(Base* ob1, Base* ob2) : Base() {Object1 = ob1;
Object2 = ob2;
 }
        virtual double evaluate() { return Object1->evaluate() - Object2->evaluate(); }
        virtual std::string stringify() { return Object1->stringify()+ " - " +Object2->stringify(); }

};
#endif //SUB_HPP
