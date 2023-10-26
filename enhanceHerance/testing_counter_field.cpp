#include <iostream>

using namespace std;

class A;

class C {
public:
	void dec(A &a);
};

class A {
friend class B;
friend void C::dec(A&);
friend void do_it(A&);
private:
	int field;
protected:
	void print() 
	{ 
		cout << "It's a secret, that field = " << field << endl; 
	}
};

void C::dec(A &a) 
{ 
	a.field--; 
}

class B {
public:
	void do_it(A &a) 
	{ 
		a.print(); 
	}
};

void do_it(A &a) 
{
	a.field = 99;
}

int main() 
{
	A a; B b; C c;
	
	do_it(a);
	b.do_it(a);
    c.dec(a);
    do_it(a);
    c.dec(a);
    c.dec(a);
    b.do_it(a);
}