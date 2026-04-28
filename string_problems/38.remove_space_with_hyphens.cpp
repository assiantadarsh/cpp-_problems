#include<iostream>
using namespace std;

// Que -> Replace all spaces in a string with -

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    int i = 0;

    while(s[i] != '\0'){

        if(s[i] == ' '){
            cout<<"-";
        
        }
        else{
            cout<<s[i];

        }
        i++;
    }

    return 0;
}
