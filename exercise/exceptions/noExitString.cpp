#include <iostream>

using namespace std;

int main()
{
	int a, b;

	while(cin >> a) {
		cin >> b;
		if(b != 0)
			cout << a / b << endl;
		else
			cout << "Are you kidding me?" << endl;
	}
	cout << "EOF" << endl;
}