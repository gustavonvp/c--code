#include <iostream>
#include <string>

using namespace std;

int main()
{

    // int i = 2;
    // string s = "2";

    // cout << s == i;

    int i = 2;
    float f = 1;
    cout << (static_cast<float>(i) >> 1);

    int a = 0x02, b = 001;
    int c = a ^ b;
    int d = c | a;
    int e = d & 0;

    cout << e;

 
}