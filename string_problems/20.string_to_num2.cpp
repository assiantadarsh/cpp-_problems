#include<iostream>
#include<string>
using namespace std;

// Que -> Convert a numeric string into an integer .
// Without stoi()

int main(){
    string s;
    cout<<"Enter string only number: ";
    getline(cin,s);
    string s1 ="";
    int rev ,digit = 0;

    for(int i = 0;s[i] != '\0';i++){
        if(s[i] != ' '){
            s1 = s1 + s[i];
        }
    }
    if(s1.length() == 0){
        cout<<"404 Error";
        return 0;
    }

    for(int i = 0;s1[i] != '\0';i++){
        if(!(s1[i] >= '0' && s1[i] <= '9')){
            cout<<"404 Error";
            return 0;
        }
        rev = int(s1[i] - '0');
        digit = digit * 10 + rev;
    }


    cout<<digit;


}