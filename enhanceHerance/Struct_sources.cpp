#include <iostream>

using namespace std;

class A { 
public:
	A(A &src)
	{ 
		cout << "copying A..." << endl; 
	}
	A() { }
	void do_it() 
	{ 
		cout << "A is doing something" << endl; 
	}
};

class B { 
public:
	B(B &src) 
	{ 
		cout << "copying B..." << endl; 
	}
	B(){ }
	void do_it() 
	{ 
		cout << "B is doing something" << endl; 
	}
};

class Compo {
public:
	Compo() { } ;
	A f1;
	B f2;
};

int main() 
{
	Compo  co1;
	Compo  co2 = co1;

	co2.f1.do_it();
	co2.f2.do_it();
}