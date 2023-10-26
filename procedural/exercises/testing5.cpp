#include <iostream>
using namespace std;
class A {
public:
    int a;
    A() {a = 1;}
    A(int aa) { a = 2;}
    A(A &aa) { a = 3;}
};

int main(void) {
    A a(1), b(a);
    cout << a.a + b.a << endl;
    return 0;
}