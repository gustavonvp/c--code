#include "mystack.h"
#include <iostream>
using namespace std;

stack_size_error::stack_size_error(const std::string &msg) : std::length_error(msg)
{ };

stack_bad_alloc::stack_bad_alloc(const std::string &msg) : std::bad_alloc()
{ };

stack_overflow::stack_overflow(const std::string &msg) : std::logic_error(msg) 
{ };

stack_empty::stack_empty(const std::string &msg) : std::logic_error(msg) 
{ };

Stack::Stack(int size)
{ 
    if(size <= 0)
        throw stack_size_error("stack size must be >= 0");
    try {
        stackstore = new int[size];
    }
    catch(std::bad_alloc &ba) {
        throw stack_bad_alloc("stack allocation error");
    }
    stacksize = size;
    SP = 0;
}

Stack::~Stack()
{
    delete [] stackstore;
}

void Stack::push(int value)
{
    if(SP == stacksize)
        throw stack_overflow("stack size exceeded");
    stackstore[SP++] = value;
}

int Stack::pop()
{ 
    if(SP == 0)
        throw stack_empty("stack is empty");
    return stackstore[--SP]; 
}
int main()
{
     Stack stack;
     stack.push(1);
     cout << stack.pop() << endl;

 try {
        Stack stte;
        stte.push(1);
        cout << stte.pop() << endl;
        cout << stte.pop() << endl;    
    }
    catch(stack_bad_alloc &sba) {
        cout << "No room for the stack - sorry!" << endl;
    }
    catch(stack_size_error &sse) {
        cout << "Stacks of that size don't exist - sorry!" << endl;
    }
    catch(stack_overflow &se) {
        cout << "Stack is too small for that many pushes - sorry!" << endl;
    }
    catch(stack_empty &su) {
        cout << "Stack is empty - sorry!" << endl;
    }
    catch(...) {
        cout << "I don't know what I'm doing";
    }

  try {
        Stack stack(1);
        stack.push(1);
        stack.push(2);
        stack.push(3);
        cout << stack.pop() << endl;

    }
    catch(stack_bad_alloc &sba) {
        cout << "No room for the stack - sorry!" << endl;
    }
    catch(stack_size_error &sse) {
        cout << "Stacks of that size don't exist - sorry!" << endl;
    }
    catch(stack_overflow &se) {
        cout << "Stack is too small for that many pushes - sorry!" << endl;
    }
    catch(stack_empty &su) {
        cout << "Stack is empty - sorry!" << endl;
    }
    catch(...) {
        cout << "I don't know what I'm doing";
    }

    try {
        Stack stack(0);
        stack.push('s');
        cout << stack.pop() << endl;
    }
    
    catch(stack_bad_alloc &sba) {
        cout << "No room for the stack - sorry!" << endl;
    }
    catch(stack_size_error &sse) {
        cout << "Stacks of that size don't exist - sorry!" << endl;
    }
    catch(stack_overflow &se) {
        cout << "Stack is too small for that many pushes - sorry!" << endl;
    }
    catch(stack_empty &su) {
        cout << "Stack is empty - sorry!" << endl;
    }
    catch(...) {
        cout << "I don't know what I'm doing";
    }

     try {
        Stack stack(20000000);
        stack.push(200000000);
        cout << stack.pop() << endl;
    }
    catch(stack_bad_alloc &sba) {
        cout << "No room for the stack - sorry!" << endl;
    }
    catch(stack_size_error &sse) {
        cout << "Stacks of that size don't exist - sorry!" << endl;
    }
    catch(stack_overflow &se) {
        cout << "Stack is too small for that many pushes - sorry!" << endl;
    }
    catch(stack_empty &su) {
        cout << "Stack is empty - sorry!" << endl;
    }
    catch(...) {
        cout << "I don't know what I'm doing";
    }
}