#include <stdexcept>
#include <iostream>
#include <exception>
using namespace std;

void unexp()
{
	cout << "Unexpected exception arrived!" << endl;
	throw;
}

void function() throw(int, bad_exception) 
{
	throw 3.14; 
}


int main()
{
	set_unexpected(unexp);
	try {
		function();
	} 
    catch(double f) {
		cout << "Got double" << endl;	
	} 
    catch(bad_exception bad) {
		cout << "It's so bad..." << endl;
	}
	cout << "Done" << endl;
}

