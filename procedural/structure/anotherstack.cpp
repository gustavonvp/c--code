#include <iostream>

using namespace std;

class Stack {
private:
    int *stackstore;
    int SP;
public:
    Stack(int size = 100)
    {
        stackstore = new int[size];
        SP = 0;
    }
    ~Stack()
    {
        delete [] stackstore;
    }
    void push(int value)
    {
        stackstore[SP++] = value;
    }
    int pop()
    {
        return stackstore[--SP];
    }
    Stack& operator<< (int v);
    Stack& operator>> (int &v);
};

Stack& Stack::operator<< (int v)
{
    push(v);
    return *this;
}

Stack& Stack::operator>> (int &v)
{
    v = pop();
    return *this;
}

int main()
{
    int i = 2, j;
    Stack stk;

    stk << 1 << 2 * i;
    stk >> j >> i;
    cout << j << endl << i << endl;


    int b = 2;
    Stack stt;

    stt << 1;
    stt << 2 * b;
    stt << b;
    stt >> b; cout << b << endl;
    stt >> b; cout << b << endl;
    stt >> b; cout << b << endl;
}