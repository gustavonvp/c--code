#include <iostream>

using namespace std;

class Super {
protected:
	int storage;
public:
	void put(int val)
    { 
        storage = val; 
    }
	int get() 
    { 
        return storage; 
    }
};

class Sub : public Super {
public:
	void print() 
    { 
        cout << "storage = " << storage << endl; 
    }
};

int main() 
{
	Sub object;

	object.put(100);
	object.put(object.get() + 1);
	object.print();
}