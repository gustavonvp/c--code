#include <iostream>
using namespace std;
int main (void) {
    int b = 4, *c = NULL, i = -1;

    try {
        c = new int [i];
        b--;
    }catch(exception &e){
        c = new int[1];
        b++;
    }

    cout << b << endl;
    return 0;
}