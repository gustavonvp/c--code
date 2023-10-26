#include <iostream>
using namespace std;
class A { 
    friend class B;
    int a;

    public: A() : a(1) {}
            int f() {return a;}
};

class B  {
    public:
        static void f(A &a) {a.a++;}
};


int main(void) {
    A a;
    B::f(a);
    cout << a.f() << endl;
}