#include<iostream>
using namespace std;

// Que -> Remove all non-alphabet characters from a string.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string temp = "";

    for(size_t i = 0;i < s.length() ; i++){      // int is signed integer but s.length is usigned integer so use size_t....

        if((s[i] >= 'A' && s[i]<= 'Z' ) || (s[i] >= 'a' && s[i] <= 'z' )){
            temp += s[i];
        }
        // if(isalpha(s[i])){       // USE built in function.
        //     temp += s[i];
        // }

    }

    

    cout<<"Answer : "<<temp;

    return 0;
}
