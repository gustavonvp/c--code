#include<iostream>
#include <string>
#include <vector>

using namespace std;

string fun(string &t, string  s = "", int r =1)
{
    while(--r)
        s += s;
    t = t + s;
    return s;
}

float Float(float x)
{
    return 2 * x / (.5 * x);
}

void Void(int n)
{
    float v = n;
    v = Float(v);
    cout << v;
}

int funs(float a, float b) 
{
    return a / b;
}

int main(){

    Void(1);

    cout << funs(funs(1.,2.),funs(2.,1.));

    string name = "x";
    cout << fun(name, name);
    cout << name;

    vector<float> f(2);

    float *p1 = f.data(), *p2 = p1 + 1;
    cout << (p2 - p1) / sizeof(float);
}