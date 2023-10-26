#include <iostream>

using namespace std;

int main () {
    int a = 2, b = a >> 1;
    int c = b >> a;
    int d = 1 << c;
    int e = d << d;

    cout << e;

    int i = 1, k = i & 0;

    do {
        k++;
        if(k > 1)
            i = k;

    }while(i<2);

    cout << k;
}