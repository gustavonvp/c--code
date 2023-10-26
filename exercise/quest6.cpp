#include <iostream>
using namespace std;
void f (const int &v) {
   ++v;
   return v + 1;

};


int main(void) {
    int i = 1, j = f(i);
    cout << j - i << endl;
    return 0;
}