#include<iostream>
#include<cstring>
using namespace std;

// Que -> Convert first letter of each word to Lower case

int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    
    // First letter
    int i = 0;
    if(s[i] >= 'A' && s[i] <='Z'){
        s[i] = s[i] + 32;
        
    }
    
    i++;
    while(s[i] != '\0'){
        if(s[i] == ' ' && (s[i+1] >= 'A' && s[i+1]<= 'Z')){
            i++;
            s[i] = s[i] + 32;
        }
        i++;
    }
    cout<<"Ans : "<<s;
}