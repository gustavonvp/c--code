#include <iostream>

using namespace std;

 bool low_level_eval(int result)
{
    
    if(!result) return false;
    else
    return result;
}

bool middle_level_eval(int result)
{
     if(!result) return false;
     low_level_eval(result);
   
    
}

bool top_level_eval(int result)
{
    if(!result) return false;
    middle_level_eval(result);
   
    
} 


float div(float a, float b)
{
	if(b == 0.0)
		throw string("I can’t believe - division by zero :(");
	return a / b;
}
int main()
{
    
     bool result = top_level_eval(result);
     if(!result) {
         cout << "Sarcasm!" << endl;
         return 1;
     }

    float a, b;
	
	while(cin >> a) {
		try {
			cin >> b;
			cout << div(a, b) << endl;
		} catch (string &problem) {
			cout << "Look what you did, you bad user!" << endl;
			cout << problem << endl;
		}
	}
	cout << "The End" << endl;
    
}