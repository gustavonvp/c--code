#include <cstdlib>
#include <exception>
#include <iostream>
#define throw(X,Y) 

class X {};
class Y {};
class Z : public X {};
class W {};
 
void f() throw(X, Y) 
{
    bool n = false;
 
    if (n)
        throw X(); // OK, would call std::terminate()
    if (n)
        throw Z(); // also OK
 
    __throw_exception_again W(); // will call std::unexpected()
}
 
void handler()
{
    std::cerr << "That was unexpected!\n"; // flush needed
    std::abort();
}
 
int main()
{
    std::set_unexpected(handler);
    f();
}