#include <iostream>
using namespace std;

class A {
public:
    A() {a[0] = 1; a[1] = 0; }
    int a[2];
    int b(void) {int x=a[0]; a[0]=a[1];a[1]=x; return x;}
};



int main(void){

    A a;
    a.b();
    cout << a.b() << a.a[1] <<endl;
}