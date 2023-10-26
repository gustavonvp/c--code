#include <iostream>
#include <vector>
using namespace std;

int f1(int a){
    return ++a;
}

int f2(int &a) {
    return ++a;
}

int f3(int *a) {
    return *a + 1;
}
int fun(int* t){
    t[0] += t[1];
    return t[0];
}

int main () {

    int value = 2;
    
    cout << f1(value);
    cout << f2(value);
    cout << f3(&value);


    vector<int> t = {5,6,7};
    cout << fun(&t[1]);
    cout << t[0];


   
}