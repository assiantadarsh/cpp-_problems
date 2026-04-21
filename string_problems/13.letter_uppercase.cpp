#include<iostream>
#include<cstring>
using namespace std;

// Que -> Convert first letter of each word to uppercase

int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    
    // First letter
    int i = 0;
    if(s[i] >= 'a' && s[i] <='z'){
        s[i] = s[i] - 32;
        
    }
    
    i++;
    while(s[i] != '\0'){
        if(s[i] == ' ' && (s[i+1] >= 'a' && s[i+1]<= 'z')){
            i++;
            s[i] = s[i] - 32;
        }
        i++;
    }
    cout<<"Ans : "<<s;
}