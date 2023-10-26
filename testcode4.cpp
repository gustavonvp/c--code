#include <string>
#include <iostream>
using namespace std;

string fun(string t, string s = "x", int r = 1)
{
    while(--r)
        s += s;
    t = t + s;
    return s;
}

int funs(long a, long b = 1)
{
    return a << b;
}

int funs(int a, char b = 'z')
{
    return b - a;
}

int funs(float a , float b = 0)
{
    return a * b;
}



int main ()
{

    cout << funs(1L) << funs('x') << funs(2e0f);

    string name = "a";
    cout << fun(name);
    cout << name;

    
}