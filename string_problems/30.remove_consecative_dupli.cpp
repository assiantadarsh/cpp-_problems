#include<iostream>
using namespace std;

// Que -> Remove consecutive duplicate characters from a string.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string result = "";

    result += s[0];
    int i = 1;

    while(s[i] != '\0'){

        if(s[i] != s[i-1]){
            result += s[i];
        }
        i++;
    }

    cout<<"After removing duplicats consecative : "<<result;

    return 0;
}
