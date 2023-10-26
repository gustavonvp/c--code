#include <iostream>
using namespace std;
int z = 1;
class A {
public:
    int a;
    A() {a = 1; z++;}
    A(A &aa) {a = 3; z++;}
    ~A() {z--;}
};

void fun(void) {
    A a,b(a), c(b);
}
int main(void){
    cout << z << endl;
    return 0;
}