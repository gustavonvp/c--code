#include <iostream>

using namespace std;

class Class {
public:
	Class()
	{ 
		cout << "Object constructed (#1)" << endl; 
	}
	Class(int value) 
	{ 
		this -> value = value; 
		cout << "Object constructed (#2)" << endl; 
	}
	~Class() 
	{
		cout << "Object destructed!" << endl;
	}

    	void inc_and_print()
	{
		cout << "value = " << ++value << endl;
	}

	int value;
};

int main() 
{
	Class *ptr = new Class();
    ptr -> value = 1;
	ptr -> inc_and_print();
	delete ptr;

    Class *ptr1 = new Class, *ptr2 = new Class(2);

	ptr1 -> value = 1;
	ptr1 -> inc_and_print();
	ptr2 -> inc_and_print();
	delete ptr2;
	delete ptr1;
}