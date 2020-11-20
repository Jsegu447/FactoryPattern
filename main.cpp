#include <iostream>

#include "base.hpp"
#include "add.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"

using namespace std;

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);

    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    
    Base* rand = new Rand();
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* power = new Pow(rand, zero);
    Base* add1 = new Add(one, power);

    cout << add1->stringify() << " = " << add1->evaluate() << endl;
    return 0;
}
