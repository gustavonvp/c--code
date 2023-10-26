#include <iostream>
using namespace std;
class A {
    public: static int a;
    A(){a++;}
};

int A::a = 0;
void f(void){
    A a;
    throw A();
}



int main (void) {
   A a;
    try {
        f();
    }catch(...){
       
    }

    cout << A::a << endl;
    return 0;
}