#include <iostream>

using namespace std;

class NoConstructorsAtAll {
public:
	int   i;
	float f;
	void display()
    { 
        cout << "i=" << i << ",f=" << f << endl; 
    }
};

int main()
{
	NoConstructorsAtAll  o1;
	NoConstructorsAtAll *o2 = new NoConstructorsAtAll;

	o1.display();
	o2 -> display();
}