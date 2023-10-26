class Stack {
private:
    int stackstore[100];
    int SP;
public:
    Stack() 
    { 
        SP = 0; 
    }
    void push(int value);
    int pop() 
    {
        return stackstore[--SP];
    }
};


class AddingStack : Stack {
private:
    int sum;
public:
    AddingStack(){
        sum = 0;
    }
    void push(int value);
    int pop();  
    int get_sum();

};
// AddingStack::AddingStack() : Stack() 
// {
//     sum = 0;
// }


void Stack::push(int value) 
{
    stackstore[SP++] = value;
}
void AddingStack::push(int value) 
{
    sum += value;
    Stack::push(value);
}
int AddingStack::pop() 
{
    int val = Stack::pop();
    sum -= val;
    return val;
}
int AddingStack::get_sum() 
{
    return sum;
}

#include <iostream>

using namespace std;

int main() 
{
    AddingStack super_stack;
    
    for(int i = 1; i < 10; i++)
        super_stack.push(i);
    cout << super_stack.get_sum() << endl;
    for(int i = 1; i < 10; i++)
        super_stack.pop();
    cout << super_stack.get_sum() << endl;
}