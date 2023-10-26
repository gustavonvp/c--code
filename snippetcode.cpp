#include <iostream>
#include <string>

using namespace std;

 namespace S {
        int A = 1;        
    }

    namespace S {
        int B = A + 2;
    }


int main () {

//    short s = 1;
//     int i = 2;
//     float f = 4.4;
//     double d = 6.6;

//     cout << i/static_cast<float>(s) + int(f)/i + (long)d/s;
//     return 0;

    
    string s = "AB";
    s.append(s).push_back(s[s.length()] - 1);
    cout << s;

    // int ib = 2;
    // string sd = "2";


    // cout << sd + ib;



    string s1 = "0123";
    cout << s1.substr(1,3).substr(2).substr();


    short s2 = 1;
    int i1 = 2;
    float f1 = 4.4;
    double d1 = 8.8;

    cout << s2/i1 + f1/i1 + d1/s2;



    S::A = S::A + 1;
    {
        using namespace S;
        ++B;
    }

    cout << S::B << S::A;
    return 0;


   

 

}