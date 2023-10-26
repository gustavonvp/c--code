#include <iostream>

using namespace std;

class Class {
public:
	string msg;
	Class(string txt) : msg(txt) {}
};

void thrower(int i)
{
    switch(i) {
        case 0 : throw string("string");
        case 1 : throw Class("object");
        default: cout << "OK" << endl;
    }
}

void midlevel(int i) 
{
    try {
    	thrower(i);
    } 
    catch(string &exc) {
	   cout << "String [" << exc << "] caught in level()" << endl;
    }    
}

int main()
{
    for(int i = 0; i < 3; i++) {
        cout << "-------" << endl;
	    try {
	       midlevel(i);
	    } 
        catch(Class &exc) {
            cout << "Object [" << exc.msg << "] caught in main()" << endl;
        }
    }
}