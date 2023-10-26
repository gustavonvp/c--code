#include <iostream>

using namespace std;

class Element {
	int value;
public:
	int get()
	{ 
		return value; 
	}
	void put(int value)
	{ 
		this -> value = value;
	}
};

class Collection {
	Element el1, el2;
public:	
	int get(int elno)
	{ 
		return elno == 1 ? el1.get() : el2.get(); 
	}
	void put(int elno, int val)
	{ 
		if(elno == 1) 
			el1.put(val); 
		else
			el2.put(val); 
	}
};

int main()
{
	Collection coll;
	
	for(int i = 1; i <= 2; i++)
		coll.put(i, i + 1);
	for(int i = 1; i <= 2; i++)
		cout << "Element #" << i << " = " << coll.get(i) << endl;
}