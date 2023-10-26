#include <iostream>
#include <vector>
using namespace std;

struct S {
    float *f;
};

void make(S *p, float x = 10)
{
    float *f = new float;
    *f = sizeof(*f) / sizeof(float) * 10;
    p-> f = f;
}

int fun(long a)
{
    return a / a;
}

int fun(int a)
{
    return 2 * a;
}

int fun (double a = 3.0)
{
    return a;
}


int main ()
{
    S *ss = new S;
    make(ss);
    cout << *(*ss).f;
    delete ss->f;
    delete ss;

    cout << fun(1000000000L) << fun(1L) << fun(1.f);

    float x = 3.14, *p = &x;

    p[0] = ++x;
    cout << x;

    vector<int> t = {3, 2, 1};
    int *ptr = t.data() + 1;

    (*(ptr + 1))++;
    (*(ptr - 1))++;
    cout << t[0] << t[1] << t[2];
}