#include <iostream>

using namespace std;

class Class {
public:
	Class()
	{ 
		cout << "Object constructed" << endl; 
	}
	~Class()
	{ 
		cout << "Object destructed" << endl; 
	}
	void hello()
	{
		cout << "Object says: hello" << endl; 
	}
};	

void do_calculations(int i)
{
	if(i == 0) 
		throw string("fatal 1");
	Class object;
	if(i == 1)
		throw string("fatal 2");
	object.hello();
	if(i == 2)
		throw string("fatal 3");
}

int main()
{
    for(int i = 0; i < 3; i++)
    {
		try {
		   cout << "-------" << endl;	
		   do_calculations(i);
		}
		catch (string &exc) {
		   cout << exc << endl;
		}
    }	
}