#include <iostream>
using namespace std;
class A { 
    friend void i (int);
    int a;

    public: A() : a(4) {}
            int f() {return a;}
};

void i (int a){
    a /= 2;
}


int main(void) {
    A a;
    i(a.a);
    cout << a.f() << endl;
    return 0;
}