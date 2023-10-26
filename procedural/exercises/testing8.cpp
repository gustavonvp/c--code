#include <iostream>
using namespace std;

class A {
public:
    static int a;
    A() {a = 0; a++;}
    A(A &aa) {a++;}
};

int A::a = 1;
int main(void) {
    A a, b(a), c(b);
    cout << a.a << endl;
    return 0;
}