#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
int i = 1;

class A : public logic_error{
    public: A() : logic_error("?") {}
};

class B : public logic_error{
    public: B() : logic_error("!") {}
};

void f(void){
    i++;
    throw B();
    i++;
}

void g (void){
  try{f();}
    catch(A &a) {throw A();}
}

int main (void) {
  
    try {
        g();
        i++;
    }catch(logic_error ){
        i++;
    }catch(...){
        i++;
    }
    

    cout << i << endl;
    return 0;
}