#include<iostream>
using namespace std;

// Que -> Remove all numeric digits from a string.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string temp = "";

    for(size_t i = 0;i < s.length() ; i++){      // int is signed integer but s.length is usigned integer so use size_t....

        if(!(s[i] >= '0' && s[i]<= '9')){
            temp += s[i];
        }

    }

    cout<<"Answer : "<<temp;

    return 0;
}
