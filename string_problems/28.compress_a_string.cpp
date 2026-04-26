#include<iostream>
using namespace std;

// Que -> Compress the string using character counts.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    for(int i = 0;s[i] != '\0';i++){

        int count = 0;
        int x = 0;

        if(s[i] == ' ') continue;

        for(int k = 0;k<i;k++){

            if(s[k] == s[i]) x = 1;
            

        }
        if(x == 1) continue;
        else{
            for(int j = 0;s[j] != '\0';j++){
                if(s[i] == s[j]){
                    count++;
                }
            }
            cout<<s[i]<<count;
        }

    }
    return 0;
}
