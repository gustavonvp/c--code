#include <iostream>
#include <exception>
using namespace std;
int i = 1;
void f(void){
    i++;
    throw 1;
    i++;
}

void g (void){
  i++;
  f();
  i++;
}

int main (void) {
  
    try {
        g();
        i++;
    }catch(...){
        i++;
    }
    

    cout << i << endl;
    return 0;
}