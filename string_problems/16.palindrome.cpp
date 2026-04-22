#include<iostream>
using namespace std;

// Que -> Check whether a given string is a palindrome or not.

int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    int i = 0,j = s.length() - 1;
    int x = 0;

    while(i<j){
        x = 0;
        if(s[i] != s[j]){
            x = 1;
            break;
        }

            i++;
            j--;
    }
    if(x == 0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}