#include "expFactory.hpp"
#include "base.hpp"
int main(int argc, char* argv[]){
expFactory thing;
Base* root = thing.parse(argv,argc);
root->stringify();
return 0;
}
