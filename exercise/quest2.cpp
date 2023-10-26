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
        void d() { y /= 4;}

};

int main (void) {
    B b;
    b.x = b.y = 4;
    b.d();
    cout << b.x / b.y << endl;
    return 0;
}