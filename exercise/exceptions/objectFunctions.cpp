#include <iostream>
#include <exception>

using namespace std;

class A {  
public:
   virtual void f() {}
};

class AA : public A {  
public:
   void aa() {};
};

int main()
{
	A a;
	try {
		dynamic_cast<AA &>(a).aa();
	} 
    catch (exception ex) {
		cout << "[" << ex.what() << "]" << endl;
	}
}