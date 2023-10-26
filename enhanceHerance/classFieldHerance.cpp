#include <iostream>

using namespace std;

class A {
friend class B;
friend class C;
private:
	int field;
protected:
	void print() 
    { 
        cout << "It's a secret, that field = " << field << endl; 
    }
};

class C {
public:
	void do_it(A &a)
    { 
        a.print(); 
    }
};

class B {
public:
	void do_it(A &a, C &c)
    { 
        a.field = 111; c.do_it(a); 
    }
};

int main()
{
	A a; B b; C c;
	
	b.do_it(a,c);
}