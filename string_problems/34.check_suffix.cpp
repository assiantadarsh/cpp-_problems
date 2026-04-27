#include<iostream>
using namespace std;

// Que -> Check if a string ends with a given suffix.
// Time Complexity: O(m) where m is size of Suffix . 
// Space Complexity: O(1)
int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string suffix;
    cout<<"enter Suffix : ";
    getline(cin,suffix);

    if(suffix.length() > s.length()){
        cout<<"Not Suffix";
        return 0;
    }

    int i = s.length() - 1;
    int j = suffix.length() - 1;

    while(j >= 0){

        if(s[i] != suffix[j]){
            cout<<"Not suffix";
            return 0;
        }
        i--;
        j--;
    }

    cout<<"Suffix";

    return 0;
}
