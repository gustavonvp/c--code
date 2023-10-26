#include <iostream>
using namespace std;
class A {
    public: int p (void) {return 2;}

};

class B : public A {
    public:
        int p(void) {return 1;}
};


int main(void) {
    A *a = new B;
    cout << static_cast<A*>(a) -> p() << endl;
}