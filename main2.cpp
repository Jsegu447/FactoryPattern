#include "expFactory.hpp"
#include "base.hpp"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
expFactory* thing;
cout << "test start" << endl;
cout << argc << endl;
cout << "test end" << endl;
Base* root = thing->parse(argv,argc);
 if(root != nullptr){
    cout << root->stringify() << endl;
    cout << root->evaluate() << endl;
    }
    else{
        cout << "nothing to print" << endl;
    }
return 0;
}
