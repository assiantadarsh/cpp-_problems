#include<iostream>
using namespace std;

// Que -> 234.23.452.234
// Ans -> 234[.]23[.]452[.]234
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    string ans ="";

    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != '.'){
            ans += s[i];
        }
        else{
            ans = ans + "[.]";
        }
        i++;
    }

    cout<<"Answer : "<<ans;

}