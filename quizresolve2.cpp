#include <iostream>
#include <vector>

using namespace std;

void swap(float* x, float*y)
{
    float z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    vector<float> t = {3., 2., 1.};

    swap(&t[0], &t[2]);
    cout << t[1];

    int i, k = 1;
    for(i = 0; i < 3; i += 2)
        k++;
    cout << k;
}