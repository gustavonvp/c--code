#include <iostream>
#include <string>

using namespace std;

string replicate(string s = "x", int r = 1)
{
    string t;
    while(r--)
        t += s;
    return t;

}


int main()

{
    

    string s = "123";
    s.append(s.substr(2)).push_back(s[s.length() - 2]);
    cout << s;

    float x = 1.0 / 5.0;
    int z = x;

    cout << z;

    string pattern = "a";
    cout << replicate(pattern);

    int i = 0, k = i;

    while(i == 0) {
        if(k > 1)
            i = k;
        ++k;
    }

    cout << k;
}