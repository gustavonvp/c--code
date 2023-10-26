#include <iostream>
#include <vector>
using namespace std;

int f1(int * a)
{
    return *a;
}

int *f2(int *a)
{
    return a;
}

int *f3(int &a)
{
    return &a;
}

int *make(int v)
{
    int *p = new int;
    *p = v + 1;
    return p;
}

int *play(int &v)
{
    cout << ++v;
    return &v;
}
void remove(int *v){
    delete v;

}
int main()
{

    remove(play(*make(3)));

    int *val = new int;

    *val = sizeof(val) / sizeof(int *);
    int *tabs = new int[*val];
    tabs[0] = *val;
    delete val;
    cout << *tabs;
    delete [] tabs;

    int value = 2;
    cout <<f1(f2(f3(value)));

    vector<int> tab = {1,2,4};
    int *p1 = &tab[0], *p2 = p1 + 2;

    tab[1] = p2[-1] + *p1;
    cout << tab[1];


}