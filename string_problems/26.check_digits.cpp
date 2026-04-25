#include<iostream>
using namespace std;

// Que -> Check whether a string contains only digits.

//Time Complexity: O(n)
//Space Complexity: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    for(int i = 0;s[i] != '\0';i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            cout<<"The string does not contain only digits";
            return 0;
        }
    }

    cout<<"The string contains only digit";

    return 0;
}
