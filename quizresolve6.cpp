#include <iostream>
#include <vector>

using namespace std;

double eval(double x)
{
    return x / (.5 * x);
}

void use(double n)
{
    int v = 1 / n;

    v = eval(v);
    cout << v;
}


char do1(char *x)
{
    return *x;
}

char *do2(char *y)
{
    return y;
}

char *do3(char &z)
{
    return &z;
}


int main()
{
    char sign = '1';
    cout << do1(do2(do3(sign)));
    use(1.f);

    vector<double> arr = {1e-1, 1e0, 1e1};
    double *ptr = arr.data() + 2;

    cout << arr[1] - *ptr;
}