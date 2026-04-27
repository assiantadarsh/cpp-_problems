#include<iostream>
using namespace std;

// Que -> Check if a string starts with a given prefix.
// Time Complexity: O(m) where m is size of prefix 
// Space Complexity: O(1)
int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string prefix;
    cout<<"enter prefix : ";
    getline(cin,prefix);

    if(prefix.length() > s.length()){
        cout<<"Not prefix";
        return 0;
    }

    int i = 0;

    while(prefix[i] != '\0'){
        if(s[i] != prefix[i]){
            cout<<"Not prefix";
            return 0;
        }
        i++;
    }

    cout<<"Prefix";

    return 0;
}
