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

float do_calculations()
{
	Class object;

	object.hello();
	return 42.;
}

int main()
{
   cout << do_calculations() << endl;
}