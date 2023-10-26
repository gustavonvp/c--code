#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace Universe {
    int Galaxy = 1;
}

namespace Universe {
    int Planet = Galaxy + 2;
}

float combine(float x1 = 0.0, int x2 = 1.0){
    return x2 + x1;
}

int main(){
    Universe::Galaxy *=2;
    {
        using namespace Universe;
        Planet++;
    }

    cout << Universe::Galaxy << Universe::Planet;


    vector<char> text(5);

    char *chr1 = text.data() + 2, *chr2 = chr1 + 2;
    cout << chr2 - text.data();


    string s1 = "brick";
    string s2 = "block";
    string s;

    s1.swap(s2);
    s2.swap(s);
    s.swap(s2);
    cout << s1;

    int a = 2, b = a >> 1;
    int c = a >> b;
    int d = 1 << c;
    int e = d >> d;

    cout << e;

    cout << combine() + combine(1.) + combine(2., 3.);

    int k = 3;
    if(k > 0){
        if(k != 3)
            k--;
        if(k == 3)
            k++;
    }

    if(k < 0) {
        k = 5;
    }

    cout << k;
}