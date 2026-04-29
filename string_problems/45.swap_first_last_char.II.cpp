#include<iostream>
using namespace std;

// Que -> Swap the first and last character of a string.
// Method -> 2

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int n = s.length() - 1;

    // if(n >= 1){
    //     s[0] = s[0] ^ s[n];
    //     s[n] = s[0] ^ s[n];
    //     s[0] = s[0] ^ s[n];
    // }

    // or use built in function swap

    swap(s[0], s[n]);

    cout<<"After swapping : "<<s;
    return 0;
}
