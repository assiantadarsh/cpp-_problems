#include<iostream>
#include<string>
using namespace std;

// Que -> Convert a numeric string into an integer with stoi().
int main(){
    string s;
    cout<<"Enter string only number: ";
    getline(cin,s);
    string temp ="";

    for(int i = 0;s[i] != '\0';i++){
        if(s[i] != ' '){
            temp = temp + s[i];
        }
    }

    int x = 1;

    for(int i = 0; temp[i] != '\0';i++){
        if(!(temp[i] >= '0' && temp[i] <= '9')){
            x = 0;
            break;
        }
    }

    if(x == 1){
        int num = stoi(temp);
        cout<<num;
    }
    else{
        cout<<"404 Error conversion not possible";
    }

}