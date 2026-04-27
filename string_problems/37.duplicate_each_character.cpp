#include<iostream>
using namespace std;

// Que -> Create a new string by duplicating every character.
// Time: O(n)
// Space: O(n)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string result = "";
    result.reserve(2 * s.length());     // Optional but optimize 

    int i = 0;

    while(s[i] != '\0'){
        
        result += s[i];
        result += s[i];
        i++;
    }

    cout<<"Result : "<<result;

    return 0;
}
