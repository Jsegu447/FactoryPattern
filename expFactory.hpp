#include "div.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "add.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "base.hpp"
#include "op.hpp"
class base;
class expFactory {
public:
Base* parse(char** input, int length);
};

