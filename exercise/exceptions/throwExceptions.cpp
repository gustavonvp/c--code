#include <iostream>

using namespace std;

float do_calculations(float a, float b, float c, float d)
{
    try {
		float x = 1.;

		if(a == 0.0)
			throw string("Bad arg a");
		x /= a;
		if(b == 0.0)
			throw string("Bad arg b");
		x /= b;
		if(c == 0.0)
			throw string("Bad arg c");
		x /= c;
		if(d == 0.0)
			throw string("Bad arg d");
		return x / d;
   } 
   catch(string &exc) {
		cout << "Something bad happened: " << exc << endl;
		return 0.0;
   }
}

int main()
{
	do_calculations(1,2,3,0);
}