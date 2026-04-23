#include<iostream>
using namespace std;

// Que -> Remove a character from a string.
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char ch;
    cout<<"Enter the character you want to remove :";
    cin>>ch;

    string result = "";
    
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != ch){
            result += s[i];
        }
        i++;
    }

    cout<<"Result : "<<result;

}