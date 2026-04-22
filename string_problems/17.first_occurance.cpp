#include <iostream>
#include <string>
using namespace std;

// Que -> Find the first occurrence of a substring in a given string.

int main() {
    string s1,s2;

    cout << "Enter first string: ";
    getline(cin,s1);

    cout << "Enter second string: ";
    getline(cin,s2);

    
    int x = s1.find(s2);
    if( x != string :: npos){
        cout<<x;
    }
    else{
        cout<<"-1";
    }
    return 0;
}