#include <iostream>
using namespace std;
class A {
    int a;
};

int main (void) {
    A a;
    a.a = 1/2;
    cout << a.a << endl;

    return 0;
}