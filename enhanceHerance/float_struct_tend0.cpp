#include <iostream>

using namespace std;

class WithConstructor {
public:
    int i;
    float f;
    WithConstructor(int a = 0, float b = 0.) : i(a), f(b) { }
    void display()
    { 
        cout << "i=" << i << ",f=" << f << endl; 
    }
};

int main()
{
    WithConstructor  o1;
    WithConstructor *o2 = new WithConstructor();

    o1.display();
    o2 -> display();
}