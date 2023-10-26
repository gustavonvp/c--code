#include <iostream>
using namespace std;
class A { 
    friend void i (A*);
    int a;

    public: A() : a(2) {}
            int f() {return a;}
};

void i (A* a){
    a->a *= 2;
}


int main(void) {
    A a;
    i(&a);
    cout << a.f() << endl;
    return 0;
}