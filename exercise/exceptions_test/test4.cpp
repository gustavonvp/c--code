#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

void f(void){
    throw domain_error("err");
}



int main (void) {
  int a = 4;
    try {
        f();
    }catch(runtime_error &e){
        a--;
    }
    catch(...){
        a++;
    }

    cout << a << endl;
    return 0;
}