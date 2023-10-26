#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int *it[3];

    for (int i = 0; i < 3; i++){
        it[i] = new int [i + 1];
        for(int j = 0; j < i + 1; j++){
            it[i][j] = 10 * i + j;
        }
    }

    cout << it[2][2];
    for(int i = 0; i < 3; i++){
        delete [] it[i];
    }


    string s1 = "ab";
    string s2 = "Abc";

    if(s1 > s2) 
        cout << "yes";
    else    cout << "NO";





}
