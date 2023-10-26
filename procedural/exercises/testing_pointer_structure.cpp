#include <iostream>
using namespace std;

class B {
public:
    B() {b.b = b.c = 1;}
    struct {int b,c;} b;
    int c(void);
};
int B::c(void) {int x = b.b;b.b=b.c;b.c=x; return x;};

int main(void){

    B b;
    b.b.b = 0;
    b.c();
    cout << b.c() << b.b.c << endl;
}