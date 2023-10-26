#include <iostream>
using namespace std;
class A {
public:
    A() {a[0] = 1; a[1] = 0; }
    int a[2];
    int b(void) {int x=a[0]; a[0]=a[1];a[1]=x; return x;}
};


class B {
public:
    B() {b.b = b.c = 1;}
    struct {int b,c;} b;
    int c(void);
};
int B::c(void) {int x = b.b;b.b=b.c;b.c=x; return x;};


int main(void){
    A a;
    B b;
    b.b.b = 0;
    b.c();
    a.b();
    cout << a.b() << a.a[1] <<endl;
    cout << b.c() << b.b.c << endl;


    return 0;
}