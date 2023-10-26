#include <iostream>
using namespace std;
class A {
    int a ;
public:
    int b;
    A(void) {a = b = 1;}
};

int main(void) {
    A a;
    a.b /= 2;
    cout << a.b << endl;
    return 0;
}