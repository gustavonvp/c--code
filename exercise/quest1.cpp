#include <iostream>
using namespace std;
class A {
public: 
    char c;
};
class B : A{

};

int main (void) {
    B b;
    A a;
    a.c = b.c = '?';
    cout << int(a.c - b.c) << endl;
    return 0;
}