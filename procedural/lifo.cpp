#include <iostream>

using namespace std;

// int stack[100];
// int SP = 0;

// void push(int value) 
// {
// 	stack[SP++] = value;
// }

// int pop() 
// {
// 	return stack[--SP];
// }

class Stack {
private:
    int stackstore[100];
    int SP;
public:
    void push(int value);
    int pop() 
    { 
        return stackstore[--SP];
    }
};

void Stack::push(int value) 
{
	stackstore[SP++] = value;
}

class AddingStack : Stack {
private:
    int sum;
public:
    void push(int value);
    int pop();
    int get_sum(); 
};

void AddingStack::push(int value) 
{
    sum += value;
    Stack::push(value);
}
// AddingStack::AddingStack() : Stack() 
// {
//     sum = 0;
// }


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

int main() 
{
	// push(3);
	// push(2);
	// push(1);
	// cout << pop() << endl;
	// cout << pop() << endl;
	// cout << pop() << endl;

    // Stack little_stack, another_stack, funny_stack;
    
    // little_stack.push(1);
    // another_stack.push(little_stack.pop() + 1);
    // funny_stack.push(another_stack.pop() + 2);
    // cout << funny_stack.pop() << endl;

    AddingStack super_stack;
    
    for(int i = 1; i < 10; i++)
        super_stack.push(i);
    cout << super_stack.get_sum() << endl;
    for(int i = 1; i < 10; i++)
        super_stack.pop();
    cout << super_stack.get_sum() << endl;
}