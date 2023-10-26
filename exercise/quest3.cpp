#include <iostream>
using namespace std;

class A {
    public: 
        int x;
        void d() {x /= 2;}
};

class B : public A {
    public:
        int y;
        void d() { A::d();}

};

int main (void) {
    B b;
    b.x = b.y = 4;
    b.d();
    cout << b.y / b.x << endl;
    return 0;
}