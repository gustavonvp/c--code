#include <iostream>

using namespace std;

class Class {
public:
    Class() 
    { 
        this -> value = -1; 
    }
    Class(int val) 
    { 
        this -> value = val; 
    }
    void set_val(int value) 
    { 
        this -> value = value; 
    }
    int get_val() 
    { 
        return value; 
    }
private:
    int value;
};

int main (){
    Class object1, object2(100);
    cout << object1.get_val() << endl;
    cout << object2.get_val() << endl;
}