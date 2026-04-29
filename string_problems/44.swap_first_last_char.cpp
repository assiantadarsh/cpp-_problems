#include<iostream>
using namespace std;

// Que -> Swap the first and last character of a string.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int n = s.length() - 1;

    if(n > 1){
        char temp = s[0];
        s[0] = s[n];
        s[n] = temp;
    }
    
    

    cout<<"After swapping : "<<s;
    return 0;
}
