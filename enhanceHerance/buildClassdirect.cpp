#include <iostream>

using namespace std;

class Class {
public:
	int field;
	Class(int n) : field(n) { };
	Class(Class &c) : field(0) { };
	Class() : field(1) { };
	void set(int n) 
    { 
        field = n; 
    }
	int get() 
    { 
        return field; 
    }
};

int main(void) {
Class o1(1);
const Class o3(o1);
Class o4(4);
Class o2(2);
int i;
int d;
    o2.field = 3;
    o2.set(1);
    i = o2.get();
    o4.field = 5;

cout << o2.get() << endl;
cout << o4.get() << endl;
}
