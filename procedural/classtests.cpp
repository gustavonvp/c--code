#include <iostream>

using namespace std;

class Class {
public:
	static int Counter;

	Class() 
	{ 
		++Counter; 
	};

	~Class() 
	{ 
		--Counter; 
		if(Counter == 0) 
			cout << "Bye, bye!" << endl; 
	};

	void HowMany() 
	{ 
		cout << Counter << " instances" << endl; 
	}
};

int Class::Counter = 0;

int main() 
{
	Class a;
	Class b;

	cout << Class::Counter << " instances so far" << endl;
	
	Class c;
	Class d;

	d.HowMany();
}