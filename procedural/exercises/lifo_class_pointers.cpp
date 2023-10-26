class Class {
public:
    void set_val(int value) 
    { 
        this -> value = value;
    }
    // void set_val() 
    // { 
    //     value = -2; 
    // }
   // int get_val();
    int get_val() 
    { 
        return value; 
    }
private:
     int value;
};

#include <iostream>

using namespace std;

int main() 
{   
    Class object;
    object.set_val(2);
    //Class object2;
    
    cout << object.get_val() << endl;
	
    // Class1 object11(100), object12 = object11;
	// Class2 object21(200), object22 = object21;

	// cout << object12.value << endl;
	// cout << object22.value << endl;
}