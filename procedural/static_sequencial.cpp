#include <iostream>

using namespace std;

void fun() 
{
    static int var = 99;
    cout << "var = " << ++var << endl;
}

int main() 
{
    for(int i = 0; i < 5; i++)
        fun();
}