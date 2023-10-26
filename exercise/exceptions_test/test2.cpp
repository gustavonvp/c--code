#include <iostream>
using namespace std;
class A {
    public: static int a;
    A(){a++;}
};

int A::a = 1;
void f(void){
    A a;
    throw string("?");
}



int main (void) {
   A a;
    try {
        f();
    }catch(string &s){
       
    }

    cout << A::a << endl;
    return 0;
}